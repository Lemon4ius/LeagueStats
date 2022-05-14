#pragma once
#include "Hero.h"

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
		Hero* hero;

	public:
		HeroInfoForm(Hero* hero)
		{
			this->hero = hero;
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
	private: System::Windows::Forms::PictureBox^ headPictureBox;
	protected:
	private: System::Windows::Forms::Label^ titleLabel;
	private: System::Windows::Forms::FlowLayoutPanel^ skillsImageContainer;

	private: System::Windows::Forms::RichTextBox^ descriptionText;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->headPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->skillsImageContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->descriptionText = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->headPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// headPictureBox
			// 
			this->headPictureBox->Location = System::Drawing::Point(12, 78);
			this->headPictureBox->Name = L"headPictureBox";
			this->headPictureBox->Size = System::Drawing::Size(626, 286);
			this->headPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->headPictureBox->TabIndex = 0;
			this->headPictureBox->TabStop = false;
			this->headPictureBox->Click += gcnew System::EventHandler(this, &HeroInfoForm::headPictureBox_Click);
			// 
			// titleLabel
			// 
			this->titleLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Ink Free", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(12, 9);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(1258, 45);
			this->titleLabel->TabIndex = 1;
			this->titleLabel->Text = L"Title";
			this->titleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->titleLabel->Click += gcnew System::EventHandler(this, &HeroInfoForm::titleLabel_Click);
			// 
			// skillsImageContainer
			// 
			this->skillsImageContainer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->skillsImageContainer->BackColor = System::Drawing::Color::Gray;
			this->skillsImageContainer->Location = System::Drawing::Point(638, 78);
			this->skillsImageContainer->Name = L"skillsImageContainer";
			this->skillsImageContainer->Size = System::Drawing::Size(632, 286);
			this->skillsImageContainer->TabIndex = 2;
			this->skillsImageContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &HeroInfoForm::skillsImageContainer_Paint);
			// 
			// descriptionText
			// 
			this->descriptionText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->descriptionText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->descriptionText->Location = System::Drawing::Point(12, 449);
			this->descriptionText->Name = L"descriptionText";
			this->descriptionText->ReadOnly = true;
			this->descriptionText->Size = System::Drawing::Size(1258, 174);
			this->descriptionText->TabIndex = 3;
			this->descriptionText->Text = L"";
			// 
			// HeroInfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->ClientSize = System::Drawing::Size(1282, 635);
			this->Controls->Add(this->descriptionText);
			this->Controls->Add(this->skillsImageContainer);
			this->Controls->Add(this->titleLabel);
			this->Controls->Add(this->headPictureBox);
			this->MinimumSize = System::Drawing::Size(750, 500);
			this->Name = L"HeroInfoForm";
			this->Text = L"HeroInfoForm";
			this->Load += gcnew System::EventHandler(this, &HeroInfoForm::HeroInfoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->headPictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void onSkillPictureBoxClick(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pb = (PictureBox^)sender;

		Skill* skill;

		for (int i = 0; i < hero->skills.size(); i++) {
			if (hero->skills[i].getTitle() == pb->Name) {
				skill = &hero->skills[i];
				break;
			}
		}

		this->descriptionText->Text = skill->getDescription();
		this->headPictureBox->Image = Image::FromFile(hero->getPicuresDir() + "/" + skill->getGifName());
		this->titleLabel->Text = hero->getTitle() + " | " + skill->getTitle();
	}
	private: System::Void onSkillPictureBoxEnter(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pb = (PictureBox^)sender;
		pb->Scale(1.2);
	}
	private: System::Void onSkillPictureBoxLeave(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pb = (PictureBox^)sender;
		pb->Scale(1 / 1.2);
	}

	private: System::Void HeroInfoForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = primaryBackgroundColor.get();
		this->titleLabel->ForeColor = textColor.get();
		this->skillsImageContainer->BackColor = primaryBackgroundColor.get();
		this->descriptionText->BackColor = descriptionBackgroundColor.get();

		this->titleLabel->Text = hero->getTitle();
		this->descriptionText->Text = hero->getDescription();
		this->headPictureBox->Image = Image::FromFile(hero->getPicuresDir() + "/title.jpg");

		for each (Skill skill in hero->skills) {
			PictureBox^ pb = gcnew PictureBox();
			pb->Image = Image::FromFile(hero->getPicuresDir() + "/" + skill.getPictureName());
			pb->Name = skill.getTitle();
			pb->Size = System::Drawing::Size(100, 100);
			pb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;

			pb->Click += gcnew System::EventHandler(this, &HeroInfoForm::onSkillPictureBoxClick);
			pb->MouseEnter += gcnew System::EventHandler(this, &HeroInfoForm::onSkillPictureBoxEnter);
			pb->MouseLeave += gcnew System::EventHandler(this, &HeroInfoForm::onSkillPictureBoxLeave);

			this->skillsImageContainer->Controls->Add(pb);
		}
	}
	private: System::Void headPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		this->titleLabel->Text = hero->getTitle();
		this->descriptionText->Text = hero->getDescription();
		this->headPictureBox->Image = Image::FromFile(hero->getPicuresDir() + "/title.jpg");
	}
	private: System::Void skillsImageContainer_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void titleLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
