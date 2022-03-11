#pragma once
#include "ParallelAlgorithm.h"
#include <string>
namespace GraduateWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-5, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1329, 918);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1321, 892);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Двухмерный случай";
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox4->Controls->Add(this->dataGridView2);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold));
			this->groupBox4->Location = System::Drawing::Point(460, 590);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(860, 300);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Численное решение параллельного алгоритма";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->dataGridView2->Location = System::Drawing::Point(13, 21);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(840, 270);
			this->dataGridView2->TabIndex = 1;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::RosyBrown;
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Bold));
			this->groupBox3->Location = System::Drawing::Point(460, 280);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(860, 300);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Численное решение последовательного алгоритма";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::RosyBrown;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->dataGridView1->Location = System::Drawing::Point(13, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(840, 270);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkGray;
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Location = System::Drawing::Point(460, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(860, 270);
			this->panel2->TabIndex = 2;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->groupBox2->Location = System::Drawing::Point(440, 10);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(410, 245);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Результаты работы параллельного алгоритма";
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::Gainsboro;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label25->Location = System::Drawing::Point(198, 204);
			this->label25->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(193, 24);
			this->label25->TabIndex = 26;
			this->label25->Text = L"     ";
			this->label25->Visible = false;
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::Gainsboro;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label24->Location = System::Drawing::Point(198, 125);
			this->label24->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(193, 24);
			this->label24->TabIndex = 25;
			this->label24->Text = L"     ";
			this->label24->Visible = false;
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::Gainsboro;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label23->Location = System::Drawing::Point(198, 93);
			this->label23->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(193, 24);
			this->label23->TabIndex = 24;
			this->label23->Text = L"     ";
			this->label23->Visible = false;
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::Gainsboro;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label22->Location = System::Drawing::Point(198, 62);
			this->label22->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(193, 24);
			this->label22->TabIndex = 23;
			this->label22->Text = L"     ";
			this->label22->Visible = false;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::Gainsboro;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label21->Location = System::Drawing::Point(198, 27);
			this->label21->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(193, 24);
			this->label21->TabIndex = 22;
			this->label21->Text = L"     ";
			this->label21->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(6, 200);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(186, 30);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Время выполнения\r\nитерационного процесса, с";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->label12->Location = System::Drawing::Point(6, 119);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(135, 30);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Невязка СЛАУ\r\n(норма Чебышева)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->label13->Location = System::Drawing::Point(6, 94);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(145, 15);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Общая погрешность";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->label14->Location = System::Drawing::Point(6, 63);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(157, 15);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Достигнутая точность";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->label15->Location = System::Drawing::Point(6, 35);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(117, 15);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Число итераций";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::RosyBrown;
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->groupBox1->Location = System::Drawing::Point(10, 10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(410, 245);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Результаты работы последовательного алгоритма";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::Gainsboro;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label20->Location = System::Drawing::Point(198, 204);
			this->label20->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(193, 24);
			this->label20->TabIndex = 25;
			this->label20->Text = L"     ";
			this->label20->Visible = false;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::Gainsboro;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label19->Location = System::Drawing::Point(198, 125);
			this->label19->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(193, 24);
			this->label19->TabIndex = 24;
			this->label19->Text = L"     ";
			this->label19->Visible = false;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::Gainsboro;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label18->Location = System::Drawing::Point(198, 93);
			this->label18->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(193, 24);
			this->label18->TabIndex = 23;
			this->label18->Text = L"     ";
			this->label18->Visible = false;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::Gainsboro;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label17->Location = System::Drawing::Point(198, 62);
			this->label17->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(193, 24);
			this->label17->TabIndex = 22;
			this->label17->Text = L"     ";
			this->label17->Visible = false;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::Gainsboro;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label16->Location = System::Drawing::Point(198, 27);
			this->label16->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(193, 24);
			this->label16->TabIndex = 21;
			this->label16->Text = L"     ";
			this->label16->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(6, 200);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(186, 30);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Время выполнения\r\nитерационного процесса, с";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(6, 119);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(135, 30);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Невязка СЛАУ\r\n(норма Чебышева)\r\n";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(6, 94);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(145, 15);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Общая погрешность";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(6, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 15);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Достигнутая точность";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(6, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 15);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Число итераций";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightGray;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->groupBox6);
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->numericUpDown5);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->numericUpDown4);
			this->panel1->Controls->Add(this->numericUpDown3);
			this->panel1->Controls->Add(this->numericUpDown2);
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->panel1->Size = System::Drawing::Size(448, 890);
			this->panel1->TabIndex = 1;
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox6->Controls->Add(this->button8);
			this->groupBox6->Controls->Add(this->button7);
			this->groupBox6->Controls->Add(this->button6);
			this->groupBox6->Controls->Add(this->button2);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Georgia", 8.5F, System::Drawing::FontStyle::Bold));
			this->groupBox6->Location = System::Drawing::Point(224, 380);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(210, 240);
			this->groupBox6->TabIndex = 13;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Параллельный алгоритм";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::Menu;
			this->button8->Enabled = false;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->button8->Location = System::Drawing::Point(15, 190);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(154, 27);
			this->button8->TabIndex = 14;
			this->button8->Text = L"Показать итоги*";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Menu;
			this->button7->Enabled = false;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(15, 140);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(154, 27);
			this->button7->TabIndex = 13;
			this->button7->Text = L"Показать график";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Menu;
			this->button6->Enabled = false;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(15, 90);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(154, 27);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Показать итоги";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(15, 40);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 27);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Запустить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::RosyBrown;
			this->groupBox5->Controls->Add(this->button5);
			this->groupBox5->Controls->Add(this->button4);
			this->groupBox5->Controls->Add(this->button3);
			this->groupBox5->Controls->Add(this->button1);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Georgia", 8.5F, System::Drawing::FontStyle::Bold));
			this->groupBox5->Location = System::Drawing::Point(8, 380);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(210, 240);
			this->groupBox5->TabIndex = 12;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Последовательный алгроитм";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Menu;
			this->button5->Enabled = false;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(15, 190);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(154, 27);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Показать итоги*";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Menu;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(15, 140);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(154, 27);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Показать график";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Menu;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(15, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 27);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Показать итоги";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::RosyBrown;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(15, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 27);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Запустить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(8, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(405, 160);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F));
			this->numericUpDown5->Location = System::Drawing::Point(296, 337);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(102, 22);
			this->numericUpDown5->TabIndex = 9;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Georgia", 9.5F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(5, 324);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(247, 32);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Число потоков \r\n(для параллельного алгоритма)\r\n";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->DecimalPlaces = 8;
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F));
			this->numericUpDown4->Location = System::Drawing::Point(249, 293);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 327680 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 983040 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(149, 22);
			this->numericUpDown4->TabIndex = 7;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 524288 });
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F));
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericUpDown3->Location = System::Drawing::Point(249, 251);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30000, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(149, 22);
			this->numericUpDown3->TabIndex = 6;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F));
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown2->Location = System::Drawing::Point(249, 212);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(149, 22);
			this->numericUpDown2->TabIndex = 5;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F));
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(249, 181);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(149, 22);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Georgia", 9.5F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(5, 281);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Критерий выхода\r\nметода по точности, eps";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 9.5F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(5, 239);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Максимальное число \r\n итераций метода, Nmax";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 9.5F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(5, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(190, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Разбиение сетки по y, m";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 9.5F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(5, 181);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Разбиение сетки по x, n";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1321, 892);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Трёхмерный случай";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->label26->Location = System::Drawing::Point(8, 159);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(162, 30);
			this->label26->TabIndex = 26;
			this->label26->Text = L"Погрешность решения\r\nСЛАУ";
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::Color::Gainsboro;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label27->Location = System::Drawing::Point(198, 159);
			this->label27->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(193, 24);
			this->label27->TabIndex = 27;
			this->label27->Text = L"     ";
			this->label27->Visible = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Bold));
			this->label28->Location = System::Drawing::Point(8, 159);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(162, 30);
			this->label28->TabIndex = 27;
			this->label28->Text = L"Погрешность решения\r\nСЛАУ";
			// 
			// label29
			// 
			this->label29->BackColor = System::Drawing::Color::Gainsboro;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label29->Location = System::Drawing::Point(198, 159);
			this->label29->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(193, 24);
			this->label29->TabIndex = 28;
			this->label29->Text = L"     ";
			this->label29->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1320, 916);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Задача Дирихле для уравнения Пуассона МСГ, последовательная и параллельная реализ"
				L"ация";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

	private: void DisplaySerialAlgorithmResultOnMessageBox(int stepcount, double accuracy, double discMax, double error, double serialtime) {
		String^ message = "Последовательный алгоритм завершил работу\n\n";
		message += "Для решения тестовой задачи использована сетка с числом\n\n";
		message += "разбиений по x: n = " + numericUpDown1->Text + " и числом разбиений по y: m = " + numericUpDown2->Text + "\n\n";
		message += "Критерий выхода из метода по точности: eps = " + numericUpDown4->Text + "\n\n";
		message += "На решение было затрачено: N = " + stepcount + " итерации\n\n";
		message += "Достигнутая точность метода =  " + accuracy + "\n\n";
		message += "Чебышевская норма невязки СЛАУ: ||r|| = " + discMax + "\n\n";
		message += "Общая погрешность задачи: " + error + "\n\n";
		message += "Общее время выполнения итерационного процесса: " + serialtime + " секунд\n\n";
		MessageBox::Show(message, "Результаты решения тестовой задачи", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: void DisplayParallelAlgorithmResultOnMessageBox(int stepcount, double accuracy, double discMax, double error, double paralleltime) {
		String^ message;
		message = "Параллельный алгоритм завершил работу\n\n";
		message += "Для решения тестовой задачи использована сетка с числом\n\n";
		message += "разбиений по x: n = " + numericUpDown1->Text + " и числом разбиений по y: m = " + numericUpDown2->Text + "\n\n";
		message += "Критерий выхода из метода по точности: eps = " + numericUpDown4->Text + "\n\n";
		message += "На решение было затрачено: N = " + stepcount + " итерации\n\n";
		message += "Достигнутая точность метода = " + accuracy + "\n\n";
		message += "Чебышевская норма невязки СЛАУ: ||r|| = " + discMax + "\n\n";
		message += "Общая погрешность задачи: " + error + "\n\n";
		message += "Общее время выполнения итерационного процесса: " + paralleltime + " секунд\n\n";
		MessageBox::Show(message, "Результаты решения тестовой задачи", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: double ModifiedSetPresision(double value, int presision) {
		value *= pow(10, presision + 1);

		return double(int(value)) / pow(10, presision + 1);
	}

	private: void CreateChartDataGridView(System::Windows::Forms::DataGridView^ dataGridView, matrix& V, size_t n, size_t m, int a, int c, double h, double k) {
		dataGridView->Rows->Clear();

		dataGridView->RowCount = m + 3;
		dataGridView->ColumnCount = n + 3;

		for (int i = n, col = 2; i >= 0; i--, col++) {
			dataGridView->Rows[0]->Cells[col]->Style->BackColor = Color::PaleVioletRed;
			dataGridView->Rows[1]->Cells[i + 2]->Style->BackColor = Color::PaleVioletRed;
			dataGridView->Rows[0]->Cells[col]->Value = Convert::ToString(n - i);
			dataGridView->Rows[1]->Cells[i + 2]->Value = floor((a + i * h) * 1000) / 1000;
		}

		for (int i = m, row = 2; i >= 0; i--, row++) {
			dataGridView->Rows[row]->Cells[0]->Style->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridView->Rows[row]->Cells[1]->Style->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridView->Rows[row]->Cells[0]->Value = i;
			dataGridView->Rows[row]->Cells[1]->Value = floor((c + i * k) * 1000) / 1000;
		}

		dataGridView->Rows[1]->Cells[0]->Value = Convert::ToString("j");
		dataGridView->Rows[0]->Cells[1]->Value = Convert::ToString("i");
		dataGridView->Rows[1]->Cells[1]->Value = Convert::ToString("Y / X");

		for (int i = m + 2, k = 0; i > 1; i--, k++) {
			for (int j = 2, p = 0; j < n + 3; j++, p++) {
				dataGridView->Rows[i]->Cells[j]->Style->BackColor = Color::LightGreen;
				dataGridView->Rows[i]->Cells[j]->Value = ceil(V[k][p] * 1000) / 1000;
			}
		}
	}

	private: void enableButtons(System::Windows::Forms::Button^ button1, System::Windows::Forms::Button^ button2, System::Windows::Forms::Button^ button3) {
		if (!button1->Enabled) {
			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	enableButtons(button3, button4, button5);

	size_t n = Convert::ToInt32(numericUpDown1->Text);
	size_t m = Convert::ToInt32(numericUpDown2->Text);

	int a = -1, b = 1, c = -1, d = 1;

	double h = (b - a) / (double)n;
	double k = (d - c) / (double)m;

	double param_x = -h * h;
	double param_y = -k * k;
	double A = -2 * (1 / param_x + 1 / param_y);

	matrix V, r, H;
	V.assign(m + 1, vector<double>(n + 1));
	r.assign(m + 1, vector<double>(n + 1));
	H.assign(m + 1, vector<double>(n + 1));

	SetBorders(V, h, k, a, c, n, m);


	double alpha, Ahh = 1;
	int step_count = 0;
	int max_step = Convert::ToInt32(numericUpDown3->Text);
	double eps = Convert::ToDouble(numericUpDown4->Text);
	double eps_curr = 0;
	double accuracy = 0;
	double v_old;
	double runtime = clock();
	do
	{
		accuracy = 0;
		r = calcDiscreapancy(r, V, param_x, param_y, A, a, b, c, d, n, m);

		alpha = calcAlpha(H, r, param_x, param_y, A, Ahh, n, m);

		for (int j = 1; j < m; j++) {
			for (int i = 1; i < n; i++) {
				v_old = V[j][i];
				V[j][i] = v_old + alpha * H[j][i];
				eps_curr = abs(V[j][i] - v_old);
				if (eps_curr > accuracy) {
					accuracy = eps_curr;
				}
			}
		}

		step_count++;
	} while ((accuracy > eps) && (step_count < max_step));
	runtime = (clock() - runtime) / CLOCKS_PER_SEC;

	r = calcDiscreapancy(r, V, param_x, param_y, A, a, b, c, d, n, m);

	double Disc_max = СhebyshevNorma(r);

	double error = calcError(V, h, k, a, c);


	double slaeAccuracySolution = getSLAEAccuracySolution(Disc_max, h, k, n, m);

	// Out 

	label16->Visible = true;
	label17->Visible = true;
	label18->Visible = true;
	label19->Visible = true;
	label20->Visible = true;
	label27->Visible = true;

	label16->Text = Convert::ToString(step_count);
	label17->Text = Convert::ToString(accuracy);
	label18->Text = Convert::ToString(error);
	label19->Text = Convert::ToString(Disc_max);
	label20->Text = Convert::ToString(runtime);
	label27->Text = Convert::ToString(slaeAccuracySolution);



	CreateChartDataGridView(dataGridView1, V, n, m, a, c, h, k);

	double v_new;
	ofstream file("out.txt");
	for (int j = 0; j < m + 1; j++) {
		for (int i = 0; i < n + 1; i++) {
			v_new = V[j][i];
			double p = a + i * h;
			double e = c + j * k;
			file << p << "\t" << e << "\t" << v_new << "\n";
		}
	}


	DisplaySerialAlgorithmResultOnMessageBox(step_count, accuracy, Disc_max, error, runtime);


}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	enableButtons(button6, button7, button8);

	size_t n = Convert::ToInt32(numericUpDown1->Text);
	size_t m = Convert::ToInt32(numericUpDown2->Text);


	int a = -1, b = 1, c = -1, d = 1;


	double h = (b - a) / (double)n;
	double k = (d - c) / (double)m;

	double param_x = -h * h;
	double param_y = -k * k;
	double A = -2 * (1 / param_x + 1 / param_y);

	matrix V, r, H;
	V.assign(m + 1, vector<double>(n + 1));
	r.assign(m + 1, vector<double>(n + 1));
	H.assign(m + 1, vector<double>(n + 1));


	SetBorders(V, h, k, a, c, n, m);


	double alpha, Ahh = 1;
	int step_count = 0;
	int max_step = Convert::ToInt32(numericUpDown3->Text);
	double eps = Convert::ToDouble(numericUpDown4->Text);
	double eps_curr = 0;
	double accuracy = 0;
	double v_old;
	size_t num_threads = Convert::ToInt32(numericUpDown5->Text);
	double parallelruntime = omp_get_wtime();
	do
	{
		accuracy = 0;
		r = parallelCalcDiscrepancy(r, V, param_x, param_y, A, a, b, c, d, n, m, num_threads);

		alpha = parallelCalcAlpha(H, r, param_x, param_y, A, Ahh, n, m, num_threads);

		for (int j = 1; j < m; j++) {
			for (int i = 1; i < n; i++) {
				v_old = V[j][i];
				V[j][i] = v_old + alpha * H[j][i];
				eps_curr = abs(V[j][i] - v_old);
				if (eps_curr > accuracy) {
					accuracy = eps_curr;
				}
			}
		}

		step_count++;
	} while ((accuracy > eps) && (step_count < max_step));
	parallelruntime = omp_get_wtime() - parallelruntime;

	r = parallelCalcDiscrepancy(r, V, param_x, param_y, A, a, b, c, d, n, m, num_threads);

	double Disc_max = СhebyshevNorma(r);

	double error = calcError(V, h, k, a, c);

	double slaeAccuracySolution = getSLAEAccuracySolution(Disc_max, h, k, n, m);


	// Out 

	label21->Visible = true;
	label22->Visible = true;
	label23->Visible = true;
	label24->Visible = true;
	label25->Visible = true;
	label29->Visible = true;


	label21->Text = Convert::ToString(step_count);
	label22->Text = Convert::ToString(accuracy);
	label23->Text = Convert::ToString(error);
	label24->Text = Convert::ToString(Disc_max);
	label25->Text = Convert::ToString(parallelruntime);
	label29->Text = Convert::ToString(slaeAccuracySolution);

	CreateChartDataGridView(dataGridView2, V, n, m, a, c, h, k);

	double v_new;
	ofstream outfile("out_parallel.txt");
	for (int j = 0; j < m + 1; j++) {
		for (int i = 0; i < n + 1; i++) {
			v_new = V[j][i];
			double p = a + i * h;
			double e = c + j * k;
			outfile << p << "\t" << e << "\t" << v_new << "\n";
		}
	}
		
	DisplayParallelAlgorithmResultOnMessageBox(step_count, accuracy, Disc_max, error, parallelruntime);
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	DisplaySerialAlgorithmResultOnMessageBox(Convert::ToDouble(label16->Text), Convert::ToDouble(label17->Text), Convert::ToDouble(label19->Text), Convert::ToDouble(label18->Text), Convert::ToDouble(label20->Text));
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	system("python show_plot.py");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	DisplaySerialAlgorithmResultOnMessageBox(Convert::ToDouble(label16->Text), Convert::ToDouble(label17->Text), Convert::ToDouble(label19->Text), Convert::ToDouble(label18->Text), Convert::ToDouble(label20->Text));
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	DisplayParallelAlgorithmResultOnMessageBox(Convert::ToDouble(label21->Text), Convert::ToDouble(label22->Text), Convert::ToDouble(label24->Text), Convert::ToDouble(label23->Text), Convert::ToDouble(label25->Text));
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	system("python show_parallelplot.py");
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	DisplayParallelAlgorithmResultOnMessageBox(Convert::ToDouble(label21->Text), Convert::ToDouble(label22->Text), Convert::ToDouble(label24->Text), Convert::ToDouble(label23->Text), Convert::ToDouble(label25->Text));
}
};

};
