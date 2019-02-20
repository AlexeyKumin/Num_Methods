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

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  textBox8;

	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::TabControl^  tabControl2;
private: System::Windows::Forms::TabPage^  tabPage4;
private: ZedGraph::ZedGraphControl^  zedGraphControl5;
private: System::Windows::Forms::TabPage^  tabPage5;
private: ZedGraph::ZedGraphControl^  zedGraphControl4;
private: System::Windows::Forms::TabPage^  tabPage6;
private: ZedGraph::ZedGraphControl^  zedGraphControl3;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::TextBox^  textBox17;
private: System::Windows::Forms::Label^  label43;

private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::TextBox^  textBox18;
private: System::Windows::Forms::DataGridView^  dataGridView3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn18;
private: System::Windows::Forms::TextBox^  textBox21;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::TextBox^  textBox20;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::CheckBox^  checkBox3;



	private: System::ComponentModel::IContainer^  components;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl5 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl4 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Задача";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(78, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(248, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"du/dx = u; Точное решение: u = Ce^x";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(190, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Начальное значение х (х0):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Начальное значение u (u0):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 103);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(230, 17);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Начальное значение шага h (h0):";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 131);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 17);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Правая граница (b):";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 163);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(243, 17);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Максимальное число итераций (N):";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 195);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(201, 17);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Параметр контроля ЛП(eps):";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(248, 35);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(248, 67);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(248, 98);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = L"0,1";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(248, 126);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"5,0";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(248, 158);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 13;
			this->textBox5->Text = L"10";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(248, 190);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 14;
			this->textBox6->Text = L"0,01";
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(810, 8);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(699, 491);
			this->zedGraphControl1->TabIndex = 15;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(841, 514);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(129, 21);
			this->checkBox1->TabIndex = 16;
			this->checkBox1->Text = L"Контроль шага";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Location = System::Drawing::Point(377, 6);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(425, 217);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Справка";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(16, 174);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(125, 17);
			this->label16->TabIndex = 24;
			this->label16->Text = L"max |u-v| = при x =";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(16, 145);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(107, 17);
			this->label15->TabIndex = 23;
			this->label15->Text = L"min hi = при x =";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(16, 117);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(110, 17);
			this->label14->TabIndex = 22;
			this->label14->Text = L"max hi = при x =";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(108, 89);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 17);
			this->label13->TabIndex = 21;
			this->label13->Text = L"C2 =";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(16, 89);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 17);
			this->label12->TabIndex = 20;
			this->label12->Text = L"C1 =";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(108, 62);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 17);
			this->label11->TabIndex = 19;
			this->label11->Text = L"b - xn =";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 57);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 17);
			this->label10->TabIndex = 18;
			this->label10->Text = L"n =";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 28);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 17);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Smax =";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11
			});
			this->dataGridView1->Location = System::Drawing::Point(9, 236);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(793, 351);
			this->dataGridView1->TabIndex = 18;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"i";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"x";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"v";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 50;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"v2";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 50;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"v2-v";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 50;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"ОЛП(S)";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 50;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"h";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 50;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"C1";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 50;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"C2";
			this->Column9->Name = L"Column9";
			this->Column9->Width = 50;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"u";
			this->Column10->Name = L"Column10";
			this->Column10->Width = 50;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"|u-v|";
			this->Column11->Name = L"Column11";
			this->Column11->Width = 50;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(997, 514);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 73);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1668, 762);
			this->tabControl1->TabIndex = 20;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1660, 733);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->zedGraphControl2);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Controls->Add(this->label30);
			this->tabPage2->Controls->Add(this->label31);
			this->tabPage2->Controls->Add(this->label32);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1660, 733);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Основная1";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 3);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(57, 17);
			this->label17->TabIndex = 20;
			this->label17->Text = L"Задача";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(818, 501);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(191, 73);
			this->button2->TabIndex = 38;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(80, 3);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(252, 17);
			this->label18->TabIndex = 21;
			this->label18->Text = L"du/dx = x/(1+x^2)*u^2 + u - u^3*sin10x;";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			});
			this->dataGridView2->Location = System::Drawing::Point(9, 247);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(781, 327);
			this->dataGridView2->TabIndex = 37;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"i";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"x";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 50;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"v";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 50;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"v2";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 50;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"v2-v";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 50;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"ОЛП(S)";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 50;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"h";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 50;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"C1";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 50;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"C2";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 50;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(818, 31);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(668, 441);
			this->zedGraphControl2->TabIndex = 34;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(266, 179);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 33;
			this->textBox7->Text = L"0,01";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Location = System::Drawing::Point(389, 5);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(401, 216);
			this->groupBox2->TabIndex = 36;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Справка";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(229, 26);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(129, 21);
			this->checkBox2->TabIndex = 26;
			this->checkBox2->Text = L"Конторль шага";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(16, 145);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(107, 17);
			this->label20->TabIndex = 23;
			this->label20->Text = L"min hi = при x =";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(16, 117);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(110, 17);
			this->label21->TabIndex = 22;
			this->label21->Text = L"max hi = при x =";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(108, 89);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(37, 17);
			this->label22->TabIndex = 21;
			this->label22->Text = L"C2 =";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(16, 89);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(37, 17);
			this->label23->TabIndex = 20;
			this->label23->Text = L"C1 =";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(108, 62);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(55, 17);
			this->label24->TabIndex = 19;
			this->label24->Text = L"b - xn =";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(16, 57);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(28, 17);
			this->label25->TabIndex = 18;
			this->label25->Text = L"n =";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(16, 28);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(54, 17);
			this->label26->TabIndex = 17;
			this->label26->Text = L"Smax =";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(266, 153);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 32;
			this->textBox8->Text = L"10";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(266, 123);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 31;
			this->textBox9->Text = L"5,0";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(6, 44);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(190, 17);
			this->label27->TabIndex = 22;
			this->label27->Text = L"Начальное значение х (х0):";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(266, 97);
			this->textBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 30;
			this->textBox10->Text = L"0,1";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(6, 70);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(194, 17);
			this->label28->TabIndex = 23;
			this->label28->Text = L"Начальное значение u (u0):";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(266, 67);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 29;
			this->textBox11->Text = L"1";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(6, 100);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(230, 17);
			this->label29->TabIndex = 24;
			this->label29->Text = L"Начальное значение шага h (h0):";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(266, 41);
			this->textBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 28;
			this->textBox12->Text = L"0";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(6, 126);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(140, 17);
			this->label30->TabIndex = 25;
			this->label30->Text = L"Правая граница (b):";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(6, 182);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(201, 17);
			this->label31->TabIndex = 27;
			this->label31->Text = L"Параметр контроля ЛП(eps):";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(6, 156);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(243, 17);
			this->label32->TabIndex = 26;
			this->label32->Text = L"Максимальное число итераций (N):";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->checkBox3);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Controls->Add(this->textBox21);
			this->tabPage3->Controls->Add(this->label49);
			this->tabPage3->Controls->Add(this->textBox20);
			this->tabPage3->Controls->Add(this->label48);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->label33);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Controls->Add(this->textBox14);
			this->tabPage3->Controls->Add(this->textBox15);
			this->tabPage3->Controls->Add(this->label41);
			this->tabPage3->Controls->Add(this->label42);
			this->tabPage3->Controls->Add(this->textBox17);
			this->tabPage3->Controls->Add(this->textBox18);
			this->tabPage3->Controls->Add(this->label44);
			this->tabPage3->Controls->Add(this->label46);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->tabControl2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1660, 733);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Основная2";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(393, 21);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(129, 21);
			this->checkBox3->TabIndex = 62;
			this->checkBox3->Text = L"Конторль шага";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14,
					this->Column13, this->Column14, this->Column15, this->Column12, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16,
					this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18
			});
			this->dataGridView3->Location = System::Drawing::Point(13, 301);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(781, 327);
			this->dataGridView3->TabIndex = 61;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"i";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 50;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"x";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Width = 50;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"v";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 50;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"v2";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->Width = 50;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"v2-v";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->Width = 50;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"v1";
			this->Column13->Name = L"Column13";
			this->Column13->Width = 50;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"v12";
			this->Column14->Name = L"Column14";
			this->Column14->Width = 50;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"v12-v1";
			this->Column15->Name = L"Column15";
			this->Column15->Width = 50;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"ОЛП(S1)";
			this->Column12->Name = L"Column12";
			this->Column12->Width = 50;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"ОЛП(S2)";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->Width = 50;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"h";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->Width = 50;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"C1";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->Width = 50;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"C2";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->Width = 50;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(266, 151);
			this->textBox21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 22);
			this->textBox21->TabIndex = 60;
			this->textBox21->Text = L"5,0";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(6, 153);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(90, 17);
			this->label49->TabIndex = 59;
			this->label49->Text = L"Параметр b:";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(266, 125);
			this->textBox20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 22);
			this->textBox20->TabIndex = 58;
			this->textBox20->Text = L"5,0";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(6, 125);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(90, 17);
			this->label48->TabIndex = 57;
			this->label48->Text = L"Параметр а:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 6);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(57, 17);
			this->label19->TabIndex = 40;
			this->label19->Text = L"Задача";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(80, 6);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(211, 17);
			this->label33->TabIndex = 41;
			this->label33->Text = L"du^2/d^2x = -(a*sin(u)+b*sin(x)) ";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label47);
			this->groupBox3->Controls->Add(this->label34);
			this->groupBox3->Controls->Add(this->label35);
			this->groupBox3->Controls->Add(this->label36);
			this->groupBox3->Controls->Add(this->label37);
			this->groupBox3->Controls->Add(this->textBox13);
			this->groupBox3->Controls->Add(this->label38);
			this->groupBox3->Controls->Add(this->label39);
			this->groupBox3->Controls->Add(this->label40);
			this->groupBox3->Controls->Add(this->label45);
			this->groupBox3->Controls->Add(this->label43);
			this->groupBox3->Controls->Add(this->textBox16);
			this->groupBox3->Location = System::Drawing::Point(393, 58);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(401, 216);
			this->groupBox3->TabIndex = 54;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Справка";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(173, 28);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(62, 17);
			this->label47->TabIndex = 54;
			this->label47->Text = L"maxS2 =";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(16, 132);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(107, 17);
			this->label34->TabIndex = 23;
			this->label34->Text = L"min hi = при x =";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(16, 115);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(110, 17);
			this->label35->TabIndex = 22;
			this->label35->Text = L"max hi = при x =";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(108, 89);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(37, 17);
			this->label36->TabIndex = 21;
			this->label36->Text = L"C2 =";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(16, 89);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(37, 17);
			this->label37->TabIndex = 20;
			this->label37->Text = L"C1 =";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(280, 185);
			this->textBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 53;
			this->textBox13->Text = L"0,01";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(108, 62);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(55, 17);
			this->label38->TabIndex = 19;
			this->label38->Text = L"b - xn =";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(16, 57);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(28, 17);
			this->label39->TabIndex = 18;
			this->label39->Text = L"n =";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(16, 28);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(62, 17);
			this->label40->TabIndex = 17;
			this->label40->Text = L"maxS1 =";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(6, 188);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(201, 17);
			this->label45->TabIndex = 47;
			this->label45->Text = L"Параметр контроля ЛП(eps):";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(6, 162);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(230, 17);
			this->label43->TabIndex = 44;
			this->label43->Text = L"Начальное значение шага h (h0):";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(280, 156);
			this->textBox16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 22);
			this->textBox16->TabIndex = 50;
			this->textBox16->Text = L"0,1";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(266, 263);
			this->textBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 22);
			this->textBox14->TabIndex = 52;
			this->textBox14->Text = L"10";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(266, 202);
			this->textBox15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 22);
			this->textBox15->TabIndex = 51;
			this->textBox15->Text = L"5,0";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(6, 47);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(194, 17);
			this->label41->TabIndex = 42;
			this->label41->Text = L"Начальное значение u (u0):";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(6, 73);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(200, 17);
			this->label42->TabIndex = 43;
			this->label42->Text = L"Начальное значение u\' (u\'0):";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(266, 70);
			this->textBox17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 22);
			this->textBox17->TabIndex = 49;
			this->textBox17->Text = L"0";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(266, 44);
			this->textBox18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 22);
			this->textBox18->TabIndex = 48;
			this->textBox18->Text = L"0";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(6, 207);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(128, 17);
			this->label44->TabIndex = 45;
			this->label44->Text = L"Правая граница x:";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(3, 268);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(243, 17);
			this->label46->TabIndex = 46;
			this->label46->Text = L"Максимальное число итераций (N):";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(841, 449);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(191, 73);
			this->button3->TabIndex = 39;
			this->button3->Text = L"Вычислить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Location = System::Drawing::Point(806, 8);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(730, 436);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->zedGraphControl5);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(722, 407);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl5
			// 
			this->zedGraphControl5->Location = System::Drawing::Point(0, 0);
			this->zedGraphControl5->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl5->Name = L"zedGraphControl5";
			this->zedGraphControl5->ScrollGrace = 0;
			this->zedGraphControl5->ScrollMaxX = 0;
			this->zedGraphControl5->ScrollMaxY = 0;
			this->zedGraphControl5->ScrollMaxY2 = 0;
			this->zedGraphControl5->ScrollMinX = 0;
			this->zedGraphControl5->ScrollMinY = 0;
			this->zedGraphControl5->ScrollMinY2 = 0;
			this->zedGraphControl5->Size = System::Drawing::Size(722, 407);
			this->zedGraphControl5->TabIndex = 36;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->zedGraphControl4);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(722, 407);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl4
			// 
			this->zedGraphControl4->Location = System::Drawing::Point(0, 0);
			this->zedGraphControl4->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl4->Name = L"zedGraphControl4";
			this->zedGraphControl4->ScrollGrace = 0;
			this->zedGraphControl4->ScrollMaxX = 0;
			this->zedGraphControl4->ScrollMaxY = 0;
			this->zedGraphControl4->ScrollMaxY2 = 0;
			this->zedGraphControl4->ScrollMinX = 0;
			this->zedGraphControl4->ScrollMinY = 0;
			this->zedGraphControl4->ScrollMinY2 = 0;
			this->zedGraphControl4->Size = System::Drawing::Size(722, 407);
			this->zedGraphControl4->TabIndex = 36;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->zedGraphControl3);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(722, 407);
			this->tabPage6->TabIndex = 2;
			this->tabPage6->Text = L"tabPage6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(0, 0);
			this->zedGraphControl3->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(722, 407);
			this->zedGraphControl3->TabIndex = 35;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1700, 793);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		double f(double x, double u)
		{
			return u;
		}

		double f1(double x, double u)
		{
			return (x / (1 + x * x)) * u * u + u - u * u * u *sin(10 * x);
		}

		double u(double x, double u, double z)
		{
			return z;
		}

		double u1(double x, double u, double z, double a, double b)
		{
			return  -(a * a * sin(u) + b * sin(x));
		}

		double RK_4(double x, double v, double h)
		{
			double k1 = f(x, v);
			double k2 = f(x + h / 4, v + (h / 4) * k1);
			double k3 = f(x + h / 2, v + (h / 2) * k2);
			double k4 = f(x + h, v + h * (k1 - 2 * k2 + 2 * k3));
			return (v + (h / 6) * (k1 + 4 * k3 + k4));
		}

		double RK1_4(double x, double v, double h)
		{
			double k1 = f1(x, v);
			double k2 = f1(x + h / 4, v + (h / 4) * k1);
			double k3 = f1(x + h / 2, v + (h / 2) * k2);
			double k4 = f1(x + h, v + h * (k1 - 2 * k2 + 2 * k3));
			return (v + (h / 6) * (k1 + 4 * k3 + k4));
		}

		vector<double> RK2_4(double x, const vector<double> &v, double h, double a, double b)
		{
			vector<double> U;
			U.push_back(0);
			U.push_back(0);

			double k11 = u(x, v[0], v[1]);
			double k21 = u1(x, v[0], v[1], a, b);

			double k12 = u(x + h / 2, v[0] + (h / 2) * k11, v[1] + (h / 2) * k21);
			double k22 = u1(x + h / 2, v[0] + (h / 2) * k11, v[1] + (h / 2) * k21, a, b);

			double k13 = u(x + h / 2, v[0] + (h / 2) * k12, v[1] + (h / 2)*k22);
			double k23 = u1(x + h / 2, v[0] + (h / 2) * k12, v[1] + (h / 2)*k22, a, b);

			double k14 = u(x + h, v[0] + h*k13, v[1] + h* k23);
			double k24 = u1(x + h, v[0] + h*k13, v[1] + h* k23, a, b);

			U[0] = (v[0] + (h / 6) * (k11 + 2 * k12 + 2 * k13 + k14));
			U[1] = (v[1] + (h / 6) * (k21 + 2 * k22 + 2 * k23 + k24));
			return U;
		}

		double exact(double x, double C, double h)
		{
			return (C * exp(x));
		}

	//Тестовая....................................................................................................
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		double x = Convert::ToDouble(textBox1->Text);
		double v = Convert::ToDouble(textBox2->Text);
		double h = Convert::ToDouble(textBox3->Text);
		double b = Convert::ToDouble(textBox4->Text);
		int Nmax = Convert::ToInt32(textBox5->Text);
		double eps = Convert::ToDouble(textBox6->Text);
		double u = v;
		double v2 = v;
		double C = u / exp(x);
		double S = v2 - v;
		double C1 = 0, C2 = 0;
		double maxS = 0, maxh = h, minh = h, maxx = 0, minx = b, maxgp = 0, maxxgp;
		int n = 0;

		dataGridView1->Rows->Clear();
		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[0]->Value = 0;
		dataGridView1->Rows[0]->Cells[1]->Value = x;
		dataGridView1->Rows[0]->Cells[2]->Value = v;
		dataGridView1->Rows[0]->Cells[3]->Value = v2;
		dataGridView1->Rows[0]->Cells[4]->Value = v2 - v;
		dataGridView1->Rows[0]->Cells[5]->Value = S;
		dataGridView1->Rows[0]->Cells[6]->Value = h;
		dataGridView1->Rows[0]->Cells[7]->Value = C1;
		dataGridView1->Rows[0]->Cells[8]->Value = C2;
		dataGridView1->Rows[0]->Cells[9]->Value = u;
		dataGridView1->Rows[0]->Cells[10]->Value = abs(u - v);

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ v_list = gcnew ZedGraph::PointPairList();
		PointPairList^ u_list = gcnew ZedGraph::PointPairList();
		v_list->Add(x, v);
		u_list->Add(x, u);
		//Проверка на двойной шаг....................................................
		if (checkBox1->Checked != true)
		{
			for (int i = 1; ((i <= Nmax) && (x < b)); i++)
			{
				if ((x + h) < b)
				{
					x = x + h;
					v = RK_4(x - h, v, h);
					v_list->Add(x, v);
					u = exact(x, C, h);
					u_list->Add(x, u);

					if (abs(u - v) > maxgp)
					{
						maxgp = abs(u - v);
						maxxgp = x;
					}
				}
				else
				{
					v = RK_4(x, v, b - x);
					v_list->Add(b, v);

					u = exact(b, C, h);
					u_list->Add(b, u);

					x = b;
					if (abs(u - v) > maxgp)
					{
						maxgp = abs(u - v);
						maxxgp = x;
					}
				}

				//Печать в таблицу
				n++;
				dataGridView1->Rows->Add();
				dataGridView1->Rows[n]->Cells[0]->Value = n;
				dataGridView1->Rows[n]->Cells[1]->Value = x;
				dataGridView1->Rows[n]->Cells[2]->Value = v;
				dataGridView1->Rows[n]->Cells[3]->Value = v2;
				dataGridView1->Rows[n]->Cells[4]->Value = v2 - v;
				dataGridView1->Rows[n]->Cells[5]->Value = S;
				dataGridView1->Rows[n]->Cells[6]->Value = h;
				dataGridView1->Rows[n]->Cells[7]->Value = C1;
				dataGridView1->Rows[n]->Cells[8]->Value = C2;
				dataGridView1->Rows[n]->Cells[9]->Value = u;
				dataGridView1->Rows[n]->Cells[10]->Value = abs(u - v);

			}
		}

		//двойной шаг............................................................................
		else
		{
			double v1;
			for (int i = 1; ((i <= Nmax) && (x < b)); i++)
			{
				//Проверка выхода за границу
				if ((x + h) < b)
				{
					if (minh > h)
					{
						minh = h;
						minx = x;
					}
					v1 = v;
					v2 = RK_4(x, v1, h);
					v = RK_4(x + h / 2, RK_4(x, v1, h / 2), h / 2);
					S = abs((v - v2) / 15);

					if (S > maxS) maxS = S;

					if ((S > (eps / 32)) && (S < eps))
					{
						x = x + h;
						u = exact(x, C, h);
						u_list->Add(x, u);

						v_list->Add(x, v);

						if (abs(u - v2) > maxgp)
						{
							maxgp = abs(u - v);
							maxxgp = x;
						}
						//Печать в таблицу
						n++;
						dataGridView1->Rows->Add();
						dataGridView1->Rows[n]->Cells[0]->Value = n;
						dataGridView1->Rows[n]->Cells[1]->Value = x;
						dataGridView1->Rows[n]->Cells[2]->Value = v;
						dataGridView1->Rows[n]->Cells[3]->Value = v2;
						dataGridView1->Rows[n]->Cells[4]->Value = v2 - v;
						dataGridView1->Rows[n]->Cells[5]->Value = S;
						dataGridView1->Rows[n]->Cells[6]->Value = h;
						dataGridView1->Rows[n]->Cells[7]->Value = C1;
						dataGridView1->Rows[n]->Cells[8]->Value = C2;
						dataGridView1->Rows[n]->Cells[9]->Value = u;
						dataGridView1->Rows[n]->Cells[10]->Value = abs(u - v);
					}
					else
						if (S < (eps / 32))
						{
							C2++;

							x = x + h;
							h = 2 * h;
							if (maxh < h)
							{
								maxh = h;
								maxx = x;
							}
							u = exact(x, C, h);
							u_list->Add(x, u);

							v_list->Add(x, v);

							if (abs(u - v2) > maxgp)
							{
								maxgp = abs(u - v);
								maxxgp = x;
							}
							//Печать в таблицу
							n++;
							dataGridView1->Rows->Add();
							dataGridView1->Rows[n]->Cells[0]->Value = n;
							dataGridView1->Rows[n]->Cells[1]->Value = x;
							dataGridView1->Rows[n]->Cells[2]->Value = v;
							dataGridView1->Rows[n]->Cells[3]->Value = v2;
							dataGridView1->Rows[n]->Cells[4]->Value = v2 - v;
							dataGridView1->Rows[n]->Cells[5]->Value = S;
							dataGridView1->Rows[n]->Cells[6]->Value = h;
							dataGridView1->Rows[n]->Cells[7]->Value = C1;
							dataGridView1->Rows[n]->Cells[8]->Value = C2;
							dataGridView1->Rows[n]->Cells[9]->Value = u;
							dataGridView1->Rows[n]->Cells[10]->Value = abs(u - v);
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
					if (minh > h)
					{
						minh = h;
						minx = x;
					}

					v1 = v;
					v2 = RK_4(x, v, b - x);
					v = RK_4(x + (b - x) / 2, RK_4(x, v, (b - x) / 2), (b - x) / 2);
					S = abs((v - v2) / 15);

					if (S > maxS) maxS = S;

					if (S < eps)
					{
						x = b;
						u = exact(x, C, b - x);
						u_list->Add(x, u);

						v_list->Add(x, v);

						if (abs(u - v2) > maxgp)
						{
							maxgp = abs(u - v);
							maxxgp = x;
						}
						//Печать в таблицу
						n++;
						dataGridView1->Rows->Add();
						dataGridView1->Rows[n]->Cells[0]->Value = n;
						dataGridView1->Rows[n]->Cells[1]->Value = x;
						dataGridView1->Rows[n]->Cells[2]->Value = v;
						dataGridView1->Rows[n]->Cells[3]->Value = v2;
						dataGridView1->Rows[n]->Cells[4]->Value = v2 - v;
						dataGridView1->Rows[n]->Cells[5]->Value = S;
						dataGridView1->Rows[n]->Cells[6]->Value = h;
						dataGridView1->Rows[n]->Cells[7]->Value = C1;
						dataGridView1->Rows[n]->Cells[8]->Value = C2;
						dataGridView1->Rows[n]->Cells[9]->Value = u;
						dataGridView1->Rows[n]->Cells[10]->Value = abs(u - v);
					}
					else
					{
						h = h / 2;
						C1++;
						v = v1;
					}
				}

			}
		}

		//рисование графиков и вывод справки
		LineItem^ Curve1 = panel->AddCurve("f", v_list, Color::Red, SymbolType::None);
		LineItem^ Curve2 = panel->AddCurve("u", u_list, Color::Black, SymbolType::None);
		Curve2->Line->IsSmooth = true;

		label9->Text = "maxS = " + Convert::ToString(maxS) + "  ";
		label10->Text = "n = " + Convert::ToString(n) + "  ";
		label11->Text = "b - xn = " + Convert::ToString(b - x) + "  ";
		label12->Text = "C1 = " + Convert::ToString(C1) + "  ";
		label13->Text = "C2 = " + Convert::ToString(C2) + "  ";
		label14->Text = "max hi = " + Convert::ToString(maxh) + "  при х = " + Convert::ToString(maxx);
		label15->Text = "min hi = " + Convert::ToString(minh) + "  при х = " + Convert::ToString(minx);
		label16->Text = "max |u - v| = " + Convert::ToString(maxgp) + "  при х = " + Convert::ToString(maxxgp);

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();
	}

	//Основная 1..................................................................................................
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	double x = Convert::ToDouble(textBox12->Text);
	double v = Convert::ToDouble(textBox11->Text);
	double h = Convert::ToDouble(textBox10->Text);
	double b = Convert::ToDouble(textBox9->Text);
	int Nmax = Convert::ToInt32(textBox8->Text);
	int n = 0;
	double eps = Convert::ToDouble(textBox7->Text);
	double v2 = v;
	double S = v2 - v;
	double C1 = 0, C2 = 0;
	double maxS = 0, maxh = h, minh = h, maxx = 0, minx = b;

	dataGridView2->Rows->Clear();
	dataGridView2->Rows->Add();
	dataGridView2->Rows[0]->Cells[0]->Value = 0;
	dataGridView2->Rows[0]->Cells[1]->Value = x;
	dataGridView2->Rows[0]->Cells[2]->Value = v;
	dataGridView2->Rows[0]->Cells[3]->Value = v2;
	dataGridView2->Rows[0]->Cells[4]->Value = v2 - v;
	dataGridView2->Rows[0]->Cells[5]->Value = S;
	dataGridView2->Rows[0]->Cells[6]->Value = h;
	dataGridView2->Rows[0]->Cells[7]->Value = C1;
	dataGridView2->Rows[0]->Cells[8]->Value = C2;

	GraphPane^ panel = zedGraphControl2->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ v_list = gcnew ZedGraph::PointPairList();
	PointPairList^ v2_list = gcnew ZedGraph::PointPairList();
	v_list->Add(x, v);
	v2_list->Add(x, v2);

	//Проверка на двойной шаг
	if (checkBox2->Checked != true)
	{
		for (int i = 1; ((i <= Nmax) && (x < b)); i++)
		{
			if ((x + h) < b)
			{
				
				v = RK1_4(x, v, h);
				x = x + h;
				v_list->Add(x, v);
			}
			else
			{
				v = RK1_4(x, v, b - x);
				v_list->Add(b, v);
				x = b;
			}

			//Печать в таблицу
			n++;
			dataGridView2->Rows->Add();
			dataGridView2->Rows[n]->Cells[0]->Value = n;
			dataGridView2->Rows[n]->Cells[1]->Value = x;
			dataGridView2->Rows[n]->Cells[2]->Value = v;
			dataGridView2->Rows[n]->Cells[3]->Value = v2;
			dataGridView2->Rows[n]->Cells[4]->Value = v2 - v;
			dataGridView2->Rows[n]->Cells[5]->Value = S;
			dataGridView2->Rows[n]->Cells[6]->Value = h;
			dataGridView2->Rows[n]->Cells[7]->Value = C1;
			dataGridView2->Rows[n]->Cells[8]->Value = C2;
		}
		LineItem^ Curve1 = panel->AddCurve("v", v_list, Color::Red, SymbolType::None);
	}

	//Проверка на двойной шаг 2 условие
	else
	{
		double v1;
		for (int i = 1; ((i <= Nmax) && (x < b)); i++)
		{
			//Проверка выхода за границу
			if ((x + h) < b)
			{
				if (minh > h)
				{
					minh = h;
					minx = x;
				}

				v1 = v;
				v = RK1_4(x, v1, h);
				v2 = RK1_4(x + h / 2, RK1_4(x, v1, h / 2), h / 2);
				S = abs((v2 - v) / 15);

				if (S > maxS) maxS = S;

				if ((S > (eps / 32)) && (S < eps))
				{
					x = x + h;
					v2_list->Add(x, v2);

					//Печать в таблицу
					n++;
					dataGridView2->Rows->Add();
					dataGridView2->Rows[n]->Cells[0]->Value = n;
					dataGridView2->Rows[n]->Cells[1]->Value = x;
					dataGridView2->Rows[n]->Cells[2]->Value = v;
					dataGridView2->Rows[n]->Cells[3]->Value = v2;
					dataGridView2->Rows[n]->Cells[4]->Value = v2 - v;
					dataGridView2->Rows[n]->Cells[5]->Value = S;
					dataGridView2->Rows[n]->Cells[6]->Value = h;
					dataGridView2->Rows[n]->Cells[7]->Value = C1;
					dataGridView2->Rows[n]->Cells[8]->Value = C2;
				}
				else
					if (S < (eps / 32))
					{
						C2++;
						x = x + h;
						h = 2 * h;

						if (maxh < h)
						{
							maxh = h;
							maxx = x;
						}

						v2_list->Add(x, v2);

						//Печать в таблицу
						n++;
						dataGridView2->Rows->Add();
						dataGridView2->Rows[n]->Cells[0]->Value = n;
						dataGridView2->Rows[n]->Cells[1]->Value = x;
						dataGridView2->Rows[n]->Cells[2]->Value = v;
						dataGridView2->Rows[n]->Cells[3]->Value = v2;
						dataGridView2->Rows[n]->Cells[4]->Value = v2 - v;
						dataGridView2->Rows[n]->Cells[5]->Value = S;
						dataGridView2->Rows[n]->Cells[6]->Value = h;
						dataGridView2->Rows[n]->Cells[7]->Value = C1;
						dataGridView2->Rows[n]->Cells[8]->Value = C2;
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
				if (minh > h)
				{
					minh = h;
					minx = x;
				}

				v1 = v;
				v = RK1_4(x, v, b - x);
				v2 = RK1_4(x + (b - x) / 2, RK1_4(x, v, (b - x) / 2), (b - x) / 2);
				S = abs((v2 - v) / 15);

				if (S > maxS) maxS = S;

				if (S < eps)
				{
					x = b;
					v2_list->Add(x, v2);

					//Печать в таблицу
					n++;
					dataGridView2->Rows->Add();
					dataGridView2->Rows[n]->Cells[0]->Value = n;
					dataGridView2->Rows[n]->Cells[1]->Value = x;
					dataGridView2->Rows[n]->Cells[2]->Value = v;
					dataGridView2->Rows[n]->Cells[3]->Value = v2;
					dataGridView2->Rows[n]->Cells[4]->Value = v2 - v;
					dataGridView2->Rows[n]->Cells[5]->Value = S;
					dataGridView2->Rows[n]->Cells[6]->Value = h;
					dataGridView2->Rows[n]->Cells[7]->Value = C1;
					dataGridView2->Rows[n]->Cells[8]->Value = C2;
				}
				else
				{
					h = h / 2;
					C1++;
					v = v1;
				}
			}
		}
		LineItem^ Curve2 = panel->AddCurve("v2", v2_list, Color::Blue, SymbolType::None);
	}

	// вывод справки
	label26->Text = "maxS = " + Convert::ToString(maxS) + "  ";
	label25->Text = "n = " + Convert::ToString(n) + "  ";
	label24->Text = "b - xn = " + Convert::ToString(b - x) + "  ";
	label23->Text = "C1 = " + Convert::ToString(C1) + "  ";
	label22->Text = "C2 = " + Convert::ToString(C2) + "  ";
	label21->Text = "max hi = " + Convert::ToString(maxh) + "  при х = " + Convert::ToString(maxx);
	label20->Text = "min hi = " + Convert::ToString(minh) + "  при х = " + Convert::ToString(minx);

	zedGraphControl2->AxisChange();
	zedGraphControl2->Invalidate();
}
	
	//Основная 2..................................................................................................
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		vector<double> v;
		vector<double> v2;
		vector<double> S;
		vector<double> param;
		double x = 0;
		v.push_back(Convert::ToDouble(textBox18->Text));
		v.push_back(Convert::ToDouble(textBox17->Text));

		param.push_back(Convert::ToDouble(textBox20->Text));
		param.push_back(Convert::ToDouble(textBox21->Text));

		double h = Convert::ToDouble(textBox16->Text);
		double xg = Convert::ToDouble(textBox15->Text);
		int Nmax = Convert::ToInt32(textBox14->Text);
		int n = 0;
		double eps = Convert::ToDouble(textBox13->Text);
		v2 = v;
		S = { v2[0] - v[0], v2[1] - v[1] };
		double C1 = 0, C2 = 0;
		double maxh = h, minh = h, maxx = 0, minx = xg;
		vector<double> maxS = { 0, 0 };

		dataGridView3->Rows->Clear();
		dataGridView3->Rows->Add();
		dataGridView3->Rows[0]->Cells[0]->Value = 0;
		dataGridView3->Rows[0]->Cells[1]->Value = x;
		dataGridView3->Rows[0]->Cells[2]->Value = v[0];
		dataGridView3->Rows[0]->Cells[3]->Value = v2[0];
		dataGridView3->Rows[0]->Cells[4]->Value = v2[0] - v[0];
		dataGridView3->Rows[0]->Cells[5]->Value = v[1];
		dataGridView3->Rows[0]->Cells[6]->Value = v2[1];
		dataGridView3->Rows[0]->Cells[7]->Value = v2[1] - v[1];
		dataGridView3->Rows[0]->Cells[8]->Value = S[0];
		dataGridView3->Rows[0]->Cells[9]->Value = S[1];
		dataGridView3->Rows[0]->Cells[10]->Value = h;
		dataGridView3->Rows[0]->Cells[11]->Value = C1;
		dataGridView3->Rows[0]->Cells[12]->Value = C2;

		GraphPane^ panel = zedGraphControl5->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ v1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ v12_list = gcnew ZedGraph::PointPairList();
		v1_list->Add(x, v[0]);
		v12_list->Add(x, v2[0]);

		GraphPane^ panel1 = zedGraphControl4->GraphPane;
		panel1->CurveList->Clear();
		PointPairList^ v2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ v22_list = gcnew ZedGraph::PointPairList();
		v2_list->Add(x, v[1]);
		v22_list->Add(x, v2[1]);

		vector<double> v1 = v;

		//Проверка на двойной шаг........................................................................................
		if (checkBox3->Checked != true)
		{
			for (int i = 1; ((i <= Nmax) && (x < xg)); i++)
			{
				//Проверка выхода за границу
				if ((x + h) < xg)
				{
					v = RK2_4(x, v, h, param[0], param[1]);

					S[0] = abs((v2[0] - v[0]) / 15);
					S[1] = abs((v2[0] - v[0]) / 15);

					x = x + h;
					v1_list->Add(x, v[0]);
					v2_list->Add(x, v[1]);

					//Печать в таблицу
					n++;
					dataGridView3->Rows->Add();
					dataGridView3->Rows[n]->Cells[0]->Value = n;
					dataGridView3->Rows[n]->Cells[1]->Value = x;
					dataGridView3->Rows[n]->Cells[2]->Value = v[0];
					dataGridView3->Rows[n]->Cells[3]->Value = v2[0];
					dataGridView3->Rows[n]->Cells[4]->Value = v2[0] - v[0];
					dataGridView3->Rows[n]->Cells[5]->Value = v[1];
					dataGridView3->Rows[n]->Cells[6]->Value = v2[1];
					dataGridView3->Rows[n]->Cells[7]->Value = v2[1] - v[1];
					dataGridView3->Rows[n]->Cells[8]->Value = S[0];
					dataGridView3->Rows[n]->Cells[9]->Value = S[1];
					dataGridView3->Rows[n]->Cells[10]->Value = h;
					dataGridView3->Rows[n]->Cells[11]->Value = C1;
					dataGridView3->Rows[n]->Cells[12]->Value = C2;
				}

				//Проверка выхода за границу 2 условие
				else
				{
					v = RK2_4(x, v, xg - x, param[0], param[1]);

					S[0] = abs((v2[0] - v[0]) / 15);
					S[1] = abs((v2[0] - v[0]) / 15);

					x = xg;
					v1_list->Add(x, v[0]);
					v2_list->Add(x, v[1]);

					//Печать в таблицу
					n++;
					dataGridView3->Rows->Add();
					dataGridView3->Rows[n]->Cells[0]->Value = n;
					dataGridView3->Rows[n]->Cells[1]->Value = x;
					dataGridView3->Rows[n]->Cells[2]->Value = v[0];
					dataGridView3->Rows[n]->Cells[3]->Value = v2[0];
					dataGridView3->Rows[n]->Cells[4]->Value = v2[0] - v[0];
					dataGridView3->Rows[n]->Cells[5]->Value = v[1];
					dataGridView3->Rows[n]->Cells[6]->Value = v2[1];
					dataGridView3->Rows[n]->Cells[7]->Value = v2[1] - v[1];
					dataGridView3->Rows[n]->Cells[8]->Value = S[0];
					dataGridView3->Rows[n]->Cells[9]->Value = S[1];
					dataGridView3->Rows[n]->Cells[10]->Value = h;
					dataGridView3->Rows[n]->Cells[11]->Value = C1;
					dataGridView3->Rows[n]->Cells[12]->Value = C2;
				}
			}
			LineItem^ Curve1 = panel->AddCurve("v", v1_list, Color::Red, SymbolType::Plus);
			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			LineItem^ Curve3 = panel1->AddCurve("v'", v2_list, Color::Red, SymbolType::Plus);
			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();
		}

		//Двойной шаг....................................................................................
		else 
		{
			for (int i = 1; ((i <= Nmax) && (x < xg)); i++)
			{
				//Проверка выхода за границу
				if ((x + h) < xg)
				{
					if (minh > h)
					{
						minh = h;
						minx = x;
					}

					v1 = v;
					v = RK2_4(x, v, h, param[0], param[1]);
					v2 = RK2_4(x + h / 2, RK2_4(x, v1, h / 2, param[0], param[1]), h / 2, param[0], param[1]);

					S[0] = abs((v2[0] - v[0]) / 15);
					S[1] = abs((v2[0] - v[0]) / 15);

					if (S[0] > maxS[0]) maxS[0] = S[0];
					if (S[1] > maxS[1]) maxS[1] = S[1];

					S[0] = sqrt(S[0] * S[0] + S[1] * S[1]);

					if ((S[0] > (eps / 32)) && (S[0] < eps))
					{
						x = x + h;
						v12_list->Add(x, v2[0]);
						v22_list->Add(x, v2[1]);

						//Печать в таблицу
						n++;
						dataGridView3->Rows->Add();
						dataGridView3->Rows[n]->Cells[0]->Value = n;
						dataGridView3->Rows[n]->Cells[1]->Value = x;
						dataGridView3->Rows[n]->Cells[2]->Value = v[0];
						dataGridView3->Rows[n]->Cells[3]->Value = v2[0];
						dataGridView3->Rows[n]->Cells[4]->Value = v2[0] - v[0];
						dataGridView3->Rows[n]->Cells[5]->Value = v[1];
						dataGridView3->Rows[n]->Cells[6]->Value = v2[1];
						dataGridView3->Rows[n]->Cells[7]->Value = v2[1] - v[1];
						dataGridView3->Rows[n]->Cells[8]->Value = S[0];
						dataGridView3->Rows[n]->Cells[9]->Value = S[1];
						dataGridView3->Rows[n]->Cells[10]->Value = h;
						dataGridView3->Rows[n]->Cells[11]->Value = C1;
						dataGridView3->Rows[n]->Cells[12]->Value = C2;
					}
					else
						if (S[0] < (eps / 32))
						{
							C2++;

							x = x + h;
							h = 2 * h;

							if (maxh < h)
							{
								maxh = h;
								maxx = x;
							}

							v12_list->Add(x, v2[0]);
							v22_list->Add(x, v2[1]);

							//Печать в таблицу
							n++;
							dataGridView3->Rows->Add();
							dataGridView3->Rows[n]->Cells[0]->Value = n;
							dataGridView3->Rows[n]->Cells[1]->Value = x;
							dataGridView3->Rows[n]->Cells[2]->Value = v[0];
							dataGridView3->Rows[n]->Cells[3]->Value = v2[0];
							dataGridView3->Rows[n]->Cells[4]->Value = v2[0] - v[0];
							dataGridView3->Rows[n]->Cells[5]->Value = v[1];
							dataGridView3->Rows[n]->Cells[6]->Value = v2[1];
							dataGridView3->Rows[n]->Cells[7]->Value = v2[1] - v[1];
							dataGridView3->Rows[n]->Cells[8]->Value = S[0];
							dataGridView3->Rows[n]->Cells[9]->Value = S[1];
							dataGridView3->Rows[n]->Cells[10]->Value = h;
							dataGridView3->Rows[n]->Cells[11]->Value = C1;
							dataGridView3->Rows[n]->Cells[12]->Value = C2;
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
					if (minh > h)
					{
						minh = h;
						minx = x;
					}

					v1 = v;
					v = RK2_4(x, v, xg - x, param[0], param[1]);
					v2 = RK2_4(x + (xg - x) / 2, RK2_4(x, v1, (xg - x) / 2, param[0], param[1]), (xg - x) / 2, param[0], param[1]);

					S[0] = abs((v2[0] - v[0]) / 15);
					S[1] = abs((v2[0] - v[0]) / 15);

					if (S[0] > maxS[0]) maxS[0] = S[0];
					if (S[1] > maxS[1]) maxS[1] = S[1];

					S[0] = sqrt(S[0] * S[0] + S[1] * S[1]);

					if (S[0] < eps)
					{
						x = xg;
						v12_list->Add(x, v2[0]);
						v22_list->Add(x, v2[1]);

						//Печать в таблицу
						n++;
						dataGridView3->Rows->Add();
						dataGridView3->Rows[n]->Cells[0]->Value = n;
						dataGridView3->Rows[n]->Cells[1]->Value = x;
						dataGridView3->Rows[n]->Cells[2]->Value = v[0];
						dataGridView3->Rows[n]->Cells[3]->Value = v2[0];
						dataGridView3->Rows[n]->Cells[4]->Value = v2[0] - v[0];
						dataGridView3->Rows[n]->Cells[5]->Value = v[1];
						dataGridView3->Rows[n]->Cells[6]->Value = v2[1];
						dataGridView3->Rows[n]->Cells[7]->Value = v2[1] - v[1];
						dataGridView3->Rows[n]->Cells[8]->Value = S[0];
						dataGridView3->Rows[n]->Cells[9]->Value = S[1];
						dataGridView3->Rows[n]->Cells[10]->Value = h;
						dataGridView3->Rows[n]->Cells[11]->Value = C1;
						dataGridView3->Rows[n]->Cells[12]->Value = C2;
					}
					else
					{
						h = h / 2;
						C1++;
						v = v1;
					}
				}
			}

			LineItem^ Curve2 = panel->AddCurve("v2", v12_list, Color::Blue, SymbolType::Plus);
			zedGraphControl5->AxisChange();
			zedGraphControl5->Invalidate();

			LineItem^ Curve4 = panel1->AddCurve("v'2", v22_list, Color::Blue, SymbolType::Plus);
			zedGraphControl4->AxisChange();
			zedGraphControl4->Invalidate();
		}

		xg = xg - x;

		//Фазовый портрет
		x = 0;
		v = { Convert::ToDouble(textBox18->Text) , Convert::ToDouble(textBox17->Text) };
		v1 = v;
		h = 0.001;
		GraphPane^ panel2 = zedGraphControl3->GraphPane;
		panel2->CurveList->Clear();

		PointPairList^ vz_list = gcnew ZedGraph::PointPairList();

		for (int j = 0; j < 100000; j++)
		{
			v = RK2_4(x, v, h, param[0], param[1]);
			x = x + h;
			vz_list->Add(v[0], v[1]);
		}

		LineItem^ Curve5 = panel2->AddCurve("u'(u)", vz_list, Color::Red, SymbolType::None);
		zedGraphControl3->AxisChange();
		zedGraphControl3->Invalidate();

		//Вывод справки
		label40->Text = "maxS1 = " + Convert::ToString(maxS[0]) + "  ";
		label47->Text = "maxS2 = " + Convert::ToString(maxS[1]) + "  ";
		label39->Text = "n = " + Convert::ToString(n) + "  ";
		label38->Text = "Граница - xn = " + Convert::ToString(xg) + "  ";
		label37->Text = "C1 = " + Convert::ToString(C1) + "  ";
		label36->Text = "C2 = " + Convert::ToString(C2) + "  ";
		label35->Text = "max hi = " + Convert::ToString(maxh) + "  при х = " + Convert::ToString(maxx);
		label34->Text = "min hi = " + Convert::ToString(minh) + "  при х = " + Convert::ToString(minx);
	}
};
}