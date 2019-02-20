#include "stdafx.h"
#include "Model.h"

double Model::k(double x)
{
	if (Task == 1)
		return 1.0;
	if (Task == 2)
	{
		if (x <= ksi)
			return sin(ksi) * sin(ksi) + 1;
		else if (x - h >= ksi)
			return 1;
		else
			return h / ((ksi - (x - h)) / (sin(ksi) * sin(ksi) + 1) + (x - ksi) / (1));

	}
	else
	{
		if (x <= ksi)
			return sin(x - h / 2) * sin(x - h / 2) + 1;
		else if (x - h >= ksi)
			return 1;
		else
			return h / ((ksi - (x - h)) / (sin((x - h + ksi) / 2) * sin((x - h + ksi) / 2) + 1) + (x - ksi) / (1));
	}
}

double Model::q(double x)
{
	if (Task == 1)
		return 1.0;
	if (Task == 2)
	{
		if (x + h / 2 <= ksi)
			return ksi + 1;
		else if (x - h / 2 >= ksi)
			return ksi * ksi * ksi;
		else
			return ((ksi - (x - h / 2)) * (ksi + 1) + (x + h / 2 - ksi) * (ksi * ksi * ksi)) / h;
	}
	else
	{
		if (x + h / 2 <= ksi)
			return x + 1;
		else if (x - h / 2 >= ksi)
			return x * x * x;
		else
			return ((ksi - (x - h / 2)) * (x - h / 2 + 1) + (x + h / 2 - ksi) * ((x + h / 2)* (x + h / 2) * (x + h / 2))) / h;
	}
}

double Model::f(double x)
{
	if (Task == 1)
		return  q(x) * P(x) - 2 * k(x);
	if (Task == 2)
	{
		if (x + h / 2 <= ksi)
			return 1;
		else if (x - h / 2 >= ksi)
			return  ksi * ksi - 1;
		else
			return ((ksi - (x - h / 2)) * 1 + (x + h / 2 - ksi)* (ksi * ksi - 1)) / h;
	}
	else
	{
		if (x + h / 2 <= ksi)
			return 1;
		else if (x - h / 2 >= ksi)
			return  ksi * ksi - 1;
		else
			return ((ksi - (x - h / 2)) * 1 + (x + h / 2 - ksi)* ((x + h / 2) * (x + h / 2) - 1)) / h;
	}
}

double Model::P(double x)
{
	if (Task == 1)
		return x * x + 10 * x;
	if (Task == 2)
	{
		double k1 = k(0);
		double k2 = k(1);
		double q1 = q(0);
		double q2 = q(1);
		double f1 = f(0);
		double f2 = f(1);

		double c4 = 3.9721493841465780328;
		double c3 = 5.9312403351050182465;
		double c2 = -0.11020582142946572235;
		double c1 = 0.41922281580441278503;

		if (x <= ksi)
			return c1 * exp(sqrt(q1 / k1) * x) + c2 * exp(-sqrt(q1 / k1) * x) + f1 / q1;
		else
			return c3 * exp(sqrt(q2 / k2) * x) + c4 * exp(-sqrt(q2 / k2) * x) + f2 / q2;
	}
}


void Model::fillXABCFU()
{
	T x1(N + 1), v1(N + 1), A1(N - 1), C1(N - 1), B1(N - 1), F1(N - 1), delta1(N + 1), u1(N + 1);
	x = x1; v = v1; A = A1; C = C1; B = B1; F = F1; u = u1; delta = delta1;

	x[0] = 0; x[N] = 1;

	h = (x[N] - x[0]) / (double)(N);

	ksi = 1 / sqrt(5);

	if (Task < 2)
	{
		mu0 = P(0); mu1 = P(1);
	}
	else
	{
		mu0 = 1; mu1 = 2;
	}

	for (int i = 1; i < N; i++)
	{
		x[i] = x[i - 1] + h;
	}

	for (int i = 1; i < N; i++)
	{
		A[i - 1] = k(x[i]) / (h * h);
		B[i - 1] = k(x[i + 1]) / (h * h); 
		C[i - 1] = (B[i - 1] + A[i - 1] + q(x[i]));
		F[i - 1] = f(x[i]);
	}
}

void Model::fillV()
{
	vector<double> a(N), be(N);
	a[0] = 0;
	be[0] = mu0; 

	for (int i = 0; i < N - 1; i++)
	{
		a[i + 1] = B[i] / (C[i] - A[i] * a[i]);
		be[i + 1] = (A[i] * be[i] + F[i]) / (C[i] - A[i] * a[i]);
	}

	v[N] = mu1;

	for (int i = N - 1; i >= 0; i--)
		v[i] = a[i] * v[i + 1] + be[i];
		
	if (Task < 3)
	{
		for (int i = 0; i < N + 1; i++)
		{
			u[i] = P(x[i]);
			delta[i] = abs(u[i] - v[i]);
		}
	}
}

Model::Model(int TaskN, int Np)
{
	Task = TaskN;
	N = Np;

	fillXABCFU();

	fillV();

	max();
}

void Model::max()
{
	for (int i = 0; i < N; i++)
	{
		if (delta[i] > maxD)
		{
			maxD = delta[i];
			maxX = x[i];
		}
	}
}
