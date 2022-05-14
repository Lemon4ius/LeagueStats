#pragma 
#include <iostream>
#include <fstream>

#include "Hero.h"
#include "ColorPalette.h"

#include "HeroInfoForm.h"

namespace LegueStats {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Selector
	/// </summary>
	public ref class Selector : public System::Windows::Forms::Form
	{
	public:
		Selector(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Selector()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ heroesSelectorContainer;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->heroesSelectorContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// heroesSelectorContainer
			// 
			this->heroesSelectorContainer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->heroesSelectorContainer->Location = System::Drawing::Point(0, 0);
			this->heroesSelectorContainer->Name = L"heroesSelectorContainer";
			this->heroesSelectorContainer->Size = System::Drawing::Size(858, 451);
			this->heroesSelectorContainer->TabIndex = 0;
			this->heroesSelectorContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Selector::heroesSelectorContainer_Paint);
			// 
			// Selector
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 448);
			this->Controls->Add(this->heroesSelectorContainer);
			this->Name = L"Selector";
			this->Text = L"Selector";
			this->Load += gcnew System::EventHandler(this, &Selector::Selector_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void onHeroPictureBoxClick(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pb = (PictureBox^) sender;
		
		Hero* hero;

		for (int i = 0; i < heroes.size(); i++){
			if (heroes[i].getTitle() == pb->Name) {
				hero = &heroes[i];
				break;
			}
		}

		auto heroInfoForm = gcnew HeroInfoForm(hero);
		heroInfoForm->ShowDialog();
	}

	private: System::Void onHeroPictureBoxEnter(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pb = (PictureBox^)sender;
		pb->Scale(1.2);
	}
	private: System::Void onHeroPictureBoxLeave(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pb = (PictureBox^)sender;
		pb->Scale(1/1.2);
	}

	private: System::Void Selector_Load(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = primaryBackgroundColor.get();
		this->heroesSelectorContainer->BackColor = primaryBackgroundColor.get();

		for (int i = 0; i < heroes.size(); i++) {
			PictureBox^ pb = gcnew PictureBox();
			pb->Image = Image::FromFile(heroes[i].getPicuresDir() + "/preview.jpg");
			pb->Name = heroes[i].getTitle();
			pb->Size = System::Drawing::Size(250, 282);
			pb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			pb->Click += gcnew System::EventHandler(this, &Selector::onHeroPictureBoxClick);
			pb->MouseEnter += gcnew System::EventHandler(this, &Selector::onHeroPictureBoxEnter);
			pb->MouseLeave += gcnew System::EventHandler(this, &Selector::onHeroPictureBoxLeave);

			this->heroesSelectorContainer->Controls->Add(pb);
		}
	}
	private: System::Void heroesSelectorContainer_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}
