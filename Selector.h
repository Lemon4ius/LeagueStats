#pragma 
#include <iostream>
#include <fstream>

#include "HeroInfoForm.h"

#include "Hero.h"
#include "Item.h"
#include "ColorPalette.h"


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
		Selector(System::Collections::Generic::List<Hero^>^ heroes, System::Collections::Generic::List<Item^>^ items)
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
		System::Collections::Generic::List<Hero^>^ heroes;
		System::Collections::Generic::List<Item^>^ items;

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
			this->heroesSelectorContainer->AutoScroll = true;
			this->heroesSelectorContainer->Location = System::Drawing::Point(0, 0);
			this->heroesSelectorContainer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->heroesSelectorContainer->Name = L"heroesSelectorContainer";
			this->heroesSelectorContainer->Size = System::Drawing::Size(896, 1035);
			this->heroesSelectorContainer->TabIndex = 0;
			
			// 
			// Selector
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(896, 1033);
			this->Controls->Add(this->heroesSelectorContainer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"Selector";
			this->Text = L"Selector";
			this->Load += gcnew System::EventHandler(this, &Selector::Selector_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void onHeroPictureBoxClick(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pb = (PictureBox^) sender;
		
		Hero^ hero;

		for each (auto hero_ in heroes)
		{
			if (hero_->title == pb->Name) {
				hero = hero_;
				break;
			}
		}

		auto heroInfoForm = gcnew HeroInfoForm(hero, items);
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

		for each (auto hero in heroes)
		{
			PictureBox^ pb = gcnew PictureBox();
			pb->Image = Image::FromFile("assets/pictures/heroes/" + hero->title + "/preview.png");
			pb->Name = hero->title;
			pb->Size = System::Drawing::Size(150, 150);
			pb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			pb->Click += gcnew System::EventHandler(this, &Selector::onHeroPictureBoxClick);
			pb->MouseEnter += gcnew System::EventHandler(this, &Selector::onHeroPictureBoxEnter);
			pb->MouseLeave += gcnew System::EventHandler(this, &Selector::onHeroPictureBoxLeave);

			this->heroesSelectorContainer->Controls->Add(pb);
		}
	}
	
	};
}
