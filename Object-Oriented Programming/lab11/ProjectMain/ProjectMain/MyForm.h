#pragma once
#include <stack>
#include <algorithm>
#include <queue>
#include <random>
using namespace std;
namespace ProjectMain {
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(49, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create stack";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::createButton);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(49, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 32);
			this->textBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(49, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 32);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Print stack";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::PrintButton);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(246, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(555, 716);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(49, 126);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(179, 32);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Change stack";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::changeButton);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(49, 202);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(179, 32);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Create stack2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::create2Button);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(49, 164);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(179, 32);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Print stack";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::PrintButtonn);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(49, 240);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(179, 32);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Print stack2";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::PrintStack2);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(49, 278);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(179, 32);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Change stack with 2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::changeButton2);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(49, 316);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(179, 32);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Print both";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::PrintBoth);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(49, 354);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(179, 32);
			this->button8->TabIndex = 12;
			this->button8->Text = L"Sort stack down";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::sortButton);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(49, 392);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(179, 32);
			this->button10->TabIndex = 13;
			this->button10->Text = L"Print stack";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::PrintButton11);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(49, 430);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(179, 32);
			this->button11->TabIndex = 14;
			this->button11->Text = L"Find min";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::findMin);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(49, 468);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(179, 32);
			this->button12->TabIndex = 15;
			this->button12->Text = L"Create queue";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::createQueue);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(49, 506);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(179, 32);
			this->button13->TabIndex = 16;
			this->button13->Text = L"Print queue";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::PrintQueue);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(49, 544);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(179, 32);
			this->button14->TabIndex = 17;
			this->button14->Text = L"Sort queue and stack up";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::sortBoth);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(49, 582);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(179, 32);
			this->button15->TabIndex = 18;
			this->button15->Text = L"Print queue and stack";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::printQueueStack);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(49, 620);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(179, 32);
			this->button16->TabIndex = 19;
			this->button16->Text = L"Merge queue and stack";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::mergeButton);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(49, 658);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(179, 32);
			this->button17->TabIndex = 20;
			this->button17->Text = L"Print merged queue";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::printMerged);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(49, 696);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(179, 32);
			this->button18->TabIndex = 21;
			this->button18->Text = L"Print counter";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::counterButton);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 733);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	stack<float>* first;
	int firstLength = 0;
	stack<float>* second;
	queue<float>* queueFirst;
	queue<float>* merged;
