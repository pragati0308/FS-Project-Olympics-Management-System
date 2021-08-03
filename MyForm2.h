#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
#include "MyForm1.h"
#include "MyForm2.h"
namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:

		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here

			//
		}
		void write();
	public:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label11;
	public:
	public: System::Windows::Forms::Label^ label12;
	public: System::Windows::Forms::TextBox^ textBox1;
	public: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::TextBox^ textBox2;
	public: System::Windows::Forms::TextBox^ textBox3;
	public: System::Windows::Forms::TextBox^ textBox4;
	public: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::TextBox^ textBox5;
	public: System::Windows::Forms::TextBox^ textBox6;
	public: System::Windows::Forms::TextBox^ textBox7;
	public: System::Windows::Forms::TextBox^ textBox8;
	public: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Button^ button2;

	public:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label11->Location = System::Drawing::Point(459, 41);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(509, 81);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Insert New Data";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm2::label11_Click);
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(12, 179);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(409, 42);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Name of the Player:";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm2::label12_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(480, 179);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(508, 46);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(12, 290);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(409, 42);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Gender:";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(12, 236);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(409, 42);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Age:";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(485, 308);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(409, 42);
			this->label5->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(12, 493);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(409, 88);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Did the player win:\r\n(If yes enter year, else enter 0)\r\n";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(12, 451);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(409, 42);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Country:";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(12, 398);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(409, 42);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Category:";
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(12, 346);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(409, 42);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Event:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(480, 236);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(508, 46);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(480, 290);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(508, 46);
			this->textBox3->TabIndex = 11;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(480, 346);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(508, 46);
			this->textBox4->TabIndex = 12;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox4_TextChanged);
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(27, 595);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(409, 42);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Year:";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(480, 398);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(508, 46);
			this->textBox5->TabIndex = 14;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(480, 451);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(508, 46);
			this->textBox6->TabIndex = 15;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(480, 507);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(508, 46);
			this->textBox7->TabIndex = 16;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(480, 591);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(508, 46);
			this->textBox8->TabIndex = 17;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox8_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(601, 655);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 61);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(758, 655);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 61);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1320, 776);
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
			this->Name = L"MyForm2";
			this->Text = L"Insert";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ pname1 = textBox1->Text;
		extern std::string pname;
		pname = msclr::interop::marshal_as<std::string>(pname1);
	}
	public: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		write();
		MessageBox::Show("Record added!");
		this->Hide();
	}
	public: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ page1 = textBox2->Text;
		extern std::string page;
		page = msclr::interop::marshal_as<std::string>(page1);
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ pgender1 = textBox3->Text;
		extern std::string pgender;
		pgender = msclr::interop::marshal_as<std::string>(pgender1);
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ event1 = textBox4->Text;
		extern std::string event;
		event = msclr::interop::marshal_as<std::string>(event1);
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ category1 = textBox5->Text;
		extern std::string category;
		category = msclr::interop::marshal_as<std::string>(category1);
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ country1 = textBox6->Text;
		extern std::string country;
		country = msclr::interop::marshal_as<std::string>(country1);
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ winner1 = textBox7->Text;
		extern std::string winner;
		winner = msclr::interop::marshal_as<std::string>(winner1);
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ year1 = textBox8->Text;
		extern std::string year;
		year = msclr::interop::marshal_as<std::string>(year1);
	}
	};
}