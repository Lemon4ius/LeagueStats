#pragma once
#include "Hero.h"
#include "Item.h"
#pragma comment(lib, "Urlmon.lib")
#include <windows.h>
#include <cstdio>

#include "ColorPalette.h"

namespace LegueStats {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ HeroInfoForm
	/// </summary>
	/// 
/// 
	public ref class HeroInfoForm : public System::Windows::Forms::Form
	{

	private:
		Hero^ hero;
	private: System::Windows::Forms::Label^ infolabel2;
	private: System::Windows::Forms::FlowLayoutPanel^ selectedItemContainer;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Info5;

	private: System::Windows::Forms::Label^ Info4;

	private: System::Windows::Forms::Label^ Info3;
	private: System::Windows::Forms::Label^ info6;




		   System::Collections::Generic::List<Item^>^ selectedItems = gcnew System::Collections::Generic::List<Item^>();

	public:
		HeroInfoForm(Hero^ hero, System::Collections::Generic::List<Item^>^ items)
		{
			this->hero = hero;
			this->items = items;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~HeroInfoForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ titleLabel;
	private: System::Windows::Forms::FlowLayoutPanel^ skillsImageContainer;

	private: System::Windows::Forms::RichTextBox^ descriptionText;
	private: System::Windows::Forms::Label^ Calculator;
	private: System::Windows::Forms::TextBox^ searchTextBox;

	private: System::Windows::Forms::Label^ searchLabel;
	private: System::Windows::Forms::FlowLayoutPanel^ itemsContainer;
	private: AxWMPLib::AxWindowsMediaPlayer^ headPlayer;






	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Label^ infoLabel;
		 
	


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HeroInfoForm::typeid));
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->skillsImageContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->descriptionText = (gcnew System::Windows::Forms::RichTextBox());
			this->Calculator = (gcnew System::Windows::Forms::Label());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchLabel = (gcnew System::Windows::Forms::Label());
			this->itemsContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->headPlayer = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->infoLabel = (gcnew System::Windows::Forms::Label());
			this->infolabel2 = (gcnew System::Windows::Forms::Label());
			this->selectedItemContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->info6 = (gcnew System::Windows::Forms::Label());
			this->Info5 = (gcnew System::Windows::Forms::Label());
			this->Info4 = (gcnew System::Windows::Forms::Label());
			this->Info3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->headPlayer))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// titleLabel
			// 
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Ink Free", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(12, 9);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(1076, 45);
			this->titleLabel->TabIndex = 1;
			this->titleLabel->Text = L"Title";
			this->titleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// skillsImageContainer
			// 
			this->skillsImageContainer->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->skillsImageContainer->BackColor = System::Drawing::Color::Gray;
			this->skillsImageContainer->Location = System::Drawing::Point(610, 157);
			this->skillsImageContainer->Name = L"skillsImageContainer";
			this->skillsImageContainer->Size = System::Drawing::Size(450, 275);
			this->skillsImageContainer->TabIndex = 2;
			// 
			// descriptionText
			// 
			this->descriptionText->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->descriptionText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->descriptionText->Location = System::Drawing::Point(-20, 517);
			this->descriptionText->Name = L"descriptionText";
			this->descriptionText->ReadOnly = true;
			this->descriptionText->Size = System::Drawing::Size(620, 178);
			this->descriptionText->TabIndex = 3;
			this->descriptionText->Text = L"";
			// 
			// Calculator
			// 
			this->Calculator->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Calculator->Font = (gcnew System::Drawing::Font(L"Ink Free", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Calculator->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Calculator->Location = System::Drawing::Point(919, 49);
			this->Calculator->Name = L"Calculator";
			this->Calculator->Size = System::Drawing::Size(420, 45);
			this->Calculator->TabIndex = 4;
			this->Calculator->Text = L"Calculator";
			this->Calculator->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// searchTextBox
			// 
			this->searchTextBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->searchTextBox->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold));
			this->searchTextBox->ForeColor = System::Drawing::Color::Black;
			this->searchTextBox->Location = System::Drawing::Point(1066, 157);
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(411, 32);
			this->searchTextBox->TabIndex = 5;
			// 
			// searchLabel
			// 
			this->searchLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->searchLabel->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->searchLabel->Location = System::Drawing::Point(1067, 133);
			this->searchLabel->Name = L"searchLabel";
			this->searchLabel->Size = System::Drawing::Size(410, 21);
			this->searchLabel->TabIndex = 6;
			this->searchLabel->Text = L"Search";
			this->searchLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// itemsContainer
			// 
			this->itemsContainer->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->itemsContainer->AutoScroll = true;
			this->itemsContainer->BackColor = System::Drawing::Color::Gray;
			this->itemsContainer->Location = System::Drawing::Point(1066, 195);
			this->itemsContainer->Name = L"itemsContainer";
			this->itemsContainer->Size = System::Drawing::Size(411, 568);
			this->itemsContainer->TabIndex = 3;
			// 
			// headPlayer
			// 
			this->headPlayer->Enabled = true;
			this->headPlayer->Location = System::Drawing::Point(-30, 157);
			this->headPlayer->Name = L"headPlayer";
			this->headPlayer->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"headPlayer.OcxState")));
			this->headPlayer->Size = System::Drawing::Size(508, 246);
			this->headPlayer->TabIndex = 7;
			// 
			// infoLabel
			// 
			this->infoLabel->AutoSize = true;
			this->infoLabel->Font = (gcnew System::Drawing::Font(L"Ink Free", 15, System::Drawing::FontStyle::Bold));
			this->infoLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->infoLabel->Location = System::Drawing::Point(12, 18);
			this->infoLabel->Name = L"infoLabel";
			this->infoLabel->Size = System::Drawing::Size(67, 31);
			this->infoLabel->TabIndex = 8;
			this->infoLabel->Text = L"Info";
			// 
			// infolabel2
			// 
			this->infolabel2->AutoSize = true;
			this->infolabel2->Font = (gcnew System::Drawing::Font(L"Ink Free", 15, System::Drawing::FontStyle::Bold));
			this->infolabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->infolabel2->Location = System::Drawing::Point(9, 64);
			this->infolabel2->Name = L"infolabel2";
			this->infolabel2->Size = System::Drawing::Size(85, 31);
			this->infolabel2->TabIndex = 9;
			this->infolabel2->Text = L"Info2";
			// 
			// selectedItemContainer
			// 
			this->selectedItemContainer->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->selectedItemContainer->AutoScroll = true;
			this->selectedItemContainer->BackColor = System::Drawing::Color::Gray;
			this->selectedItemContainer->Location = System::Drawing::Point(1483, 195);
			this->selectedItemContainer->Name = L"selectedItemContainer";
			this->selectedItemContainer->Size = System::Drawing::Size(134, 514);
			this->selectedItemContainer->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::IndianRed;
			this->panel1->Controls->Add(this->infoLabel);
			this->panel1->Controls->Add(this->info6);
			this->panel1->Controls->Add(this->Info5);
			this->panel1->Controls->Add(this->Info4);
			this->panel1->Controls->Add(this->Info3);
			this->panel1->Controls->Add(this->infolabel2);
			this->panel1->Location = System::Drawing::Point(641, 451);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(447, 312);
			this->panel1->TabIndex = 10;
			// 
			// info6
			// 
			this->info6->AutoSize = true;
			this->info6->Font = (gcnew System::Drawing::Font(L"Ink Free", 15, System::Drawing::FontStyle::Bold));
			this->info6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->info6->Location = System::Drawing::Point(11, 264);
			this->info6->Name = L"info6";
			this->info6->Size = System::Drawing::Size(83, 31);
			this->info6->TabIndex = 9;
			this->info6->Text = L"Info6";
			// 
			// Info5
			// 
			this->Info5->AutoSize = true;
			this->Info5->Font = (gcnew System::Drawing::Font(L"Ink Free", 15, System::Drawing::FontStyle::Bold));
			this->Info5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Info5->Location = System::Drawing::Point(12, 213);
			this->Info5->Name = L"Info5";
			this->Info5->Size = System::Drawing::Size(82, 31);
			this->Info5->TabIndex = 9;
			this->Info5->Text = L"Info5";
			// 
			// Info4
			// 
			this->Info4->AutoSize = true;
			this->Info4->Font = (gcnew System::Drawing::Font(L"Ink Free", 15, System::Drawing::FontStyle::Bold));
			this->Info4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Info4->Location = System::Drawing::Point(12, 161);
			this->Info4->Name = L"Info4";
			this->Info4->Size = System::Drawing::Size(85, 31);
			this->Info4->TabIndex = 9;
			this->Info4->Text = L"Info4";
			// 
			// Info3
			// 
			this->Info3->AutoSize = true;
			this->Info3->Font = (gcnew System::Drawing::Font(L"Ink Free", 15, System::Drawing::FontStyle::Bold));
			this->Info3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Info3->Location = System::Drawing::Point(11, 114);
			this->Info3->Name = L"Info3";
			this->Info3->Size = System::Drawing::Size(85, 31);
			this->Info3->TabIndex = 9;
			this->Info3->Text = L"Info3";
			// 
			// HeroInfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->ClientSize = System::Drawing::Size(1924, 1000);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->selectedItemContainer);
			this->Controls->Add(this->headPlayer);
			this->Controls->Add(this->itemsContainer);
			this->Controls->Add(this->searchLabel);
			this->Controls->Add(this->searchTextBox);
			this->Controls->Add(this->descriptionText);
			this->Controls->Add(this->skillsImageContainer);
			this->Controls->Add(this->titleLabel);
			this->Controls->Add(this->Calculator);
			this->Name = L"HeroInfoForm";
			this->Text = L"HeroInfoForm";
			this->Load += gcnew System::EventHandler(this, &HeroInfoForm::HeroInfoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->headPlayer))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void fillLabel() {
		this->infolabel2->Text = "NO";
		this->infoLabel->Text = "NO";
	}

	private: System::Collections::Generic::List<Item^>^ items;

	private: System::Void onItemPictureBoxClick(System::Object^ sender, System::EventArgs^ e) {
		if (this->selectedItems->Count >= this->hero->maxItems) return;

		auto pb = (PictureBox^)	sender;
		Item^ item;

		for each (auto item_ in items) if (pb->Name == item_->title) item = item_;

		this->selectedItems->Add(item);
			
		this->hero->armor += item->armor;
		this->hero->criticalDamage += item->criticalDamage;
		this->hero->damage += item->damage;
		this->hero->health += item->health;
		this->hero->mana += item->mana;
		this->hero->speed += item->speed;

		this->updateState();

		this->selectedItemContainer->Controls->Add(pb);
	}
	
	

	private: System::Void updateState() {
			 
		this->infoLabel->Text = "Health: " + Convert::ToString(hero->health);
		this->infolabel2->Text = "Damage: " + Convert::ToString(hero->damage);
		this->Info3->Text = "Critical Damage: " + Convert::ToString(hero->criticalDamage);
		this->Info4->Text = "Mana: " + Convert::ToString(hero->mana);
		this->Info5->Text = "Speed: " + Convert::ToString(hero->speed);
		this->info6->Text = "Armor: " + Convert::ToString(hero->armor);
	}
