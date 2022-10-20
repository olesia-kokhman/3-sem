#pragma once
#include "CString.h"
#include "CArray.h"
namespace Final2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button5;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(304, 91);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(153, 42);
			this->button5->TabIndex = 41;
			this->button5->Text = L"GenerateArray";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(38, 245);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(679, 297);
			this->richTextBox1->TabIndex = 40;
			this->richTextBox1->Text = L"";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(564, 187);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(153, 52);
			this->button4->TabIndex = 39;
			this->button4->Text = L"PrintMin";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::printMin);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(392, 187);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 52);
			this->button3->TabIndex = 38;
			this->button3->Text = L"SortDown";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::sortDown);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(214, 187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 52);
			this->button2->TabIndex = 37;
			this->button2->Text = L"SortUp";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::sortUp);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(38, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 52);
			this->button1->TabIndex = 34;
			this->button1->Text = L"PrintArray";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::printArray);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 592);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
		CArray<CString>* object;
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	    int size = 5;
		CString first = CString(5);
		CString second = CString(6);
		CString third = CString(4);
		CString fourth = CString(5);
		CString fifth = CString(6);
		first.random();
		second.random();
		third.random();
		fourth.random();
		fifth.random();
		CString* _array = new CString[size];
		_array[0] = first;
		_array[1] = second;
		_array[2] = third;
		_array[3] = fourth;
		_array[4] = fifth;
		object = new CArray<CString>(_array, size);
		object->printArray(richTextBox1);
	}
private: System::Void printArray(System::Object^ sender, System::EventArgs^ e) {
	object->printArray(richTextBox1);
}
private: System::Void sortUp(System::Object^ sender, System::EventArgs^ e) {
	object->sortAscending();
	object->printArray(richTextBox1);
}
private: System::Void sortDown(System::Object^ sender, System::EventArgs^ e) {
	object->sortDescending();
	object->printArray(richTextBox1);
}
private: System::Void printMin(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Text += "MIN = ";
	richTextBox1 << object->min();
	richTextBox1->Text += "\n";
}
};
}
