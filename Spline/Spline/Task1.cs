using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace Spline
{
    public class Task1 : Task
    {
        public Task1(int n, int nk) : base(n, nk)
        {
        }
    }

    public class Task2 : Task
    {
        public int T = 1;

        public override double func(double x)
        {
            return Math.Sqrt(Math.Exp(x) - 1);
        }

        public override double funcp(double x)
        {
            double e = Math.Exp(x);
            return e / (2 * Math.Sqrt(e - 1));
        }

        public override double funcpp(double x)
        {
            double e = Math.Exp(x);
            double p = 4.0 * (Math.Sqrt(e - 1) * (e - 1));
            double p1 = e * (e - 2);

            return p1 / p;
        }

        public Task2(int n, int nk, int k) :base()
        {
            N = n;
            Nk = nk;
  
            x = new double[N + 1];
            f = new double[N + 1];
            xk = new double[Nk + 1];

            xk[0] = x[0] = 1;
            xk[Nk] = x[N] = 3;

            T = k;
            if (T == 1)
            {
                mu1 = 0;
                mu2 = 0;
            }
            else
            {
                mu1 = funcpp(x[0]);
                mu2 = funcpp(x[N]);
            }

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

    public class Task3 : Task
    {
        public int T = 1;

        public override double func(double x)
        {
            return Math.Sqrt(Math.Exp(x) - 1) +  Math.Cos(10 * x);
        }

        public override double funcp(double x)
        {
            double e = Math.Exp(x);
            return e / (2 * Math.Sqrt(e - 1)) - 10 * Math.Sin(10 * x);
        }

        public override double funcpp(double x)
        {
            double e = Math.Exp(x);
            double p = 4.0 * (Math.Sqrt(e - 1) * (e - 1));
            double p1 = e * (e - 2);

            return (p1 / p) - 100 * Math.Cos(10 * x) ;
        }

        public Task3(int n, int nk, int k) : base()
        {
            N = n;
            Nk = nk;

            x = new double[N + 1];
            f = new double[N + 1];
            xk = new double[Nk + 1];

            xk[0] = x[0] = 1;
            xk[Nk] = x[N] = 3;

            T = k;
            if (T == 1)
            {
                mu1 = 0;
                mu2 = 0;
            }
            else
            {
                mu1 = funcpp(x[0]);
                mu2 = funcpp(x[N]);
            }

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

    public class Task4 : Task
    {
        public int T = 1;

        public override double func(double x)
        {
            return Math.Sqrt(Math.Exp(x) - 1) + Math.Cos(100 * x);
        }

        public override double funcp(double x)
        {
            double e = Math.Exp(x);
            return e /(2 * Math.Sqrt(e - 1)) - 100 * Math.Sin(100 * x);
        }

        public override double funcpp(double x)
        {
            double e = Math.Exp(x);
            double p = 4.0 * (Math.Sqrt(e - 1) * (e - 1));
            double p1 = e * (e - 2);

            return (p1 / p) - 10000 * Math.Cos(100 * x);
        }

        public Task4(int n, int nk, int k) : base()
        {
            N = n;
            Nk = nk;

            x = new double[N + 1];
            f = new double[N + 1];
            xk = new double[Nk + 1];

            xk[0] = x[0] = 1;
            xk[Nk] = x[N] = 3;

            T = k;
            if (T == 1)
            {
                mu1 = 0;
                mu2 = 0;
            }
            else
            {
                mu1 = funcpp(x[0]);
                mu2 = funcpp(x[N]);
            }

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

