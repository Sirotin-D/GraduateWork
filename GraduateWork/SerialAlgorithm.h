#pragma once
#include "GeneralFunctions.h"




matrix calcDiscreapancy(matrix& r, const matrix& V, double param_x, double param_y, double A, int a, int b, int c, int d, size_t n, size_t m) {
	double h = (b - a) / (double)n;
	double k = (d - c) / (double)m;
	for (int j = 1; j < m; j++) {
		for (int i = 1; i < n; i++) {
			r[j][i] = V[j][i] * A + (V[j][i + 1] + V[j][i - 1]) / param_x + (V[j + 1][i] + V[j - 1][i]) / param_y + RightSide(a + i * h, c + j * k);
		}
	}
	return r;
}


matrix calcAh(matrix& H, matrix& r, double A, double param_x, double param_y, size_t n, size_t m) {
	matrix Ah;
	Ah.assign(m + 1, vector<double>(n + 1));
	for (int j = 1; j < m; j++) {
		for (int i = 1; i < n; i++) {
			Ah[j][i] = A * H[j][i] + (H[j][i - 1] + H[j][i + 1]) / param_x + (H[j - 1][i] + H[j + 1][i]) / param_y; // (A,h)			
		}
	}
	return Ah;
}

double calcAhh(matrix& Ah, matrix& r, size_t n, size_t m) {
	double temp = 0;
	for (int j = 1; j < m; j++) {
		for (int i = 1; i < n; i++) {
			temp += Ah[j][i] * r[j][i];// (Ah,h)
		}
	}
	return temp;
}


matrix calcH(matrix& H, matrix& r, double betta, size_t n, size_t m) {
	for (int j = 1; j < H.size()-1; j++) {
		for (int i = 1; i < n; i++) {
			H[j][i] = r[j][i] * (-1) + H[j][i] * betta; // h^(s) = betta * h^(s-1) - r^(s)
		}
	}
	return  H;
}

double calcBetta(matrix& H, matrix& r, matrix& AH, double A, double param_x, double param_y, double& Ahh, size_t n, size_t m) {


	AH = calcAh(H, r, A, param_x, param_y, n, m);
	double temp = calcAhh(AH, r, n, m);
	return temp / Ahh;
}

/*
double calcAlpha(matrix& H, matrix& r, double param_x, double param_y, double A, int step_count, double& Ahh, size_t n, size_t m) {

	double temp = 0, betta = 0, alpha = 0;
	// начало первого пункта
	matrix Ah;
	if (step_count != 0) {
		Ah = calcAh(H, r, A, param_x, param_y, n, m);
		temp = calcAhh(Ah, r, n, m); // 

		betta = temp / Ahh; // Конец первого пункта
	}

	//Начало второго пункта
	H = calcH(H, r, betta, n, m);
	//Конец второго пункта


	//Начало третьего пункта
	Ahh = 0; temp = 0;

	Ah = calcAh(H, r, A, param_x, param_y, n, m);

	Ahh = calcAhh(Ah, H, n, m);

	temp = calcAhh(r, H, n, m);
	alpha = -temp / Ahh;
	//Конец третьего пункта

	return alpha;

}
*/

double calcAlpha(matrix& H, matrix& r, matrix& Ah, double param_x, double param_y, double A, double& Ahh, size_t n, size_t m) {

	//Третий этап
	Ahh = 0;

	Ah = calcAh(H, r, A, param_x, param_y, n, m);

	Ahh = calcAhh(Ah, H, n, m);


	double temp = calcAhh(r, H, n, m);
	return -temp / Ahh;


}


