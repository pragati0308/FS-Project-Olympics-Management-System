#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void modify();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm7::typeid));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label11->Location = System::Drawing::Point(430, 64);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(549, 81);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Insert Modified Data";
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label12->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(28, 209);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(409, 42);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Name of the Player:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(500, 209);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(508, 46);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm7::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1086, 623);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 110);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Add Modified Data";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(500, 661);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(508, 46);
			this->textBox8->TabIndex = 33;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm7::textBox8_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(496, 573);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(508, 46);
			this->textBox7->TabIndex = 32;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm7::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(496, 496);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(508, 46);
			this->textBox6->TabIndex = 31;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm7::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(496, 443);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(508, 46);
			this->textBox5->TabIndex = 30;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm7::textBox5_TextChanged);
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label10->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(28, 664);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(409, 42);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Year:";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(496, 391);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(508, 46);
			this->textBox4->TabIndex = 28;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm7::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(496, 335);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(508, 46);
			this->textBox3->TabIndex = 27;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm7::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(496, 281);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(508, 46);
			this->textBox2->TabIndex = 26;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm7::textBox2_TextChanged);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label9->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(28, 391);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(409, 42);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Event:";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(28, 443);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(409, 42);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Category:";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(28, 496);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(409, 42);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Country:";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(28, 552);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(409, 88);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Did the player win:\r\n(If yes enter year, else enter 0)\r\n";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(501, 353);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(409, 42);
			this->label5->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(28, 281);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(409, 42);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Age:";
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label13->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(28, 335);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(409, 42);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Gender:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(133, 94);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 51);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm7::button2_Click);
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1289, 770);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Name = L"MyForm7";
			this->Text = L"Modify Data";
			this->Load += gcnew System::EventHandler(this, &MyForm7::MyForm7_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm7_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ mname1 = textBox1->Text;
		extern std::string mname;
		mname = msclr::interop::marshal_as<std::string>(mname1);
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ mage1 = textBox2->Text;
		extern std::string mage;
		mage = msclr::interop::marshal_as<std::string>(mage1);
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ mgender1 = textBox3->Text;
		extern std::string mgender;
		mgender = msclr::interop::marshal_as<std::string>(mgender1);
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ mevent1 = textBox4->Text;
		extern std::string mevent;
		mevent = msclr::interop::marshal_as<std::string>(mevent1);
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ mcategory1 = textBox5->Text;
		extern std::string mcategory;
		mcategory = msclr::interop::marshal_as<std::string>(mcategory1);
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ mcountry1 = textBox6->Text;
		extern std::string mcountry;
		mcountry = msclr::interop::marshal_as<std::string>(mcountry1);
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ mwinner1 = textBox7->Text;
		extern std::string mwinner;
		mwinner = msclr::interop::marshal_as<std::string>(mwinner1);
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ myear1 = textBox8->Text;
		extern std::string myear;
		myear = msclr::interop::marshal_as<std::string>(myear1);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		modify();
	}
	};
}