private: System::Void onSkillPictureBoxClick(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pb = (PictureBox^)sender;

		Skill^ skill;

		for each (auto skill_ in hero->skills)
		{
			if (skill_->title == pb->Name) {
				skill = skill_;
				break;
			}
		}

		if (this->headPlayer->URL == skill->videoUrl) {
			this->titleLabel->Text = hero->title;
			this->descriptionText->Text = hero->description;
			this->headPlayer->URL = "assets/pictures/heroes/" + hero->title + "/head.png";
		}
		else {
			this->headPlayer->URL = skill->videoUrl;
			this->descriptionText->Text = skill->description;
			this->titleLabel->Text = hero->title + " | " + skill->title;
		}
	}
	private: System::Void onSkillPictureBoxEnter(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pb = (PictureBox^)sender;
		pb->Scale(1.2);
	}
	private: System::Void onSkillPictureBoxLeave(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pb = (PictureBox^)sender;
		pb->Scale(1 / 1.2);
	}

	private: System::Void onSearchInput(System::Object^ sender, System::EventArgs^ e) {
		search(searchTextBox->Text);
	}

	private: System::Void search(System::String^ s) {
		this->itemsContainer->Controls->Clear();

		for each (Item^ item in items) {
			if (s != "" && !item -> title->Contains(s)) continue;

			PictureBox^ pb = gcnew PictureBox();
			pb->Image = Image::FromFile("assets/pictures/items/" + item->pictureName);
			pb->Name = item->title;
			pb->Size = System::Drawing::Size(75, 75);
			pb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			pb->MouseEnter += gcnew System::EventHandler(this, &HeroInfoForm::onSkillPictureBoxEnter);
			pb->MouseLeave += gcnew System::EventHandler(this, &HeroInfoForm::onSkillPictureBoxLeave);
			pb->Click += gcnew System::EventHandler(this, &HeroInfoForm::onItemPictureBoxClick);
			
			this->itemsContainer->Controls->Add(pb);
		}
	}


	private: System::Void HeroInfoForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->headPlayer->uiMode = "none";
		this->headPlayer->settings->setMode(L"loop", true);
		this->headPlayer->windowlessVideo = true;
		
		this->BackColor = primaryBackgroundColor.get();
		this->titleLabel->ForeColor = textColor.get();
		this->skillsImageContainer->BackColor = primaryBackgroundColor.get();
		this->descriptionText->BackColor = descriptionBackgroundColor.get();

		this->titleLabel->Text = hero->title;
		this->descriptionText->Text = hero->description;
		this->headPlayer->URL = "assets/pictures/heroes/" + hero->title + "/head.png";

		for each (Skill^ skill in hero->skills) {
			PictureBox^ pb = gcnew PictureBox();
			pb->Image = Image::FromFile("assets/pictures/heroes/" + hero->title + "/" + skill->pictureName);
			pb->Name = skill->title;
			pb->Size = System::Drawing::Size(100, 100);
			pb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			pb->Click += gcnew System::EventHandler(this, &HeroInfoForm::onSkillPictureBoxClick);
			pb->MouseEnter += gcnew System::EventHandler(this, &HeroInfoForm::onSkillPictureBoxEnter);
			pb->MouseLeave += gcnew System::EventHandler(this, &HeroInfoForm::onSkillPictureBoxLeave);
			

			this->skillsImageContainer->Controls->Add(pb);
		}

		searchTextBox->TextChanged += gcnew System::EventHandler(this, &HeroInfoForm::onSearchInput);
		search(L"");
	}
	private: System::Void headPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		this->titleLabel->Text = hero->title;
		this->descriptionText->Text = hero->description;
		this->headPlayer->URL = "assets/pictures/heroes/" + hero->title + "/title.jpg";

		if (this->headPlayer->URL->EndsWith("head.png")) this->headPlayer->URL = "assets/pictures/heroes/" + hero->title + "/title.jpg";
		else this->headPlayer->URL = "assets/pictures/heroes/" + hero->title + "/title.jpg";
		auto pb = (PictureBox^)sender;
		pb->MouseLeave += gcnew System::EventHandler(this, &HeroInfoForm::onItemPictureBoxClick);
	}

};
}
