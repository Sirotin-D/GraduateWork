#pragma once

namespace GraduateWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ProgressForm
	/// </summary>
	public ref class ProgressForm : public System::Windows::Forms::Form
	{
	public:
		ProgressForm(void)
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
		~ProgressForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ProgressBar^ progressBar1;
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
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(60, 30);
			this->progressBar1->Maximum = 20000;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(450, 25);
			this->progressBar1->Step = 5;
			this->progressBar1->TabIndex = 0;
			// 
			// ProgressForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 95);
			this->ControlBox = false;
			this->Controls->Add(this->progressBar1);
			this->Name = L"ProgressForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Прогресс алгоритма";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
