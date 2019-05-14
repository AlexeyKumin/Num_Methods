#ifndef TASK2_H
#define TASK2_H


#include <math.h>
#include "methods.h"
class Task2
{
public:
    int n1, m1, n2, m2;
    double h1, k1, h2, k2, z;
    double **Xr, **X, **B;
    double *N_and_e;

    Task2(int n, int m, int N, double e, int num);
    double u(double x, double y)
    {
        return exp(x*x - y*y);
    }
    double f(double x, double y)
    {
        return -4 * exp(x*x - y*y) * (x*x + y*y);
    }
    //float mu1(float y);
    //float mu2(float y);
    //float mu3(float x);
    //float mu4(float x);
    double x(int i)
    {
        if (i < n1 + 1)
            return 1 + i*h1;
        else
            return 1 + n1 * h1 + (i - n1) * h2;
    }
    double y(int j)
    {
        if (j < m1 + 1)
            return 1 + j*k1;
        else
            return 1 + m1 * k1 + (j - m1) * k2;
    }
    ~Task2();
};

#endif // TASK2_H
