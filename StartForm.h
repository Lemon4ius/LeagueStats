#pragma once
#include "Spravka.h"
#include "Selector.h"
#include "Hero.h"
#include "HeroInfoForm.h"


namespace LegueStats {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;

	/// <summary>
	/// —водка дл€ StartForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(System::Collections::Generic::List<Hero^>^ heroes, System::Collections::Generic::List<Item^>^ items)
		{
			this->heroes = heroes;
			this->items = items;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ stratBtn;

	private: System::Windows::Forms::Button^ reference;





	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		System::Collections::Generic::List<Hero^>^ heroes;
		System::Collections::Generic::List<Item^>^ items;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->stratBtn = (gcnew System::Windows::Forms::Button());
			this->reference = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// stratBtn
			// 
			this->stratBtn->Location = System::Drawing::Point(167, 75);
			this->stratBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stratBtn->Name = L"stratBtn";
			this->stratBtn->Size = System::Drawing::Size(201, 56);
			this->stratBtn->TabIndex = 0;
			this->stratBtn->Text = L"Start";
			this->stratBtn->UseVisualStyleBackColor = true;
			this->stratBtn->Click += gcnew System::EventHandler(this, &StartForm::stratBtn_Click);
			// 
			// reference
			// 
			this->reference->Location = System::Drawing::Point(167, 190);
			this->reference->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->reference->Name = L"reference";
			this->reference->Size = System::Drawing::Size(201, 56);
			this->reference->TabIndex = 2;
			this->reference->Text = L"—правка";
			this->reference->UseVisualStyleBackColor = true;
			this->reference->Click += gcnew System::EventHandler(this, &StartForm::reference_Click);
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(529, 325);
			this->Controls->Add(this->reference);
			this->Controls->Add(this->stratBtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"StartForm";
			this->Text = L"StartForm";
			this->Load += gcnew System::EventHandler(this, &StartForm::StartForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void stratBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Selector(heroes, items).ShowDialog();
	}	
	private: System::Void player_PlayStateChange(System::Object^ sender, AxWMPLib::_WMPOCXEvents_PlayStateChangeEvent^ e) {
		this->reference->Text = Convert::ToString(e->newState);
	}
	private: System::Void StartForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	}
private: System::Void reference_Click(System::Object^ sender, System::EventArgs^ e) {
	Me h;
	h.ShowDialog();

}
};
}