public: void printArray(System::Windows::Forms::RichTextBox^ richTextBox, stack<float>* object) {
	int length = object->size();
	float* array = new float[length];
	for (int i = 0; i < length; i++) {
		array[i] = object->top();
		object->pop();
	}
	for (int i = 0; i < length; i++) {
		richTextBox->Text += array[i].ToString("#,0.00") + " ";
	}
	richTextBox->Text += "\n";
	for (int i = length - 1; i >= 0; i--) {
		object->push(array[i]);
	}
}
private: System::Void createButton(System::Object^ sender, System::EventArgs^ e) {
	first = new stack<float>;
	firstLength = System::Convert::ToInt64(textBox1->Text);
	random_device random_device;
	mt19937 generator(random_device());
	uniform_real_distribution<float> distribution(1, 20);
	while (first->size() < firstLength) {
		first->push(distribution(generator));
	}
	button1->Enabled = false;
}
private: System::Void PrintButton(System::Object^ sender, System::EventArgs^ e) {
	printArray(richTextBox1, first);
	button2->Enabled = false;
}
private: System::Void changeButton(System::Object^ sender, System::EventArgs^ e) {
	int count = first->size() / 2;
	while (first->size() > count) {
		first->pop();
	}
	float length = first->size();
	float* array = new float[length];
	for (int i = 0; i < length; i++) {
		array[i] = first->top() + 1;
		first->pop();
	}
	for (int i = length - 1; i >= 0; i--) {
		first->push(array[i]);
	}
	button3->Enabled = false;
}
private: System::Void create2Button(System::Object^ sender, System::EventArgs^ e) {
	second = new stack<float>;
	random_device random_device;
	mt19937 generator(random_device());
	uniform_real_distribution<float> distribution(1, 20);
	while (second->size() < firstLength) {
		second->push(distribution(generator));
	}
	button4->Enabled = false;
}
private: System::Void PrintStack2(System::Object^ sender, System::EventArgs^ e) {
	printArray(richTextBox1, second);
	button6->Enabled = false;
}
private: System::Void changeButton2(System::Object^ sender, System::EventArgs^ e) {
	int count2 = first->size() / 2;
	int count3 = first->size() - count2;
	float* array2 = new float[count3];
	for (int i = 0; i < count2; i++) {
		first->pop();
	}
	for (int i = 0; i < count3; i++) {
		array2[i] = first->top();
		first->pop();
	}
	for (int i = count3 - 1; i >= 0; i--) {
		first->push(array2[i]);
	}
	float* array3 = new float[firstLength];
	for (int i = 0; i < firstLength; i++) {
		array3[i] = second->top();
		second->pop();
	}
	for (int i = firstLength - 1; i >= 0; i--) {
		second->push(array3[i]);
		first->push(array3[i]);
	}
	button7->Enabled = false;
}
private: System::Void PrintBoth(System::Object^ sender, System::EventArgs^ e) {
	printArray(richTextBox1, first);
	printArray(richTextBox1, second);
	button9->Enabled = false;
}
private: System::Void sortButton(System::Object^ sender, System::EventArgs^ e) {
	int length2 = first->size();
	float* array4 = new float[length2];
	for (int i = 0; i < length2; i++) {
		array4[i] = first->top();
		first->pop();
	}
	sort(array4, array4 + length2);
	for (int i = length2 - 1; i >= 0; i--) {
		first->push(array4[i]);
	}
	button8->Enabled = false;
}
private: System::Void findMin(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Text += "min = " + first->top().ToString("#,0.00") + "\n";
	button11->Enabled = false;
}
private: System::Void createQueue(System::Object^ sender, System::EventArgs^ e) {
	float* array5 = new float[firstLength];
	for (int i = 0; i < firstLength; i++) {
		array5[i] = first->top();
		first->pop();
	}
	for (int i = firstLength - 1; i >= 0; i--) {
		first->push(array5[i]);
	}
	queueFirst = new queue<float>;
	for (int i = 0; i < firstLength; i++) {
		if (array5[i] > 5 && array5[i] < 15) {
			queueFirst->push(array5[i]);
		}
	}
	button12->Enabled = false;
}
private: System::Void PrintQueue(System::Object^ sender, System::EventArgs^ e) {
	printQueue(richTextBox1, queueFirst);
	button13->Enabled = false;
}
public: void printQueue(System::Windows::Forms::RichTextBox^ richTextBox, queue<float>* object) {
	int length = object->size();
	float* array = new float[length];
	for (int i = 0; i < length; i++) {
		array[i] = object->front();
		object->pop();
	}
	for (int i = 0; i < length; i++) {
		richTextBox->Text += array[i].ToString("#,0.00") + " ";
	}
	richTextBox->Text += "\n";
	for (int i = 0; i < length; i++) {
		object->push(array[i]);
	}
}
private: System::Void sortBoth(System::Object^ sender, System::EventArgs^ e) {
	int length2 = first->size();
	float* array4 = new float[length2];
	for (int i = 0; i < length2; i++) {
		array4[i] = first->top();
		first->pop();
	}
	sort(array4, array4 + length2);
	for (int i = 0; i < length2; i++) {
		first->push(array4[i]);
	}
	int length3 = queueFirst->size();
	float* array6 = new float[length3];
	for (int i = 0; i < length3; i++) {
		array6[i] = queueFirst->front();
		queueFirst->pop();
	}
	sort(array6, array6 + length3);
	for (int i = 0; i < length3; i++) {
		queueFirst->push(array6[i]);
	}
	button14->Enabled = false;
}
private: System::Void printQueueStack(System::Object^ sender, System::EventArgs^ e) {
	printArray(richTextBox1, first);
	printQueue(richTextBox1, queueFirst);
	button15->Enabled = false;
}
private: System::Void mergeButton(System::Object^ sender, System::EventArgs^ e) {
	merged = new queue<float>;
	while (!first->empty()) {
		merged->push(first->top());
		first->pop();
	}
	while (!queueFirst->empty()) {
		merged->push(queueFirst->front());
		queueFirst->pop();
	}
	button16->Enabled = false;
}
private: System::Void printMerged(System::Object^ sender, System::EventArgs^ e) {
	printQueue(richTextBox1, merged);
	button17->Enabled = false;
}
private: System::Void counterButton(System::Object^ sender, System::EventArgs^ e) {
	int counter = 0;
	while (!merged->empty()) {
		if (merged->front() > 5 && merged->front() < 15) {
			counter++;
		}
		merged->pop();
	}
	richTextBox1->Text += "counter = " + System::Convert::ToString(counter);
	button18->Enabled = false;
}
private: System::Void PrintButtonn(System::Object^ sender, System::EventArgs^ e) {
	printArray(richTextBox1, first);
	button5->Enabled = false;
}
private: System::Void PrintButton11(System::Object^ sender, System::EventArgs^ e) {
	printArray(richTextBox1, first);
	button10->Enabled = false;
}
};
}
