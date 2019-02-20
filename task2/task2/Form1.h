#pragma once
#include <cmath>
#include <string>
#include <vector>

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;
	using namespace std;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;




	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(502, 488);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Постановка задачи";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(218, 372);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(129, 21);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Контроль шага";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(68, 456);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(168, 17);
			this->label19->TabIndex = 23;
			this->label19->Text = L"e - параметр оценки ЛП";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(6, 453);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(56, 22);
			this->textBox11->TabIndex = 22;
			this->textBox11->Text = L"0,001";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(68, 429);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(235, 17);
			this->label18->TabIndex = 27;
			this->label18->Text = L"Xgr - правая граница для времени";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(6, 426);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(56, 22);
			this->textBox10->TabIndex = 26;
			this->textBox10->Text = L"10";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(68, 402);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(265, 17);
			this->label17->TabIndex = 25;
			this->label17->Text = L"Nmax - максимальное кол-во итераций";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(6, 399);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(56, 22);
			this->textBox9->TabIndex = 24;
			this->textBox9->Text = L"10000";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(68, 374);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(130, 17);
			this->label16->TabIndex = 23;
			this->label16->Text = L"h - начальный шаг";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(6, 371);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(56, 22);
			this->textBox8->TabIndex = 22;
			this->textBox8->Text = L"0,01";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(68, 287);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(250, 17);
			this->label15->TabIndex = 21;
			this->label15->Text = L"u\'0 - начальная скорость груза(см/с)";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(6, 284);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(56, 22);
			this->textBox7->TabIndex = 20;
			this->textBox7->Text = L"0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(68, 261);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(432, 17);
			this->label14->TabIndex = 19;
			this->label14->Text = L"u0 - начальное отклонение груза от положения равновесия(см)";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(6, 258);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(56, 22);
			this->textBox6->TabIndex = 18;
			this->textBox6->Text = L"10,0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(68, 233);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(344, 17);
			this->label11->TabIndex = 13;
			this->label11->Text = L"k - коэффициент жесткости первой пружины(Н/см)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 230);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(56, 22);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"2,0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(68, 206);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(301, 17);
			this->label10->TabIndex = 11;
			this->label10->Text = L"с - коэффициент демпфирования (Н*с/см^3)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 203);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(56, 22);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"0,15";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(68, 179);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 17);
			this->label9->TabIndex = 9;
			this->label9->Text = L"m - масса груза(кг)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 176);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(56, 22);
			this->textBox1->TabIndex = 8;
			this->textBox1->Text = L"1,0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 156);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(236, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"x - время(с), u\'(x) - скорость (см/ с)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 139);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(455, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"где u(x) - смещение груза относитьльно положения равновесия(см)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(46, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(280, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"mu\'\' + cu\' + ku = 0; u(x0) = u0; u\'(x0) = u\'0; ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(403, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Положение груза в системе описывается НДУ 2го порядка:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(333, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"с подвеской, состоящая из пружины и демпфера";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(390, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Для стабилизации его положения используется система ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(250, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"по гладкому столу(силы трения нет)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(429, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Груз совершает прямолиненые горизонтальные перемещения ";
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(0, 0);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(760, 459);
			this->zedGraphControl1->TabIndex = 1;
			this->zedGraphControl1->GraphPane->XAxis->Title->Text = L"x";
			this->zedGraphControl1->GraphPane->YAxis->Title->Text = L"u";
			this->zedGraphControl1->GraphPane->Title->Text = L"График положения груза";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(739, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(768, 488);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(760, 459);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"График v(x)";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(760, 459);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Таблица";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11, this->Column12, this->Column13
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(760, 459);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"i";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"x";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"u";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"u2";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"u - u2";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"ОЛП(S1)";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"u\'";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"u\'2";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"u\'-u\'2";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"S2";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"h";
			this->Column11->Name = L"Column11";
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"C1";
			this->Column12->Name = L"Column12";
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"C2";
			this->Column13->Name = L"Column13";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Location = System::Drawing::Point(520, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(213, 357);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Справка";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 165);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(128, 17);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Число итераций =";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(6, 139);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(187, 17);
			this->label25->TabIndex = 28;
			this->label25->Text = L"Кол-во уменьшений шага =";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(6, 114);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(167, 17);
			this->label24->TabIndex = 27;
			this->label24->Text = L"Кол-во удвоений шага =";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(6, 86);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(28, 17);
			this->label23->TabIndex = 26;
			this->label23->Text = L"= 0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(6, 69);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(166, 17);
			this->label22->TabIndex = 25;
			this->label22->Text = L"(ОЛП для u\'(x)) maxS2 =";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 35);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(28, 17);
			this->label21->TabIndex = 24;
			this->label21->Text = L"= 0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 18);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(163, 17);
			this->label20->TabIndex = 24;
			this->label20->Text = L"(ОЛП для u(x)) maxS1 =";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(520, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 57);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Посторение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(520, 443);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(213, 57);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Удаление";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->zedGraphControl2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(760, 459);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Фазовый портрет(v(v\'))";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(0, 0);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(760, 459);
			this->zedGraphControl2->TabIndex = 2;
			this->zedGraphControl2->GraphPane->XAxis->Title->Text = L"u";
			this->zedGraphControl2->GraphPane->YAxis->Title->Text = L"u'";
			this->zedGraphControl2->GraphPane->Title->Text = L"Фазовый портрет";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1519, 556);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Перемещение груза";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	double u(double x, double u, double z)
	{
		return z;
	}

	double u1(double x, double u, double z, const vector<double>& A)
	{
		return -(A[1] * z + A[2] * u) / A[0];
	}

	vector<double> RK2_4(double x, const vector<double> &v, double h, const vector<double>& A)
	{
		vector<double> U;
		U.push_back(0);
		U.push_back(0);

		double k11 = u(x, v[0], v[1]);
		double k21 = u1(x, v[0], v[1], A);

		double k12 = u(x + h / 2, v[0] + (h / 2) * k11, v[1] + (h / 2) * k21);
		double k22 = u1(x + h / 2, v[0] + (h / 2) * k11, v[1] + (h / 2) * k21, A);

		double k13 = u(x + h / 2, v[0] + (h / 2) * k12, v[1] + (h / 2)*k22);
		double k23 = u1(x + h / 2, v[0] + (h / 2) * k12, v[1] + (h / 2)*k22, A);

		double k14 = u(x + h, v[0] + h * k13, v[1] + h * k23);
		double k24 = u1(x + h, v[0] + h * k13, v[1] + h * k23, A);

		U[0] = (v[0] + (h / 6) * (k11 + 2 * k12 + 2 * k13 + k14));
		U[1] = (v[1] + (h / 6) * (k21 + 2 * k22 + 2 * k23 + k24));
		return U;
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	vector<double> v;
	vector<double> v2;
	vector<double> S;
	vector<double> param;
	double x = 0;

	v.push_back(Convert::ToDouble(textBox6->Text));
	v.push_back(Convert::ToDouble(textBox7->Text));

	param.push_back(Convert::ToDouble(textBox1->Text));
	param.push_back(Convert::ToDouble(textBox2->Text));
	param.push_back(Convert::ToDouble(textBox3->Text));

	double h = Convert::ToDouble(textBox8->Text);
	double xg = Convert::ToDouble(textBox10->Text);
	int Nmax = Convert::ToInt32(textBox9->Text);
	int n = 0;
	double eps = Convert::ToDouble(textBox11->Text);

	v2 = v;
	S = { v2[0] - v[0], v2[1] - v[1] };
	double C1 = 0, C2 = 0;
	vector<double> maxS = { 0, 0 };

	dataGridView1->Rows->Clear();
	dataGridView1->Rows->Add();
	dataGridView1->Rows[0]->Cells[0]->Value = 0;
	dataGridView1->Rows[0]->Cells[1]->Value = x;
	dataGridView1->Rows[0]->Cells[2]->Value = v[0];
	dataGridView1->Rows[0]->Cells[3]->Value = v2[0];
	dataGridView1->Rows[0]->Cells[4]->Value = v[0] - v2[0];
	dataGridView1->Rows[0]->Cells[5]->Value = S[0];
	dataGridView1->Rows[0]->Cells[6]->Value = v[1];
	dataGridView1->Rows[0]->Cells[7]->Value = v2[1];
	dataGridView1->Rows[0]->Cells[8]->Value = v2[1] - v[1];
	dataGridView1->Rows[0]->Cells[9]->Value = S[1];
	dataGridView1->Rows[0]->Cells[10]->Value = h;
	dataGridView1->Rows[0]->Cells[11]->Value = C1;
	dataGridView1->Rows[0]->Cells[12]->Value = C2;

	GraphPane^ panel = zedGraphControl1->GraphPane;
	PointPairList^ v_list = gcnew ZedGraph::PointPairList();
	//PointPairList^ v12_list = gcnew ZedGraph::PointPairList();
	v_list->Add(x, v[0]);
	//v12_list->Add(x, v2[0]);
	/*this->zedGraphControl1->GraphPane->XAxis->Title->Text = L"x";
	this->zedGraphControl1->GraphPane->YAxis->Title->Text = L"v";
	this->zedGraphControl1->GraphPane->Title->Text = L"График положения груза";*/
	vector<double> v1 = v;

	//Проверка на двойной шаг........................................................................................
	if (checkBox1->Checked != true)
	{
		for (int i = 1; ((i <= Nmax) && (x < xg)); i++)
		{
			//Проверка выхода за границу
			if ((x + h) < xg)
			{
				v = RK2_4(x, v, h, param);

				S[0] = abs((v2[0] - v[0]) / 15);
				S[1] = abs((v2[0] - v[0]) / 15);

				x = x + h;
				v_list->Add(x, v[0]);

				//Печать в таблицу
				n++;
				dataGridView1->Rows->Add();
				dataGridView1->Rows[n]->Cells[0]->Value = n;
				dataGridView1->Rows[n]->Cells[1]->Value = x;
				dataGridView1->Rows[n]->Cells[2]->Value = v[0];
				dataGridView1->Rows[n]->Cells[3]->Value = v2[0];
				dataGridView1->Rows[n]->Cells[4]->Value = v[0] - v2[0];
				dataGridView1->Rows[n]->Cells[5]->Value = S[0];
				dataGridView1->Rows[n]->Cells[6]->Value = v[1];
				dataGridView1->Rows[n]->Cells[7]->Value = v2[1];
				dataGridView1->Rows[n]->Cells[8]->Value = v2[1] - v[1];
				dataGridView1->Rows[n]->Cells[9]->Value = S[1];
				dataGridView1->Rows[n]->Cells[10]->Value = h;
				dataGridView1->Rows[n]->Cells[11]->Value = C1;
				dataGridView1->Rows[n]->Cells[12]->Value = C2;
			}

			//Проверка выхода за границу 2 условие
			else
			{
				v = RK2_4(x, v, xg - x, param);

				S[0] = abs((v2[0] - v[0]) / 15);
				S[1] = abs((v2[0] - v[0]) / 15);

				x = xg;
				v_list->Add(x, v[0]);

				//Печать в таблицу
				n++;
				dataGridView1->Rows->Add();
				dataGridView1->Rows[n]->Cells[0]->Value = n;
				dataGridView1->Rows[n]->Cells[1]->Value = x;
				dataGridView1->Rows[n]->Cells[2]->Value = v[0];
				dataGridView1->Rows[n]->Cells[3]->Value = v2[0];
				dataGridView1->Rows[n]->Cells[4]->Value = v[0] - v2[0];
				dataGridView1->Rows[n]->Cells[5]->Value = S[0];
				dataGridView1->Rows[n]->Cells[6]->Value = v[1];
				dataGridView1->Rows[n]->Cells[7]->Value = v2[1];
				dataGridView1->Rows[n]->Cells[8]->Value = v2[1] - v[1];
				dataGridView1->Rows[n]->Cells[9]->Value = S[1];
				dataGridView1->Rows[n]->Cells[10]->Value = h;
				dataGridView1->Rows[n]->Cells[11]->Value = C1;
				dataGridView1->Rows[n]->Cells[12]->Value = C2;
			}
		}

		LineItem^ Curve1 = panel->AddCurve("", v_list, Color::Red, SymbolType::None);
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
	}

	//Двойной шаг....................................................................................
	else
	{
		for (int i = 1; ((i <= Nmax) && (x < xg)); i++)
		{
			//Проверка выхода за границу
			if ((x + h) < xg)
			{
				v1 = v;
				v = RK2_4(x, v, h, param);
				v2 = RK2_4(x + h / 2, RK2_4(x, v1, h / 2, param), h / 2, param);
				S[0] = abs((v2[0] - v[0]) / 15);
				S[1] = abs((v2[1] - v[1]) / 15);

				if (S[0] > maxS[0]) maxS[0] = S[0];
				if (S[1] > maxS[1]) maxS[1] = S[1];

				S[0] = sqrt(S[0] * S[0] + S[1] * S[1]);
				if ((S[0] > (eps / 32)) && (S[0] < eps))
				{
					x = x + h;
					v_list->Add(x, v2[0]);

					//Печать в таблицу
					n++;
					dataGridView1->Rows->Add();
					dataGridView1->Rows[n]->Cells[0]->Value = n;
					dataGridView1->Rows[n]->Cells[1]->Value = x;
					dataGridView1->Rows[n]->Cells[2]->Value = v[0];
					dataGridView1->Rows[n]->Cells[3]->Value = v2[0];
					dataGridView1->Rows[n]->Cells[4]->Value = v[0] - v2[0];
					dataGridView1->Rows[n]->Cells[5]->Value = S[0];
					dataGridView1->Rows[n]->Cells[6]->Value = v[1];
					dataGridView1->Rows[n]->Cells[7]->Value = v2[1];
					dataGridView1->Rows[n]->Cells[8]->Value = v2[1] - v[1];
					dataGridView1->Rows[n]->Cells[9]->Value = S[1];
					dataGridView1->Rows[n]->Cells[10]->Value = h;
					dataGridView1->Rows[n]->Cells[11]->Value = C1;
					dataGridView1->Rows[n]->Cells[12]->Value = C2;
				}
				else
					if (S[0] < (eps / 32))
					{
						C2++;

						x = x + h;
						h = 2 * h;

						v_list->Add(x, v2[0]);

						//Печать в таблицу
						n++;
						dataGridView1->Rows->Add();
						dataGridView1->Rows[n]->Cells[0]->Value = n;
						dataGridView1->Rows[n]->Cells[1]->Value = x;
						dataGridView1->Rows[n]->Cells[2]->Value = v[0];
						dataGridView1->Rows[n]->Cells[3]->Value = v2[0];
						dataGridView1->Rows[n]->Cells[4]->Value = v[0] - v2[0];
						dataGridView1->Rows[n]->Cells[5]->Value = S[0];
						dataGridView1->Rows[n]->Cells[6]->Value = v[1];
						dataGridView1->Rows[n]->Cells[7]->Value = v2[1];
						dataGridView1->Rows[n]->Cells[8]->Value = v2[1] - v[1];
						dataGridView1->Rows[n]->Cells[9]->Value = S[1];
						dataGridView1->Rows[n]->Cells[10]->Value = h;
						dataGridView1->Rows[n]->Cells[11]->Value = C1;
						dataGridView1->Rows[n]->Cells[12]->Value = C2;
					}
					else
					{
						h = h / 2;
						C1++;
						v = v1;
					}
			}
			//Проверка выхода за границу 2 условие
			else
			{
				v1 = v;
				v = RK2_4(x, v, xg - x, param);
				v2 = RK2_4(x + (xg - x) / 2, RK2_4(x, v1, (xg - x) / 2, param), (xg - x) / 2, param);

				S[0] = abs((v2[0] - v[0]) / 15);
				S[1] = abs((v2[1] - v[1]) / 15);
				
				if (S[0] > maxS[0]) maxS[0] = S[0];
				if (S[1] > maxS[1]) maxS[1] = S[1];

				S[0] = sqrt(S[0] * S[0] + S[1] * S[1]);

				if (S[0] < eps)
				{
					x = xg;
					v_list->Add(x, v2[0]);

					//Печать в таблицу
					n++;
					dataGridView1->Rows->Add();
					dataGridView1->Rows[n]->Cells[0]->Value = n;
					dataGridView1->Rows[n]->Cells[1]->Value = x;
					dataGridView1->Rows[n]->Cells[2]->Value = v[0];
					dataGridView1->Rows[n]->Cells[3]->Value = v2[0];
					dataGridView1->Rows[n]->Cells[4]->Value = v[0] - v2[0];
					dataGridView1->Rows[n]->Cells[5]->Value = S[0];
					dataGridView1->Rows[n]->Cells[6]->Value = v[1];
					dataGridView1->Rows[n]->Cells[7]->Value = v2[1];
					dataGridView1->Rows[n]->Cells[8]->Value = v2[1] - v[1];
					dataGridView1->Rows[n]->Cells[9]->Value = S[1];
					dataGridView1->Rows[n]->Cells[10]->Value = h;
					dataGridView1->Rows[n]->Cells[11]->Value = C1;
					dataGridView1->Rows[n]->Cells[12]->Value = C2;
				}
				else
				{
					h = h / 2;
					C1++;
					v = v1;
				}
			}
		}

		LineItem^ Curve1 = panel->AddCurve("", v_list, Color::Blue, SymbolType::None);
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
	}

	//Фазовый портрет................................................................................

	x = 0;
	v = { Convert::ToDouble(textBox6->Text) , Convert::ToDouble(textBox7->Text) };
	v1 = v;
	h = 0.001;
	GraphPane^ panel2 = zedGraphControl2->GraphPane;

	PointPairList^ vz_list = gcnew ZedGraph::PointPairList();

	for (int j = 0; j < 100000; j++)
	{
		v = RK2_4(x, v, h, param);
		x = x + h;
		vz_list->Add(v[0], v[1]);
	}

	LineItem^ Curve5 = panel2->AddCurve("v'(v)", vz_list, Color::Red, SymbolType::None);

	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();

	//Вывод справки
	label21->Text = "maxS1 = " + Convert::ToString(maxS[0]) + "  ";
	label23->Text = "maxS2 = " + Convert::ToString(maxS[1]) + "  ";
	label13->Text = "n = " + Convert::ToString(n) + "  ";
	label25->Text = "Кол-во уменьшений шага = " + Convert::ToString(C1) + "  ";
	label24->Text = "Кол-во удвоений шага = " + Convert::ToString(C2) + "  ";

}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	GraphPane^ panel1 = zedGraphControl1->GraphPane;
	panel1->CurveList->Clear();

	GraphPane^ panel2 = zedGraphControl2->GraphPane;
	panel2->CurveList->Clear();

	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();

	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();
}
};
}
