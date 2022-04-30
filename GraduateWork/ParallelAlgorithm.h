#pragma once
#include "GeneralFunctions.h"
#include <omp.h>


matrix parallelCalcDiscrepancy(matrix& r, const matrix& V, double param_x, double param_y, double A, int a, int b, int c, int d, size_t n, size_t m, size_t threads) {
	double h = (b - a) / (double)n;
	double k = (d - c) / (double)m;
	int i, j;
	omp_set_num_threads(threads);
#pragma omp parallel for shared(r,V,A,param_x, param_y,h,k) private (i) schedule(static)
	for (j = 1; j < m; j++) {
		for (i = 1; i < n; i++) {
			r[j][i] = V[j][i] * A + (V[j][i + 1] + V[j][i - 1]) / param_x + (V[j + 1][i] + V[j - 1][i]) / param_y + RightSide(a + i * h, c + j * k);
		}
	}
	return r;
}


matrix parallelCalcAh(matrix& H, matrix& r, double A, double param_x, double param_y, size_t n, size_t m, size_t threads) {
	matrix Ah;
	Ah.assign(m + 1, vector<double>(n + 1));
	int i, j;
	omp_set_num_threads(threads);
#pragma omp parallel for shared(Ah, A, H, param_x, param_y) private (i) schedule(static)
	for (j = 1; j < m; j++) {
		for (i = 1; i < n; i++) {
			Ah[j][i] = A * H[j][i] + (H[j][i - 1] + H[j][i + 1]) / param_x + (H[j - 1][i] + H[j + 1][i]) / param_y; // (A,h)			
		}
	}
	return Ah;
}


double parallelCalcAhh(matrix& Ah, matrix& r, size_t n, size_t m, size_t threads) {
	double temp = 0;
	int i, j;
	omp_set_num_threads(threads);
#pragma omp parallel for shared(Ah, r) private(i) reduction(+:temp) schedule(static)
	for (j = 1; j < m; j++) {
		for (i = 1; i < n; i++) {
			temp += Ah[j][i] * r[j][i];// (Ah,h)
		}
	}
	return temp;
}

matrix parallelCalcH(matrix& H, matrix& r, double betta, size_t n, size_t m, size_t threads) {
	int i, j;
	omp_set_num_threads(threads);
#pragma omp parallel for shared(H, r, betta) private (i) schedule(static)
	for (int j = 1; j < m; j++) {
		for (int i = 1; i < n; i++) {
			H[j][i] = r[j][i] * (-1) + H[j][i] * betta; // h^(s) = betta * h^(s-1) - r^(s)
		}
	}
	return  H;
}


double parallelCalcAlpha(matrix& H, matrix& r, double param_x, double param_y, double A, int step_count, double& Ahh, size_t n, size_t m, size_t threads) {
	double temp = 0, betta = 0, alpha = 0;
	matrix Ah;
	if (step_count != 0) {
		Ah = parallelCalcAh(H, r, A, param_x, param_y, n, m, threads);
		temp = parallelCalcAhh(Ah, r, n, m, threads);
		//	temp = calcAhh(Ah, r); 
		betta = temp / Ahh;
	}

	H = parallelCalcH(H, r, betta, n, m, threads);
	//	H = calcH(H, r, betta);
	Ahh = 0; temp = 0;
	Ah = parallelCalcAh(H, r, A, param_x, param_y, n, m, threads);
	//	Ah = calcAh(H, r, A, param_x, param_y, n, m);
	Ahh = parallelCalcAhh(Ah, H, n, m, threads);
	//	Ahh = calcAhh(Ah, H);
	temp = parallelCalcAhh(r, H, n, m, threads);
	//	temp = calcAhh(r, H);
	alpha = -temp / Ahh;

	return alpha;

}