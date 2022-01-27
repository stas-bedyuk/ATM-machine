#pragma once
#include "Base.h"
#include "Myform8.h"
namespace Bankomat328 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		MyForm2(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumPurple;
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(9, 34);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"5 BYN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MediumPurple;
			this->button2->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(9, 120);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 54);
			this->button2->TabIndex = 1;
			this->button2->Text = L"10 BYN";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumPurple;
			this->button3->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(9, 201);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 54);
			this->button3->TabIndex = 2;
			this->button3->Text = L"20 BYN";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MediumPurple;
			this->button4->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(364, 34);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(165, 54);
			this->button4->TabIndex = 3;
			this->button4->Text = L"100 BYN";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::MediumPurple;
			this->button5->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(364, 280);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(165, 54);
			this->button5->TabIndex = 4;
			this->button5->Text = L"OTHER AMOUNT";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::MediumPurple;
			this->button6->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(364, 201);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(165, 54);
			this->button6->TabIndex = 5;
			this->button6->Text = L"500 BYN";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::MediumPurple;
			this->button7->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(364, 120);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(165, 54);
			this->button7->TabIndex = 6;
			this->button7->Text = L"200 BYN";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::MediumPurple;
			this->button8->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(9, 280);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(165, 54);
			this->button8->TabIndex = 7;
			this->button8->Text = L"50 BYN";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Orange;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(227, 297);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(84, 30);
			this->button9->TabIndex = 8;
			this->button9->Text = L"BACK";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Red;
			this->button10->Cursor = System::Windows::Forms::Cursors::SizeNESW;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(227, 331);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(84, 30);
			this->button10->TabIndex = 9;
			this->button10->Text = L"EXIT";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(538, 379);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm2";
			this->Text = L"ATM MACHINE";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Base a;
		a.read();
		if (sender == button1)
		{
			if (0 > a.debiting(5))
			{
				MessageBox::Show("YOU DON'T HAVE ENOUGH FUNDS", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				MessageBox::Show("THE OPERATION WAS COMPLETED SUCCESSFULLY", "TAKE YOUR MONEY", MessageBoxButtons::OK);
				a.write();
				a.write_base();
			}
		}
		else if (sender == button2)
		{
			if (0 > a.debiting(10))
			{
				MessageBox::Show("YOU DON'T HAVE ENOUGH FUNDS", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				MessageBox::Show("THE OPERATION WAS COMPLETED SUCCESSFULLY", "TAKE YOUR MONEY", MessageBoxButtons::OK);
				a.write();
				a.write_base();
			}
		}
		else if (sender == button3)
		{
			if (0 > a.debiting(20))
			{

				MessageBox::Show("YOU DON'T HAVE ENOUGH FUNDS", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				MessageBox::Show("THE OPERATION WAS COMPLETED SUCCESSFULLY", "TAKE YOUR MONEY", MessageBoxButtons::OK);
				a.write();
				a.write_base();
			}
		}
		else if (sender == button4)
		{
			if (0 > a.debiting(100))
			{

				MessageBox::Show("YOU DON'T HAVE ENOUGH FUNDS", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				MessageBox::Show("THE OPERATION WAS COMPLETED SUCCESSFULLY", "TAKE YOUR MONEY", MessageBoxButtons::OK);
				a.write();
				a.write_base();
			}
		}
		else if (sender == button8)
		{
			if (0 > a.debiting(50))
			{
				MessageBox::Show("YOU DON'T HAVE ENOUGH FUNDS", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				MessageBox::Show("THE OPERATION WAS COMPLETED SUCCESSFULLY", "TAKE YOUR MONEY", MessageBoxButtons::OK);
				a.write();
				a.write_base();
			}
		}
		else if (sender == button6)
		{
			if (0 > a.debiting(500))
			{

				MessageBox::Show("YOU DON'T HAVE ENOUGH FUNDS", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				MessageBox::Show("THE OPERATION WAS COMPLETED SUCCESSFULLY", "TAKE YOUR MONEY", MessageBoxButtons::OK);
				a.write();
				a.write_base();
			}
		}
		else if (sender == button7)
		{
		if (0 > a.debiting(200))
		{

			MessageBox::Show("YOU DON'T HAVE ENOUGH FUNDS", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			MessageBox::Show("THE OPERATION WAS COMPLETED SUCCESSFULLY", "TAKE YOUR MONEY", MessageBoxButtons::OK);
			a.write();
			a.write_base();
		}
		}
		else if (sender == button5)
		{
		MyForm8^ f2 = gcnew MyForm8(this);
		f2->Show();
		MyForm2::Hide();
		}
		else if (sender == button9)
		{
		MyForm2::Hide();
		obj->Show();
		}
		else if(sender==button10)
			Application::Exit();
	}
};
}
