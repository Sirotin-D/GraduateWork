#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <omp.h>
#include <cmath>
#include <limits>

#define PI 3.141592653589793238462643383279502884197169399375105820974944
constexpr auto BETHA = 1e-13;

using namespace std;

using matrix = vector<vector<double>>;


double ExactSolution(double _x, double _y) {
	return exp(1 - pow(_x, 2) - pow(_y, 2));
}

double getLambdaMin(double h, double k, size_t n, size_t m) {
	return 4.0 / h / h * sin(PI / 2.0 / n) * sin(PI / 2.0 / n) + 4.0 / k / k * sin(PI / 2.0 / m) * sin(PI / 2.0 / m);
}

double mu1(double y)
{
	return exp(-pow(y, 2));
}

double mu2(double y)
{
	return exp(-pow(y, 2));

}

double mu3(double x)
{
	return exp(-pow(x, 2));
}

double mu4(double x)
{
	return exp(-pow(x, 2));
}

// Right side with sign "-"
double RightSide(double _x, double _y)
{
	return -4 * (1 - pow(_x, 2) - pow(_y, 2)) * exp(1 - pow(_x, 2) - pow(_y, 2));
}


double СhebyshevNorma(matrix& matr) {
	double max = 0;
	for (int j = 0; j < matr.size(); j++) {
		for (int i = 0; i < matr[0].size(); i++) {
			if (abs(matr[j][i]) > max) {
				max = abs(matr[j][i]);
			}
		}
	}
	return max;
}


void SetBorders(matrix& V, double h, double k, int a, int c, size_t n, size_t m) {


	for (int i = 0; i < m + 1; i++) {
		V[i][0] = mu1(c + i * k);
	}

	for (int i = 0; i < m + 1; i++) {
		V[i][n] = mu2(c + i * k);
	}

	for (int i = 0; i < n + 1; i++) {
		V[0][i] = mu3(a + i * h);
	}

	for (int i = 0; i < n + 1; i++) {
		V[m][i] = mu4(a + i * h);
	}

}


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
	for (int j = 1; j < m; j++) {
		for (int i = 1; i < n; i++) {
			H[j][i] = r[j][i] * (-1) + H[j][i] * betta; // h^(s) = betta * h^(s-1) - r^(s)
		}
	}
	return  H;
}


double calcAlpha(matrix& H, matrix& r, double param_x, double param_y, double A, double& Ahh, size_t n, size_t m) {

	double temp = 0, betta = 0, alpha = 0;
	// начало второго пункта
	matrix Ah = calcAh(H, r, A, param_x, param_y, n, m);

	temp = calcAhh(Ah, r, n, m); // 

	betta = temp / Ahh; // Конец второго пункта

	//Начало третьего пункта
	H = calcH(H, r, betta, n, m);
	//Конец третьего пункта

	//Начало четвёртого пункта
	Ahh = 0; temp = 0;

	Ah = calcAh(H, r, A, param_x, param_y, n, m);

	Ahh = calcAhh(Ah, H, n, m);

	temp = calcAhh(r, H, n, m);
	alpha = -temp / Ahh;
	//Конец четвёртого пункта

	return alpha;

}

double calcError(matrix V, double h, double k, int a, int c) {
	double error = 0, max_error = 0;

	for (int i = 0; i < V.size(); i++) {
		for (int j = 0; j < V[0].size(); j++) {
			error = abs(V[i][j] - ExactSolution(a + j * h, c + i * k));
			if (error > max_error) {
				max_error = error;
			}
		}
	}

	return max_error;
}

double getSLAEAccuracySolution(double Disc_max, double h, double k, size_t n, size_t m) {
	double lambdamin = getLambdaMin(h, k, n, m);
	return Disc_max * sqrt((n - 1) * (m - 1)) / lambdamin;
}
