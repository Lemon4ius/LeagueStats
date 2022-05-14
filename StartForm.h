#pragma once
#include "Selector.h"

namespace LegueStats {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StartForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
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
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ stratBtn;
	private: System::Windows::Forms::Button^ calculator;
	private: System::Windows::Forms::Button^ reference;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;

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
			this->stratBtn = (gcnew System::Windows::Forms::Button());
			this->calculator = (gcnew System::Windows::Forms::Button());
			this->reference = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// stratBtn
			// 
			this->stratBtn->Location = System::Drawing::Point(104, 218);
			this->stratBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stratBtn->Name = L"stratBtn";
			this->stratBtn->Size = System::Drawing::Size(75, 23);
			this->stratBtn->TabIndex = 0;
			this->stratBtn->Text = L"Start";
			this->stratBtn->UseVisualStyleBackColor = true;
			this->stratBtn->Click += gcnew System::EventHandler(this, &StartForm::stratBtn_Click);
			// 
			// calculator
			// 
			this->calculator->Location = System::Drawing::Point(65, 57);
			this->calculator->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->calculator->Name = L"calculator";
			this->calculator->Size = System::Drawing::Size(155, 47);
			this->calculator->TabIndex = 1;
			this->calculator->Text = L"Калькулятор ";
			this->calculator->UseVisualStyleBackColor = true;
			this->calculator->Click += gcnew System::EventHandler(this, &StartForm::button1_Click);
			// 
			// reference
			// 
			this->reference->Location = System::Drawing::Point(65, 126);
			this->reference->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->reference->Name = L"reference";
			this->reference->Size = System::Drawing::Size(155, 48);
			this->reference->TabIndex = 2;
			this->reference->Text = L"Справка";
			this->reference->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"awad", L"awd" });
			this->comboBox1->Location = System::Drawing::Point(0, 0);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StartForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(189, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &StartForm::label1_Click);
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 325);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->reference);
			this->Controls->Add(this->calculator);
			this->Controls->Add(this->stratBtn);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"StartForm";
			this->Text = L"StartForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void stratBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Selector().ShowDialog();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == 0) {
			int b=100;
			label1->Text = b.ToString();


		}
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
