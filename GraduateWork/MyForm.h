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

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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





	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel2;











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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			resources->ApplyResources(this->tabControl1, L"tabControl1");
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::Control;
			this->tabPage1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->panel2);
			resources->ApplyResources(this->tabPage1, L"tabPage1");
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox4->Controls->Add(this->dataGridView2);
			resources->ApplyResources(this->groupBox4, L"groupBox4");
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->TabStop = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->dataGridView2, L"dataGridView2");
			this->dataGridView2->Name = L"dataGridView2";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::RosyBrown;
			this->groupBox3->Controls->Add(this->dataGridView1);
			resources->ApplyResources(this->groupBox3, L"groupBox3");
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightGray;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->numericUpDown5);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->numericUpDown4);
			this->panel1->Controls->Add(this->numericUpDown3);
			this->panel1->Controls->Add(this->numericUpDown2);
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::RosyBrown;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// numericUpDown5
			// 
			resources->ApplyResources(this->numericUpDown5, L"numericUpDown5");
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->DecimalPlaces = 8;
			resources->ApplyResources(this->numericUpDown4, L"numericUpDown4");
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 327680 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 983040 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 524288 });
			// 
			// numericUpDown3
			// 
			resources->ApplyResources(this->numericUpDown3, L"numericUpDown3");
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30000, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			resources->ApplyResources(this->numericUpDown2, L"numericUpDown2");
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDown1
			// 
			resources->ApplyResources(this->numericUpDown1, L"numericUpDown1");
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkGray;
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Controls->Add(this->groupBox1);
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
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
			resources->ApplyResources(this->groupBox2, L"groupBox2");
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->TabStop = false;
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::Color::LightGray;
			resources->ApplyResources(this->label25, L"label25");
			this->label25->Name = L"label25";
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::Color::LightGray;
			resources->ApplyResources(this->label24, L"label24");
			this->label24->Name = L"label24";
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::Color::LightGray;
			resources->ApplyResources(this->label23, L"label23");
			this->label23->Name = L"label23";
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::Color::LightGray;
			resources->ApplyResources(this->label22, L"label22");
			this->label22->Name = L"label22";
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::Color::LightGray;
			resources->ApplyResources(this->label21, L"label21");
			this->label21->Name = L"label21";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->Name = L"label11";
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->Name = L"label12";
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->Name = L"label13";
			// 
			// label14
			// 
			resources->ApplyResources(this->label14, L"label14");
			this->label14->Name = L"label14";
			// 
			// label15
			// 
			resources->ApplyResources(this->label15, L"label15");
			this->label15->Name = L"label15";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::RosyBrown;
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
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::LightGray;
			resources->ApplyResources(this->label20, L"label20");
			this->label20->Name = L"label20";
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::LightGray;
			resources->ApplyResources(this->label19, L"label19");
			this->label19->Name = L"label19";
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::LightGray;
			resources->ApplyResources(this->label18, L"label18");
			this->label18->Name = L"label18";
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::LightGray;
			resources->ApplyResources(this->label17, L"label17");
			this->label17->Name = L"label17";
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::LightGray;
			resources->ApplyResources(this->label16, L"label16");
			this->label16->Name = L"label16";
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->Name = L"label10";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// tabPage2
			// 
			resources->ApplyResources(this->tabPage2, L"tabPage2");
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			resources->ApplyResources(this, L"$this");
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->tabControl1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	//X and Y Dimension 
	size_t n = Convert::ToInt32(numericUpDown1->Text);
	size_t m = Convert::ToInt32(numericUpDown2->Text);

	// Borders
	int a = -1, b = 1, c = -1, d = 1;


	double h = (b - a) / (double)n;
	double k = (d - c) / (double)m;

	double param_x = -h * h;
	double param_y = -k * k;
	double A = -2 * (1 / param_x + 1 / param_y);

	matrix V, r, H;
	V.assign(m + 1, vector<double>(n + 1));
	r.assign(m, vector<double>(n));
	H.assign(m, vector<double>(n));

	// filling borders:
	for (int i = 0; i < m + 1; i++) {
		V[i][0] = mu1(c + i * k);
	}

	for (int i = 0; i < m + 1; i++) {
		V[i][n] = mu2(c + i * k);
	}

	for (int i = 0; i < n + 1; i++) {
		V[0][i] = mu3(a + i * h);
	}

	for (int i = 0; i < n + 1; i++) {
		V[m][i] = mu4(a + i * h);
	}

	
	//iteration process:
	double alpha, Ahh = 1;
	int step_count = 0;
	int max_step = Convert::ToInt32(numericUpDown3->Text);;
	double eps = Convert::ToDouble(numericUpDown4->Text);;
	double eps_curr = 0;
	double accuracy = 0;
	double v_old;
	double runtime = clock();
	do
	{
		accuracy = 0;
		r = calcDiscreapancy(r, V, param_x, param_y, A, a, b, c, d, n, m);

		alpha = calcAlpha(H, r, param_x, param_y, A, Ahh, n, m);

		for (int i = 1; i < m; i++) {
			for (int j = 1; j < n; j++) {
				v_old = V[i][j];
				V[i][j] = v_old + alpha * H[i - 1][j - 1];
				eps_curr = abs(V[i][j] - v_old);
				if (eps_curr > accuracy) {
					accuracy = eps_curr;
				}
			}
		}

		step_count++;
	} while ((accuracy > eps) && (step_count < max_step));
	runtime = (clock() - runtime) / CLOCKS_PER_SEC;

	// calc final discreapancy
	r = calcDiscreapancy(r, V, param_x, param_y, A, a, b, c, d, n, m);

	double Disc_max = 0;
	for (int i = 0; i < r.size(); i++) {
		for (int j = 0; j < r[0].size(); j++) {
			if (r[i][j] > Disc_max) {
				Disc_max = r[i][j];
			}
		}
	}

	double error = calcError(V, h, k, a, c);

	// Out 

	label16->Visible = true;
	label17->Visible = true;
	label18->Visible = true;
	label19->Visible = true;
	label20->Visible = true;

	label16->Text = Convert::ToString(step_count);
	label17->Text = Convert::ToString(accuracy);
	label18->Text = Convert::ToString(error);
	label19->Text = Convert::ToString(Disc_max);
	label20->Text = Convert::ToString(runtime);



	dataGridView1->Rows->Clear();
	/*
	dataGridView1->ColumnCount = n + 1;
	dataGridView1->RowHeadersWidth = 70;
	dataGridView1->TopLeftHeaderCell->Value = "       Y\\X       ";
	for (int r = 0; r < m + 1; r++) {

		DataGridViewRow^ row = gcnew DataGridViewRow();
		//row->HeaderCell->Value = c + r * (d - c) / m;
		 row->HeaderCell->Value = 1;
		//row->CreateCells(this->dataGridView1);

		for (int c = 0; c < n + 1; c++) {
			DataGridViewCell^ cel = gcnew DataGridViewTextBoxCell();
			cel->Value = ceil(V[c][r]*1000)/1000;
			row->Cells->Add(cel);
//			dataGridView1->Columns[c]->Name = gcnew String(to_string(a + r * (b - a) / n).c_str());
			dataGridView1->Columns[c]->Name = gcnew String(to_string(a + r * h).c_str());
		}

		this->dataGridView1->Rows->Add(row);
	}
*/
	
	dataGridView1->RowCount = m + 2;
	dataGridView1->ColumnCount = n + 3;
	dataGridView1->RowHeadersVisible = false;
	for (int i = n, col = 2; i >= 0; i--, col++) {
		dataGridView1->Columns[col]->HeaderText = Convert::ToString(n - i);
		dataGridView1->Rows[0]->Cells[i + 2]->Value = ceil((a+ i*h) * 1000) / 1000;
	}

	for (int i = m, row = 1; i >= 0; i--, row++) {
		dataGridView1->Rows[row]->Cells[0]->Value = i;
		dataGridView1->Rows[row]->Cells[1]->Value = ceil((c+i*k) * 1000) / 1000;
	}

	dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString("j");
	dataGridView1->Columns[1]->HeaderText = Convert::ToString("i");
	dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString("Y / X");

	for (int i = m + 1, k = 0; i > 0; i--, k++) {
		for (int j = 2, p = 0; j < n + 3; j++, p++) {
			dataGridView1->Rows[i]->Cells[j]->Value = ceil(V[k][p] * 1000) / 1000;
		}
	}
	}
	


