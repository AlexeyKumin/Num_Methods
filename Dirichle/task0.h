#ifndef TASK0_H
#define TASK0_H

class Task0
{
public:
    int n, m;
    float h, k;
    float **X, **B;


    Task1(int n, int m, int N, float e, int num);

    float u(float x, float y);
    float f(float x, float y);
    float mu1(float y);
    float mu2(float y);
    float mu3(float x);
    float mu4(float x);

    float x(int i)
    {
        return 1 + i*h;
    }
    float y(int j)
    {
        return 1 + j*k;
    }
    ~Task0();
}

#endif // TASK0_H
