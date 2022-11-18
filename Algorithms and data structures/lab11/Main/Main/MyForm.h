#pragma once
#include <string>
#include "standardString.h"
using namespace std;
namespace Main {

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
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Button^ button2;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(46, 73);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(299, 64);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(394, 73);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(299, 64);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(307, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 37);
			this->button1->TabIndex = 2;
			this->button1->Text = L"generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(160, 209);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(394, 195);
			this->richTextBox3->TabIndex = 3;
			this->richTextBox3->Text = L"";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(307, 159);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 33);
			this->button2->TabIndex = 4;
			this->button2->Text = L"find";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(727, 495);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ text1 = "And involving the antiemotion in these anticipations could have been a smart idea";
		String^ text2 = "And involving the antiemotion anticipation Panticipations in these could have been a smart idea";
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text = text1;
		richTextBox2->Text = text2;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		string one = toStandardString(text1);
		string two = toStandardString(text2);
		string pattern = search(one);
		richTextBox3->Text += "Word to search - " + (gcnew String(pattern.c_str())) + "\n";
		int result = KMP(two, pattern, richTextBox3);
		if (result < 0) {
			richTextBox3->Text += "There is no instance of such string";
		}
		else {
			richTextBox3->Text += "Index: " + result;
		}
	}
	private: string search(string text) {
		int size = text.length();
		char* char_array = new char[size + 1];
		char* char_array2 = new char[size + 1];
		strcpy(char_array, text.c_str());
		strcpy(char_array2, text.c_str());
		char* token;
		int arraySize = 0;
		token = strtok(char_array, " ");
		while (token != NULL) {
			token = strtok(NULL, " ");
			arraySize++;
		}
		string* array = new string[arraySize];
		char* token2;
		token2 = strtok(char_array2, " ");
		int i = 0;
		while (token2 != NULL) {
			array[i] = token2;
			token2 = strtok(NULL, " ");
			i++;
		}
		int max = array[0].length();
		int index = 0;
		for (int i = 0; i < arraySize; i++) {
			if (max < array[i].length()) {
				max = array[i].length();
				index = i;
			}
		}
		return array[index];
	}
	private: int KMP(string text, string pattern, System::Windows::Forms::RichTextBox^ richTextBox) {
		int textLength = text.length();
		int patternLength = pattern.length();
		if (patternLength == 0) {
			return -1;
		}
		if (textLength < patternLength) {
			return -1;
		}
		int* next = new int[patternLength + 1];
		for (int i = 0; i < patternLength + 1; i++) {
			next[i] = 0;
		}
		for (int i = 1; i < patternLength; i++) {
			int j = next[i + 1];
			while (j > 0 && pattern[j] != pattern[i]) {
				j = next[j];
			}
			if (j > 0 || pattern[j] == pattern[i]) {
				next[i + 1] = j + 1;
			}
		}
		for (int i = 0, j = 0; i < textLength; i++) {
			if (text[i] == pattern[j]) {
				richTextBox->Text += (gcnew String(string(1,(text[i])).c_str())) + " == " + (gcnew String(string(1,(pattern[j])).c_str())) + "\ti = " + i + "\tj = "+ j + "\n";
				if (++j == patternLength) {
					return  (i - j + 1);
				}
			}
			else if (j > 0) {
				richTextBox->Text += (gcnew String(string(1, (text[i])).c_str())) + " != " + (gcnew String(string(1, (pattern[j])).c_str())) + "\n";
				j = next[j];
				i--;
				richTextBox->Text += "i = " + i + " j = " + j + "\n";
			}
		}
	}
	};
	}
