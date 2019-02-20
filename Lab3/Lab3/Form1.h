#pragma once
#include <vector>
#include <iostream>
#include <math.h>
#include "Model.h"
#include <string>

namespace CppCLR_WinformsProjekt {

	typedef vector<double> T;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;
	using namespace std;
	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
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

	protected:

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;


	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: ZedGraph::ZedGraphControl^  zedGraphControl3;
	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::TabControl^  tabControl3;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: ZedGraph::ZedGraphControl^  zedGraphControl4;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: ZedGraph::ZedGraphControl^  zedGraphControl5;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: ZedGraph::ZedGraphControl^  zedGraphControl6;
	private: System::Windows::Forms::GroupBox^  groupBox2;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::DataGridView^  dataGridView3;





	private: System::Windows::Forms::TabControl^  tabControl4;
	private: System::Windows::Forms::TabPage^  tabPage10;
	private: ZedGraph::ZedGraphControl^  zedGraphControl7;
	private: System::Windows::Forms::TabPage^  tabPage11;
	private: ZedGraph::ZedGraphControl^  zedGraphControl8;
	private: System::Windows::Forms::TabPage^  tabPage12;
	private: ZedGraph::ZedGraphControl^  zedGraphControl9;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label22;





	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl4 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl5 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl6 = (gcnew ZedGraph::ZedGraphControl());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl7 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl8 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl9 = (gcnew ZedGraph::ZedGraphControl());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabControl3->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabControl4->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(-1, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1505, 521);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1497, 492);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Òåñòîâàÿ 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(340, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(439, 450);
			this->dataGridView1->TabIndex = 11;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"N";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"xi";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"u(xi)";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"v(xi)";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"|u(xi) - v(xi)|";
			this->Column5->Name = L"Column5";
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Location = System::Drawing::Point(801, 6);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(689, 474);
			this->tabControl2->TabIndex = 7;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->zedGraphControl1);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(681, 445);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"u(x)";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(-1, 0);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(678, 441);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->zedGraphControl2);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(681, 445);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"v(x)";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(3, 2);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(674, 441);
			this->zedGraphControl2->TabIndex = 1;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->zedGraphControl3);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(681, 445);
			this->tabPage6->TabIndex = 2;
			this->tabPage6->Text = L"|u(x) - v(x)|";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(3, 2);
			this->zedGraphControl3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(674, 441);
			this->zedGraphControl3->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(18, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(299, 450);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ñïðàâêà";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"u(x) = P2(x) = x^2 + 10x";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 136);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 17);
			this->label1->TabIndex = 11;
			this->label1->Text = L"k = 1, q = 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"x(maxD) =";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(81, 99);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(47, 22);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"100";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"N";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"maxD =";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(168, 354);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 90);
			this->button1->TabIndex = 8;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->tabControl3);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1497, 492);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Òåñòîâàÿ 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dataGridView2->Location = System::Drawing::Point(331, 16);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(439, 450);
			this->dataGridView2->TabIndex = 14;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"N";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"xi";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"u(xi)";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"v(xi)";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"|u(xi) - v(xi)|";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage7);
			this->tabControl3->Controls->Add(this->tabPage8);
			this->tabControl3->Controls->Add(this->tabPage9);
			this->tabControl3->Location = System::Drawing::Point(792, 0);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(689, 474);
			this->tabControl3->TabIndex = 13;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->zedGraphControl4);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(681, 445);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"u(x)";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl4
			// 
			this->zedGraphControl4->Location = System::Drawing::Point(-1, 0);
			this->zedGraphControl4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl4->Name = L"zedGraphControl4";
			this->zedGraphControl4->ScrollGrace = 0;
			this->zedGraphControl4->ScrollMaxX = 0;
			this->zedGraphControl4->ScrollMaxY = 0;
			this->zedGraphControl4->ScrollMaxY2 = 0;
			this->zedGraphControl4->ScrollMinX = 0;
			this->zedGraphControl4->ScrollMinY = 0;
			this->zedGraphControl4->ScrollMinY2 = 0;
			this->zedGraphControl4->Size = System::Drawing::Size(678, 441);
			this->zedGraphControl4->TabIndex = 0;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->zedGraphControl5);
			this->tabPage8->Location = System::Drawing::Point(4, 25);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(681, 445);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"v(x)";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl5
			// 
			this->zedGraphControl5->Location = System::Drawing::Point(3, 2);
			this->zedGraphControl5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl5->Name = L"zedGraphControl5";
			this->zedGraphControl5->ScrollGrace = 0;
			this->zedGraphControl5->ScrollMaxX = 0;
			this->zedGraphControl5->ScrollMaxY = 0;
			this->zedGraphControl5->ScrollMaxY2 = 0;
			this->zedGraphControl5->ScrollMinX = 0;
			this->zedGraphControl5->ScrollMinY = 0;
			this->zedGraphControl5->ScrollMinY2 = 0;
			this->zedGraphControl5->Size = System::Drawing::Size(674, 441);
			this->zedGraphControl5->TabIndex = 1;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->zedGraphControl6);
			this->tabPage9->Location = System::Drawing::Point(4, 25);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(681, 445);
			this->tabPage9->TabIndex = 2;
			this->tabPage9->Text = L"|u(x) - v(x)|";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl6
			// 
			this->zedGraphControl6->Location = System::Drawing::Point(3, 2);
			this->zedGraphControl6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl6->Name = L"zedGraphControl6";
			this->zedGraphControl6->ScrollGrace = 0;
			this->zedGraphControl6->ScrollMaxX = 0;
			this->zedGraphControl6->ScrollMaxY = 0;
			this->zedGraphControl6->ScrollMaxY2 = 0;
			this->zedGraphControl6->ScrollMinX = 0;
			this->zedGraphControl6->ScrollMinY = 0;
			this->zedGraphControl6->ScrollMinY2 = 0;
			this->zedGraphControl6->Size = System::Drawing::Size(674, 441);
			this->zedGraphControl6->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(9, 16);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(299, 450);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ñïðàâêà";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 69);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 17);
			this->label8->TabIndex = 10;
			this->label8->Text = L"x(maxD) =";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(81, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(47, 22);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"100";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(18, 102);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 17);
			this->label9->TabIndex = 10;
			this->label9->Text = L"N";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 37);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"maxD =";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(168, 354);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 90);
			this->button2->TabIndex = 8;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Controls->Add(this->tabControl4);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1497, 492);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Îñíîâíàÿ";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10
			});
			this->dataGridView3->Location = System::Drawing::Point(328, 19);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(439, 450);
			this->dataGridView3->TabIndex = 17;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"N";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 50;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"xi";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"v2(xi)";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"v(xi)";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"|u(xi) - v(xi)|";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage10);
			this->tabControl4->Controls->Add(this->tabPage11);
			this->tabControl4->Controls->Add(this->tabPage12);
			this->tabControl4->Location = System::Drawing::Point(789, 3);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(689, 474);
			this->tabControl4->TabIndex = 16;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->zedGraphControl7);
			this->tabPage10->Location = System::Drawing::Point(4, 25);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(681, 445);
			this->tabPage10->TabIndex = 0;
			this->tabPage10->Text = L"u(x)";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl7
			// 
			this->zedGraphControl7->Location = System::Drawing::Point(-1, 0);
			this->zedGraphControl7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl7->Name = L"zedGraphControl7";
			this->zedGraphControl7->ScrollGrace = 0;
			this->zedGraphControl7->ScrollMaxX = 0;
			this->zedGraphControl7->ScrollMaxY = 0;
			this->zedGraphControl7->ScrollMaxY2 = 0;
			this->zedGraphControl7->ScrollMinX = 0;
			this->zedGraphControl7->ScrollMinY = 0;
			this->zedGraphControl7->ScrollMinY2 = 0;
			this->zedGraphControl7->Size = System::Drawing::Size(678, 441);
			this->zedGraphControl7->TabIndex = 0;
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->zedGraphControl8);
			this->tabPage11->Location = System::Drawing::Point(4, 25);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(681, 445);
			this->tabPage11->TabIndex = 1;
			this->tabPage11->Text = L"v(x)";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl8
			// 
			this->zedGraphControl8->Location = System::Drawing::Point(3, 2);
			this->zedGraphControl8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl8->Name = L"zedGraphControl8";
			this->zedGraphControl8->ScrollGrace = 0;
			this->zedGraphControl8->ScrollMaxX = 0;
			this->zedGraphControl8->ScrollMaxY = 0;
			this->zedGraphControl8->ScrollMaxY2 = 0;
			this->zedGraphControl8->ScrollMinX = 0;
			this->zedGraphControl8->ScrollMinY = 0;
			this->zedGraphControl8->ScrollMinY2 = 0;
			this->zedGraphControl8->Size = System::Drawing::Size(674, 441);
			this->zedGraphControl8->TabIndex = 1;
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->zedGraphControl9);
			this->tabPage12->Location = System::Drawing::Point(4, 25);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(681, 445);
			this->tabPage12->TabIndex = 2;
			this->tabPage12->Text = L"|u(x) - v(x)|";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl9
			// 
			this->zedGraphControl9->Location = System::Drawing::Point(3, 2);
			this->zedGraphControl9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl9->Name = L"zedGraphControl9";
			this->zedGraphControl9->ScrollGrace = 0;
			this->zedGraphControl9->ScrollMaxX = 0;
			this->zedGraphControl9->ScrollMaxY = 0;
			this->zedGraphControl9->ScrollMaxY2 = 0;
			this->zedGraphControl9->ScrollMinX = 0;
			this->zedGraphControl9->ScrollMinY = 0;
			this->zedGraphControl9->ScrollMinY2 = 0;
			this->zedGraphControl9->Size = System::Drawing::Size(674, 441);
			this->zedGraphControl9->TabIndex = 1;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Location = System::Drawing::Point(6, 19);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(299, 450);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ñïðàâêà";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(18, 250);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(128, 17);
			this->label21->TabIndex = 16;
			this->label21->Text = L"v0 = 1          vN = 2";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(18, 217);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(154, 17);
			this->label20->TabIndex = 15;
			this->label20->Text = L"f1 = 1          f2 = x^2 - 1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(18, 134);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(114, 17);
			this->label13->TabIndex = 14;
			this->label13->Text = L"ðàçðûâ 1/sqrt(5)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(18, 190);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(159, 17);
			this->label14->TabIndex = 13;
			this->label14->Text = L"q1 = x + 1         q2 = x^3";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(18, 134);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 17);
			this->label15->TabIndex = 12;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(18, 163);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(175, 17);
			this->label16->TabIndex = 11;
			this->label16->Text = L"k1 = sin^2(x) + 1      k2 = 1";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(15, 69);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(71, 17);
			this->label17->TabIndex = 10;
			this->label17->Text = L"x(maxD) =";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(81, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(47, 22);
			this->textBox2->TabIndex = 9;
			this->textBox2->Text = L"100";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(18, 102);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(18, 17);
			this->label18->TabIndex = 10;
			this->label18->Text = L"N";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(15, 37);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(55, 17);
			this->label19->TabIndex = 9;
			this->label19->Text = L"maxD =";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(168, 354);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 90);
			this->button3->TabIndex = 8;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 253);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 17);
			this->label6->TabIndex = 21;
			this->label6->Text = L"v0 = 1          vN = 2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 220);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(154, 17);
			this->label7->TabIndex = 20;
			this->label7->Text = L"f1 = 1          f2 = x^2 - 1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(15, 137);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(114, 17);
			this->label11->TabIndex = 19;
			this->label11->Text = L"ðàçðûâ 1/sqrt(5)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(15, 193);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(159, 17);
			this->label12->TabIndex = 18;
			this->label12->Text = L"q1 = x + 1         q2 = x^3";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(15, 166);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(175, 17);
			this->label22->TabIndex = 17;
			this->label22->Text = L"k1 = sin^2(x) + 1      k2 = 1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1505, 519);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabControl3->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabControl4->ResumeLayout(false);
			this->tabPage10->ResumeLayout(false);
			this->tabPage11->ResumeLayout(false);
			this->tabPage12->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		void pushTab(System::Windows::Forms::DataGridView^ Tab, int N, T& x, T& u, T& v, T& d)
		{
			Tab->Rows->Clear();
			for (int i = 0; i < N; i++)
			{
				Tab->Rows->Add();
				Tab->Rows[i]->Cells[0]->Value = i;
				Tab->Rows[i]->Cells[1]->Value = x[i];
				Tab->Rows[i]->Cells[2]->Value = u[i];
				Tab->Rows[i]->Cells[3]->Value = v[i];
				Tab->Rows[i]->Cells[4]->Value = d[i];
			}
		}

		void AddGraph1(ZedGraph::ZedGraphControl^  Graph, int N, T& x, T& y, T& y1, string& s)
		{
			GraphPane^ panel = Graph->GraphPane;
			panel->CurveList->Clear();
			PointPairList^ y_list = gcnew ZedGraph::PointPairList();
			PointPairList^ y1_list = gcnew ZedGraph::PointPairList();

			for (int i = 0; i < N; i++)
			{
				y_list->Add(x[i], y[i]);
				y1_list->Add(x[i], y1[i]);
			}

			LineItem^ Curve = panel->AddCurve("u(x)", y_list, Color::Red, SymbolType::None);
			LineItem^ Curve1 = panel->AddCurve("v(x)", y1_list, Color::Blue, SymbolType::None);
			Graph->AxisChange();
			Graph->Invalidate();
		}

		void AddGraph(ZedGraph::ZedGraphControl^  Graph, int N, T& x, T& y, string& s)
		{
			GraphPane^ panel = Graph->GraphPane;
			panel->CurveList->Clear();
			PointPairList^ y_list = gcnew ZedGraph::PointPairList();

			for (int i = 0; i < N; i++)
				y_list->Add(x[i], y[i]);

			LineItem^ Curve = panel->AddCurve(Convert::ToString(&s), y_list, Color::Red, SymbolType::None);
			Graph->AxisChange();
			Graph->Invalidate();
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int N = Convert::ToDouble(textBox3->Text);
		Model T1(1, N);

		pushTab(dataGridView1, N + 1, T1.x, T1.u, T1.v, T1.delta);

		string s = "u(x)";
		AddGraph1(zedGraphControl1, N + 1, T1.x, T1.u, T1.v, s);

		s = "v(x)";
		AddGraph(zedGraphControl2, N + 1, T1.x, T1.v, s);

		s = "delta(x)";
		AddGraph(zedGraphControl3, N + 1, T1.x, T1.delta, s);

		label4->Text = "maxD = " + Convert::ToString(T1.maxD);
		label5->Text = "x(maxD) = " + Convert::ToString(T1.maxX);

	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int N = Convert::ToDouble(textBox1->Text);
		Model T1(2, N);

		pushTab(dataGridView2, N + 1, T1.x, T1.u, T1.v, T1.delta);

		string s = "u(x)";
		AddGraph1(zedGraphControl4, N + 1, T1.x, T1.u, T1.v, s);

		s = "v(x)";
		//AddGraph(zedGraphControl4, N, T1.x, T1.v, s);
		AddGraph(zedGraphControl5, N + 1, T1.x, T1.v, s);

		s = "delta(x)";
		AddGraph(zedGraphControl6, N, T1.x, T1.delta, s);

		label10->Text = "maxD = " + Convert::ToString(T1.maxD);
		label8->Text = "x(maxD) = " + Convert::ToString(T1.maxX);
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int N = Convert::ToDouble(textBox2->Text);
		Model T1(3, N);
		Model T2(3, 2 * N);
		for (int i = 0; i < N + 1; i++)
		{
			T1.u[i] = T2.v[2 * i];
			T1.delta[i] = abs(T1.v[i] -T1.u[i]);
		}
		T1.max();

		pushTab(dataGridView3, N + 1, T1.x, T1.u, T1.v, T1.delta);

		string s = "v2(x)";
		AddGraph1(zedGraphControl7, N + 1, T1.x, T1.u, T1.v, s);

		s = "v(x)";
		//AddGraph(zedGraphControl4, N, T1.x, T1.v, s);
		AddGraph(zedGraphControl8, N + 1, T1.x, T1.v, s);

		s = "delta(x)";
		AddGraph(zedGraphControl9, N + 1, T1.x, T1.delta, s);

		label19->Text = "maxD = " + Convert::ToString(T1.maxD);
		label17->Text = "x(maxD) = " + Convert::ToString(T1.maxX);
	}
};
}
