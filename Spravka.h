#pragma once


namespace LegueStats {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Me
	/// </summary>
	public ref class Me : public System::Windows::Forms::Form
	{
	public:
		Me(void)
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
		~Me()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(204, 52);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Главное ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Me::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(41, 119);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 52);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Стартовое меню";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Me::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(41, 194);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(204, 52);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Начальное окно";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Me::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(41, 268);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(204, 52);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Информация о персонажах ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Me::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(41, 341);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(204, 52);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Окно с предметами";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Me::button5_Click);
			// 
			// Me
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(291, 471);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Me";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		MessageBox::Show("здравствуйте вас приветствует краткое\nруководство по использования приложения\nLeague Stats", "Главное");
	
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("В стратовом окне пользователь может выбрать одну из двух кнопок:\n 1) 'Start' - Запускает приложение \n 2) 'Справка' - С помощью ее вы сможете разобраться как правильно и четко пользоваться приложением", "Стартовое окно");
		
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("После нажития кнопик 'Start', вы увидите множество иконок персонажей, \n (на данный момент их 159), на каждого из них вы сможете нажать, и посмотреть их информацию. ","Начальное окно");
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("После нажатия на одного из перснажей вы сможете увидить сверху, его имя, левее ниже будет аватарка (то есть фото как он выгялдит).\n Правее будут способности данного персонажа, на каждую способность можно будет нажать и посмотреть\n не большой ролик как работате данная способность\n В самом низу будет описание самого персонажа,  а также способностей","Информация о персонаже");
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("В окне с информацией о персонаже, есть окно, где буду находится предметы, вы сможете выбрать 6 предметов для того чтобы приложение расчитала статистику персонажа с ними. \nЭто очень облегчит дальнейшее осваивание в игре  ", "Окно с предметами");
}
};
}
