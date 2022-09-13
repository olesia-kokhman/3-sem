#pragma once
#include "Sort.h"
namespace Project2 {

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
			InitializeComponent();    // another code //
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox10;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(37, 255);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(874, 42);
			this->textBox10->TabIndex = 35;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(456, 678);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 16);
			this->label5->TabIndex = 34;
			this->label5->Text = L"isOrdered";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(419, 697);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(135, 35);
			this->textBox5->TabIndex = 33;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(641, 618);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 16);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Difference";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(605, 640);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(135, 35);
			this->textBox4->TabIndex = 31;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(461, 618);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 16);
			this->label3->TabIndex = 30;
			this->label3->Text = L"End time:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(272, 618);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 16);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Start time:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(421, 640);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(135, 35);
			this->textBox3->TabIndex = 28;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(240, 640);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(135, 35);
			this->textBox2->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(455, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 22);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Enter size: ";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(240, 361);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(500, 254);
			this->richTextBox1->TabIndex = 25;
			this->richTextBox1->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(421, 28);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 42);
			this->textBox1->TabIndex = 24;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(421, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 52);
			this->button1->TabIndex = 23;
			this->button1->Text = L"SelectionSort";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(37, 114);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(874, 42);
			this->textBox6->TabIndex = 36;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(37, 182);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(874, 42);
			this->textBox7->TabIndex = 37;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(389, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(221, 22);
			this->label6->TabIndex = 38;
			this->label6->Text = L"First array (even numbers)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(455, 159);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 22);
			this->label7->TabIndex = 39;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(455, 230);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 22);
			this->label8->TabIndex = 40;
			this->label8->Text = L"Input array";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(389, 157);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(238, 22);
			this->label9->TabIndex = 41;
			this->label9->Text = L"Second array (odd numbers)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(946, 744);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox10);
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
		int size;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Sort* sort = new Sort(size);
		sort->randomNumbers();
		sort->makeResultArray();
		for (int i = 0; i < size; i++) {
			textBox6->Text += System::Convert::ToString(sort->firstArray[i] + " ");
			textBox7->Text += System::Convert::ToString(sort->secondArray[i] + " ");
		}
		for (int i = 0; i < sort->counter; i++) {
			textBox10->Text += System::Convert::ToString(sort->resultArray[i] + " ");
		}
		richTextBox1 << sort;
		sort->increaseCount();
		DateTime start = DateTime::Now;
		textBox2->Text = start.ToString("hh.mm.ss.fff tt");
		sort->selectionSort(richTextBox1);
		DateTime end = DateTime::Now;
		textBox3->Text = end.ToString("hh:mm:ss.fff tt");
		TimeSpan inverval = end - start;
		textBox4->Text = inverval.Seconds.ToString() + "." + inverval.Milliseconds.ToString();
		sort->isOrdered();
		textBox5->Text = sort->getIsChecked().ToString();
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	size = System::Convert::ToInt16(textBox1->Text);
}
};
}
