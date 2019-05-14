#ifndef TASK_H
#define TASK_H
#include <math.h>
#include "methods.h"
class Task
{
public:
    int n, m;
    double h, k, z;
    double **Xr, **X, **B;
    double *N_and_e;

    Task(int n, int m, int N, double e, int num);
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
        return 1 + i*h;
    }
    double y(int j)
    {
        return 1 + j*k;
    }
    ~Task();
};

#endif // TASK_H
