using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Spline
{
    public class Task
    {
        public int N;
        public int Nk;
        public double h;
        public double hk;

        public double mu1 = 0, mu2 = 0;
        public double[] x;
        public double[] xk;

        public double[] f;
        public double[] fp;
        public double[] fpp;

        public double[] a;
        public double[] b;
        public double[] c;
        public double[] d;

        public double[] S;
        public double[] Sp;
        public double[] Spp;

        public double[] R;
        public double[] Rp;
        public double[] Rpp;

        public double maxR = 0;
        public double maxRp = 0;
        public double maxRpp = 0;
        public double maxRx = 0;
        public double maxRpx = 0;
        public double maxRppx = 0;


        public virtual double func(double x)
        {
            if (x <= 0)
                return Math.Pow(x, 3) + 3 * Math.Pow(x, 2);
            else
                return -Math.Pow(x, 3) + 3 * Math.Pow(x, 2);
        }

        public virtual double funcp(double x)
        {
            if (x <= 0)
                return 3 * Math.Pow(x, 2) + 6 * x;
            else
                return -3 * Math.Pow(x, 2) + 6 * x;
        }

        public virtual double funcpp(double x)
        {
            if (x <= 0)
                return 6 * x + 6;
            else
                return -6 * x + 6;
        }

        public virtual double Spline(double a, double b, double c, double d, double x, double xk)
        {
            return a + b * (xk - x) + (c / 2) * Math.Pow((xk - x), 2) + (d / 6) * Math.Pow((xk - x), 3);
        }

        public virtual double Splinep(double a, double b, double c, double d, double x, double xk)
        {
            return b + c * (xk - x) + 0.5 * d * Math.Pow((xk - x), 2);
        }

        public virtual double Splinepp(double a, double b, double c, double d, double x, double xk)
        {
            return c + d * (xk - x);
        }

        public virtual void Progonka()
        {
            a = new double[N + 1];
            b = new double[N + 1];
            c = new double[N + 1];
            d = new double[N + 1];
            c[0] = mu1;
            double[] alfa = new double[N];
            double[] beta = new double[N];
            alfa[0] = 0;
            beta[0] = mu1; 

            for (int i = 0; i < N - 1; i++)
            {
                alfa[i + 1] = 1 / (-4 - alfa[i]);
                beta[i + 1] = (beta[i] - 6 * (f[i + 2] - 2 * f[i + 1] + f[i]) / (h * h)) / (-4 - alfa[i]);
            }

            c[N] = mu2;
            for (int i = N - 1; i >= 0; i--)
            {
                c[i] = alfa[i] * c[i + 1] + beta[i];
                b[i + 1] = (f[i + 1] - f[i]) / h + c[i + 1] * h / 3 + c[i] * h / 6;
                d[i + 1] = (c[i + 1] - c[i]) / h;
                a[i + 1] = f[i + 1];
            }
        }

        public virtual void Derivative()
        {
            f = new double[Nk + 1];
            fp = new double[Nk + 1];
            fpp = new double[Nk + 1];
            S = new double[Nk + 1];
            Sp = new double[Nk + 1];
            Spp = new double[Nk + 1];

            for (int i = 0; i < Nk + 1; i++)
            {
                if (i != Nk)
                {
                    xk[i + 1] = xk[i] + hk;
                }
                f[i] = func(xk[i]);
                fp[i] = funcp(xk[i]);
                fpp[i] = funcpp(xk[i]);
            }

            int j = 0;
            for (int i = 0; i < N; i++)
            {
                if (Nk < N)
                {
                    while ((j < Nk + 1) && (xk[j] < x[i + 1] + h/2))
                    {
                        S[j] = Spline(a[i + 1], b[i + 1], c[i + 1], d[i + 1], x[i + 1], xk[j]);
                        Sp[j] = Splinep(a[i + 1], b[i + 1], c[i + 1], d[i + 1], x[i + 1], xk[j]);
                        Spp[j] = Splinepp(a[i + 1], b[i + 1], c[i + 1], d[i + 1], x[i + 1], xk[j]);
                        j = j + 1;
                    }
                }
                else
                {
                    while ((j < Nk + 1) && (xk[j] < x[i + 1] + hk/2))
                    {
                        S[j] = Spline(a[i + 1], b[i + 1], c[i + 1], d[i + 1], x[i + 1], xk[j]);
                        Sp[j] = Splinep(a[i + 1], b[i + 1], c[i + 1], d[i + 1], x[i + 1], xk[j]);
                        Spp[j] = Splinepp(a[i + 1], b[i + 1], c[i + 1], d[i + 1], x[i + 1], xk[j]);
                        j = j + 1;
                    }
                }
            }

        }

        public virtual void Error()
        {
            R = new double[Nk + 1];
            Rp = new double[Nk + 1];
            Rpp = new double[Nk + 1];


            for (int i = 0; i < Nk + 1; i++)
            {
                R[i] = Math.Abs(f[i] - S[i]);
                Rp[i] = Math.Abs(fp[i] - Sp[i]);
                Rpp[i] = Math.Abs(fpp[i] - Spp[i]);

                if (R[i] > maxR)
                {
                    maxR = R[i];
                    maxRx = xk[i];
                }

                if (Rp[i] > maxRp)
                {
                    maxRp = Rp[i];
                    maxRpx = xk[i];
                }

                if (Rpp[i] > maxRpp)
                {
                    maxRpp = Rpp[i];
                    maxRppx = xk[i];
                }
            }
        }

        public Task()
        {
        }

        public Task(int n, int nk)
        {
            N = n;
            Nk = nk;

            x = new double[N + 1];
            f = new double[N + 1];
            xk = new double[Nk + 1];
            xk[0] = x[0] = -1;
            xk[Nk] = x[N] = 1;
            h = (x[N] - x[0]) / N;
            hk = (xk[Nk] - xk[0]) / Nk;

            for (int i = 0; i < N + 1; i++)
            {
                if (i != N)
                {
                    x[i + 1] = x[i] + h;
                }
                f[i] = func(x[i]);
            }

            this.Progonka();

            this.Derivative();

            this.Error();
        }

    }
}
