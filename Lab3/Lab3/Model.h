#pragma once
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

typedef vector<double> T;

class Model
{
public:
	int Task;
	int N;
	double h;
	double ksi;
	double mu0, mu1;
	T x, u, v, A, C, B, F, delta;

	double maxD = 0, maxX = 0;

	Model(int TaskN, int Np);

	double k(double x);
	double q(double x);
	double f(double x);
	double P(double x);

	void fillXABCFU();

	void fillV();

	void max();
};

