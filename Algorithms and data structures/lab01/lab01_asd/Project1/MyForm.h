#pragma once
#include "Sort.h"
#include "SortWithFlag.h"
namespace Project1 {

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
			InitializeComponent();   // another code //
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(534, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"BubbleSort";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(56, 32);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 42);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(56, 187);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(483, 254);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(90, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 22);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Enter size: ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(56, 475);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(135, 35);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(231, 475);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(135, 35);
			this->textBox3->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(91, 456);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Start time:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(269, 456);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"End time:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(404, 475);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(135, 35);
			this->textBox4->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(437, 456);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Difference";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(231, 532);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(135, 35);
			this->textBox5->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(269, 513);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"isOrdered";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(684, 187);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(483, 254);
			this->richTextBox2->TabIndex = 12;
			this->richTextBox2->Text = L"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(898, 513);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 16);
			this->label6->TabIndex = 20;
			this->label6->Text = L"isOrdered";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(684, 475);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(135, 35);
			this->textBox6->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1068, 456);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Difference";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(861, 475);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(135, 35);
			this->textBox7->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(903, 456);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 16);
			this->label8->TabIndex = 16;
			this->label8->Text = L"End time:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(718, 456);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 16);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Start time:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1032, 475);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(135, 35);
			this->textBox8->TabIndex = 14;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(861, 532);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(135, 35);
			this->textBox9->TabIndex = 13;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(293, 32);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(874, 42);
			this->textBox10->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(684, 7);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 22);
			this->label10->TabIndex = 23;
			this->label10->Text = L"InputArray:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1217, 594);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int size = 0;
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		size = System::Convert::ToInt16(textBox1->Text);
	}
private: System::Void buttonClick(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ button = (Button^)sender;
	Sort* sort = new Sort(size);
	sort->randomNumbers();
	textBox10 << sort;
	sort->firstLast();
	SortWithFlag* sortWithFlag = new SortWithFlag(sort);
	sortWithFlag->firstLast();
		richTextBox1 << sort;
		sort->increaseCount();
		DateTime start = DateTime::Now;
		textBox2->Text = start.ToString("hh.mm.ss.fff tt");
		sort->bubbleSort(richTextBox1);
		DateTime end = DateTime::Now;
		textBox3->Text = end.ToString("hh:mm:ss.fff tt");
		TimeSpan inverval = end - start;
		textBox4->Text = inverval.Seconds.ToString() + "." + inverval.Milliseconds.ToString();
		sort->isOrdered();
		textBox5->Text = sort->getIsChecked().ToString();
		richTextBox2 << sortWithFlag;
		sortWithFlag->increaseCount();
		DateTime start2 = DateTime::Now;
		textBox6->Text = start.ToString("hh.mm.ss.fff tt");
		sortWithFlag->bubbleSort(richTextBox2);
		DateTime end2 = DateTime::Now;
		textBox7->Text = end2.ToString("hh:mm:ss.fff tt");
		TimeSpan inverval2 = end2 - start2;
		textBox8->Text = inverval2.Seconds.ToString() + "." + inverval2.Milliseconds.ToString();
		sortWithFlag->isOrdered();
		textBox9->Text = sortWithFlag->getIsChecked().ToString();
}
};
}
