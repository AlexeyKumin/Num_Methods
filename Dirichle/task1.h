#ifndef TASK1_H
#define TASK1_H
#include <math.h>
#include "methods.h"
class Task1
{
public:
    int n, m;
    double h, k;
    double **X, **B;
    double *N_and_e;

    Task1(int n, int m, int N, double e, int num);

    double f(double x, double y)
    {
       return atan(x / y);
    }
    double mu1(double y){
        return 0 * y;
    }
    double mu2(double y){
        return 0 * y;
    }
    double mu3(double x){
        return pow(sin(M_PI * x), 2);
    }
    double mu4(double x){
        return cosh((x - 1) * (x - 2)) - 1;
    }
    double x(int i)
    {
        return 1 + i*h;
    }
    double y(int j)
    {
        return 1 + j*k;
    }
    ~Task1();
};

#endif // TASK1_H