/*
	// Сreate a chart
	double v_new;
	ofstream outfile("out.txt");
	for (int i = 0; i < n + 1; i++)
		for (int j = 0; j < n + 1; j++) {
			v_new = V[i][j];
			double p = a + i * h;
			double e = c + j * k;
			outfile << p << "\t" << e << "\t" << v_new << "\n";
		}
	system("python show_plot.py");
*/














private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	//X and Y Dimension 
	size_t n = Convert::ToInt32(numericUpDown1->Text);
	size_t m = Convert::ToInt32(numericUpDown2->Text);

	// Borders
	int a = -1, b = 1, c = -1, d = 1;


	double h = (b - a) / (double)n;
	double k = (d - c) / (double)m;

	double param_x = -h * h;
	double param_y = -k * k;
	double A = -2 * (1 / param_x + 1 / param_y);

	matrix V, r, H;
	V.assign(m + 1, vector<double>(n + 1));
	r.assign(m, vector<double>(n));
	H.assign(m, vector<double>(n));

	// filling borders:
	for (int i = 0; i < m + 1; i++) {
		V[i][0] = mu1(c + i * k);
	}

	for (int i = 0; i < m + 1; i++) {
		V[i][n] = mu2(c + i * k);
	}

	for (int i = 0; i < n + 1; i++) {
		V[0][i] = mu3(a + i * h);
	}

	for (int i = 0; i < n + 1; i++) {
		V[m][i] = mu4(a + i * h);
	}


	//iteration process:
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
		//		cout << "alpha[" << step_count << "] = " << alpha << endl;

		for (int i = 1; i < m; i++) {
			for (int j = 1; j < n; j++) {
				v_old = V[i][j];
				V[i][j] = v_old + alpha * H[i - 1][j - 1];
				eps_curr = abs(V[i][j] - v_old);
				if (eps_curr > accuracy) {
					accuracy = eps_curr;
				}
			}
		}

		step_count++;
	} while ((accuracy > eps) && (step_count < max_step));
	parallelruntime = omp_get_wtime() - parallelruntime;

	// calc final discreapancy
	r = parallelCalcDiscrepancy(r, V, param_x, param_y, A, a, b, c, d, n, m, num_threads);

	double Disc_max = 0;
	for (int i = 0; i < r.size(); i++) {
		for (int j = 0; j < r[0].size(); j++) {
			if (r[i][j] > Disc_max) {
				Disc_max = r[i][j];
			}
		}
	}

	double error = calcError(V, h, k, a, c);

	// Out 

	label21->Visible = true;
	label22->Visible = true;
	label23->Visible = true;
	label24->Visible = true;
	label25->Visible = true;

	label21->Text = Convert::ToString(step_count);
	label22->Text = Convert::ToString(accuracy);
	label23->Text = Convert::ToString(error);
	label24->Text = Convert::ToString(Disc_max);
	label25->Text = Convert::ToString(parallelruntime);

	dataGridView2->Rows->Clear();
	dataGridView2->RowCount = m + 2;
	dataGridView2->ColumnCount = n + 3;
	dataGridView2->RowHeadersVisible = false;
	for (int i = n, col = 2; i >= 0; i--, col++) {
		dataGridView2->Columns[col]->HeaderText = Convert::ToString(n - i);
		dataGridView2->Rows[0]->Cells[i + 2]->Value = ceil((a + i * h) * 1000) / 1000;
	}

	for (int i = m, row = 1; i >= 0; i--, row++) {
		dataGridView2->Rows[row]->Cells[0]->Value = i;
		dataGridView2->Rows[row]->Cells[1]->Value = ceil((c + i * k) * 1000) / 1000;
	}

	dataGridView2->Rows[0]->Cells[0]->Value = Convert::ToString("j");
	dataGridView2->Columns[1]->HeaderText = Convert::ToString("i");
	dataGridView2->Rows[0]->Cells[1]->Value = Convert::ToString("Y / X");

	for (int i = m + 1, k = 0; i > 0; i--, k++) {
		for (int j = 2, p = 0; j < n + 3; j++, p++) {
			dataGridView2->Rows[i]->Cells[j]->Value = ceil(V[k][p] * 1000) / 1000;
		}
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};

};
