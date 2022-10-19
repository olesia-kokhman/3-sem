#pragma once
#include "CArray.h"
#include "CString.h"
#include "CArray.cpp"
#include "CString.cpp"
namespace Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label10;
	protected:
	private: System::Windows::Forms::TextBox^ textBox10;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(45, 120);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 22);
			this->label10->TabIndex = 28;
			this->label10->Text = L"InputArray:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(32, 145);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(679, 51);
			this->textBox10->TabIndex = 27;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(32, 215);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 52);
			this->button1->TabIndex = 24;
			this->button1->Text = L"PrintArray";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(207, 215);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 52);
			this->button2->TabIndex = 29;
			this->button2->Text = L"SortUp";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(383, 215);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 52);
			this->button3->TabIndex = 30;
			this->button3->Text = L"SortDown";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(558, 215);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 52);
			this->button4->TabIndex = 31;
			this->button4->Text = L"PrintMin";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(32, 273);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(679, 297);
			this->richTextBox1->TabIndex = 32;
			this->richTextBox1->Text = L"";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(295, 78);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(153, 42);
			this->button5->TabIndex = 33;
			this->button5->Text = L"GenerateArray";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(751, 598);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int size = 5;
		char one[] = "first";
		char two[] = "second";
		char three[] = "third";
		char four[] = "fourth";
		char five[] = "fifth";
		CString first = CString(one, sizeof(one) / sizeof(char));
		CString second = CString(two, sizeof(two) / sizeof(char));
		CString third = CString(three, sizeof(three) / sizeof(char));
		CString fourth = CString(four, sizeof(four) / sizeof(char));
		CString fifth = CString(five, sizeof(five) / sizeof(char));
		CString* _array = new CString[size]{ first, second,third,fourth, fifth };
	    CArray<CString> object(_array, size);
		object.printArray(richTextBox1);
		richTextBox1 << object.min();
		object.sortAscending();
		object.printArray(richTextBox1);
		object.sortDescending();
		object.printArray(richTextBox1);
	}
};
}
