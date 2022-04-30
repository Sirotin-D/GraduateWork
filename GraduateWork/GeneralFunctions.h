#pragma once

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


double ÑhebyshevNorma(matrix& matr) {
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

double _trim_tail(const double p_value, const int p_decimal_places, const int p_make_round) { // value, 4, 1
	double exponent = round(log10(fabs(p_value)));

	double res = p_value * pow(10, -exponent);

	if (fabs(res) < 1.0) {
		res = res * 10.0;
		exponent -= 1;
	}
	else if (fabs(res) >= 10.0) {
		res = res / 10.0;
		exponent += 1;
	}

	if (p_make_round != 0) {
		res = round(res * pow(10, p_decimal_places)) / pow(10, p_decimal_places);
	}
	else {
		res = trunc(res * pow(10, p_decimal_places)) / pow(10, p_decimal_places);
	}

	res = res * pow(10, exponent);
	return res;
}
