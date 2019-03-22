using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using ZedGraph;

namespace Spline
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public void AddGraph2(ZedGraphControl Graph, int N, double[] x, double[] y, double[] y1, string s1, string s2)
        {
            GraphPane panel = Graph.GraphPane;
            panel.CurveList.Clear();
            PointPairList f_list = new PointPairList();
            PointPairList s_list = new PointPairList();

            for (int i = 0; i < N; i++)
            {
                f_list.Add(x[i], y[i]);
                s_list.Add(x[i], y1[i]);
            }

            LineItem Curve = panel.AddCurve(s1, f_list, Color.Red, SymbolType.None);
            LineItem Curve1 = panel.AddCurve(s2, s_list, Color.Blue, SymbolType.None);
            Graph.AxisChange();
            Graph.Invalidate();
        }

        public void AddGraph1(ZedGraphControl Graph, int N, double[] x, double[] y, string s)
        {
            GraphPane panel = Graph.GraphPane;
            panel.CurveList.Clear();
            PointPairList f_list = new PointPairList();

            for (int i = 0; i < N; i++)
            {
                f_list.Add(x[i], y[i]);
            }

            LineItem Curve = panel.AddCurve(s, f_list, Color.Red, SymbolType.None);
            Graph.AxisChange();
            Graph.Invalidate();
        }

        public void AddTable1(DataGridView Tab, int n, Task T)
        {
            Tab.Rows.Clear();
            for (int i = 1; i < n; i++)
            {
                Tab.Rows.Add();
                Tab.Rows[i - 1].Cells[0].Value = i;
                Tab.Rows[i - 1].Cells[1].Value = T.x[i - 1];
                Tab.Rows[i - 1].Cells[2].Value = T.x[i];
                Tab.Rows[i - 1].Cells[3].Value = T.a[i];
                Tab.Rows[i - 1].Cells[4].Value = T.b[i];
                Tab.Rows[i - 1].Cells[5].Value = T.c[i];
                Tab.Rows[i - 1].Cells[6].Value = T.d[i];
            }
        }

        public void AddTable2(DataGridView Tab, int n, Task T)
        {
            Tab.Rows.Clear();
            for (int j = 0; j < n; j++)
            {
                Tab.Rows.Add();
                Tab.Rows[j].Cells[0].Value = j;
                Tab.Rows[j].Cells[1].Value = T.xk[j];
                Tab.Rows[j].Cells[2].Value = T.f[j];
                Tab.Rows[j].Cells[3].Value = T.S[j];
                Tab.Rows[j].Cells[4].Value = T.R[j];
                Tab.Rows[j].Cells[5].Value = T.fp[j];
                Tab.Rows[j].Cells[6].Value = T.Sp[j];
                Tab.Rows[j].Cells[7].Value = T.Rp[j];
                Tab.Rows[j].Cells[8].Value = T.fpp[j];
                Tab.Rows[j].Cells[9].Value = T.Spp[j];
                Tab.Rows[j].Cells[10].Value = T.Rpp[j];
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int N = Convert.ToInt32(textBox1.Text);
            int Nk = Convert.ToInt32(textBox2.Text);

            Task1 T = new Task1(N, Nk);

            if (checkBox1.Checked == false)
            {          
                AddTable1(dataGridView1, N + 1, T);

                AddTable2(dataGridView2, Nk + 1, T);
            }

            label3.Text = "maxR = " + Convert.ToString(T.maxR) + " при х = " + Convert.ToString(T.maxRx);
            label4.Text = "maxRp = " + Convert.ToString(T.maxRp) + " при х = " + Convert.ToString(T.maxRpx);
            label5.Text = "maxRpp = " + Convert.ToString(T.maxRpp) + " при х = " + Convert.ToString(T.maxRppx);

            if (checkBox2.Checked == false)
            {
                AddGraph2(zedGraphControl1, Nk + 1, T.xk, T.f, T.S, "f(x)", "S(x)");

                AddGraph1(zedGraphControl2, Nk + 1, T.xk, T.R, "R(x)");

                AddGraph2(zedGraphControl3, Nk + 1, T.xk, T.fp, T.Sp, "f'(x)", "S'(x)");

                AddGraph1(zedGraphControl4, Nk + 1, T.xk, T.Rp, "R'(x)");

                AddGraph2(zedGraphControl5, Nk + 1, T.xk, T.fpp, T.Spp, "f''(x)", "S''(x)");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int N = Convert.ToInt32(textBox4.Text);
            int Nk = Convert.ToInt32(textBox3.Text);
            int t = 1;

            if (radioButton1.Checked == true)
                t = 1;
            if (radioButton2.Checked == true)
                t = 2;

            Task2 T = new Task2(N, Nk, t);

            if (checkBox4.Checked == false)
            {
                AddTable1(dataGridView3, N + 1, T);

                AddTable2(dataGridView4, Nk + 1, T);
            }

            label8.Text = "maxR = " + Convert.ToString(T.maxR) + " при х = " + Convert.ToString(T.maxRx);
            label7.Text = "maxRp = " + Convert.ToString(T.maxRp) + " при х = " + Convert.ToString(T.maxRpx);
            label6.Text = "maxRpp = " + Convert.ToString(T.maxRpp) + " при х = " + Convert.ToString(T.maxRppx);

            if (checkBox3.Checked == false)
            {
                AddGraph2(zedGraphControl6, Nk + 1, T.xk, T.f, T.S, "f(x)", "S(x)");

                AddGraph1(zedGraphControl7, Nk + 1, T.xk, T.R, "R(x)");

                AddGraph2(zedGraphControl8, Nk + 1, T.xk, T.fp, T.Sp, "f'(x)", "S'(x)");

                AddGraph1(zedGraphControl9, Nk + 1, T.xk, T.Rp, "R'(x)");

                AddGraph2(zedGraphControl10, Nk + 1, T.xk, T.fpp, T.Spp, "f''(x)", "S''(x)");
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int N = Convert.ToInt32(textBox6.Text);
            int Nk = Convert.ToInt32(textBox5.Text);
            int t = 1;
            Task T;

            if (radioButton6.Checked == true)
            {
                if (radioButton4.Checked == true)
                    t = 1;
                if (radioButton3.Checked == true)
                    t = 2;
                T = new Task3(N, Nk, t);

                if (checkBox6.Checked == false)
                {
                    AddTable1(dataGridView5, N + 1, T);

                    AddTable2(dataGridView6, Nk + 1, T);
                }

                label19.Text = "maxR = " + Convert.ToString(T.maxR) + " при х = " + Convert.ToString(T.maxRx);
                label18.Text = "maxRp = " + Convert.ToString(T.maxRp) + " при х = " + Convert.ToString(T.maxRpx);
                label17.Text = "maxRpp = " + Convert.ToString(T.maxRpp) + " при х = " + Convert.ToString(T.maxRppx);

                if (checkBox5.Checked == false)
                {
                    AddGraph2(zedGraphControl11, Nk + 1, T.xk, T.f, T.S, "f(x)", "S(x)");

                    AddGraph1(zedGraphControl12, Nk + 1, T.xk, T.R, "R(x)");

                    AddGraph2(zedGraphControl13, Nk + 1, T.xk, T.fp, T.Sp, "f'(x)", "S'(x)");

                    AddGraph1(zedGraphControl14, Nk + 1, T.xk, T.Rp, "R'(x)");

                    AddGraph2(zedGraphControl15, Nk + 1, T.xk, T.fpp, T.Spp, "f''(x)", "S''(x)");
                }
            }

            if (radioButton5.Checked == true)
            {
                if (radioButton4.Checked == true)
                    t = 1;
                if (radioButton3.Checked == true)
                    t = 2;
                T = new Task4(N, Nk, t);

                if (checkBox6.Checked == false)
                {
                    AddTable1(dataGridView5, N + 1, T);

                    AddTable2(dataGridView6, Nk + 1, T);
                }

                label19.Text = "maxR = " + Convert.ToString(T.maxR) + " при х = " + Convert.ToString(T.maxRx);
                label18.Text = "maxRp = " + Convert.ToString(T.maxRp) + " при х = " + Convert.ToString(T.maxRpx);
                label17.Text = "maxRpp = " + Convert.ToString(T.maxRpp) + " при х = " + Convert.ToString(T.maxRppx);

                if (checkBox5.Checked == false)
                {
                    AddGraph2(zedGraphControl11, Nk + 1, T.xk, T.f, T.S, "f(x)", "S(x)");

                    AddGraph1(zedGraphControl12, Nk + 1, T.xk, T.R, "R(x)");

                    AddGraph2(zedGraphControl13, Nk + 1, T.xk, T.fp, T.Sp, "f'(x)", "S'(x)");

                    AddGraph1(zedGraphControl14, Nk + 1, T.xk, T.Rp, "R'(x)");

                    AddGraph2(zedGraphControl15, Nk + 1, T.xk, T.fpp, T.Spp, "f''(x)", "S''(x)");
                }
            }
        }
    }
}
