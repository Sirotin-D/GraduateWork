#pragma once

namespace GraduateWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ResultMessageBox
	/// </summary>
	public ref class ResultMessageBox : public System::Windows::Forms::Form
	{
	public:
		ResultMessageBox(void)
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
		~ResultMessageBox()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	public:
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ResultMessageBox::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 9.5F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(42, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(11, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L" ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(227, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ОК";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ResultMessageBox::button1_Click);
			// 
			// ResultMessageBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(551, 444);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ResultMessageBox";
			this->Text = L"Результаты работы алгоритма";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	};
}
