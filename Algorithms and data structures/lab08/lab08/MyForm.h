#pragma once
#include <stdio.h>
#include <string>
#include <sstream>
#include "LinkedList.h"
namespace lab08 {
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
	private: System::Windows::Forms::RichTextBox^ elementsRichTextBox;
	protected:
	private: System::Windows::Forms::Button^ computeStuffButton;
	private: System::Windows::Forms::Label^ countLabel;
	private: System::Windows::Forms::Label^ outputSizeLabel;
	private: System::Windows::Forms::Label^ minElementLabel;
	private: System::Windows::Forms::Label^ maxElementLabel;
	private: System::Windows::Forms::Label^ elementBeforeMinLabel;
	private: System::Windows::Forms::Label^ elementAfterMaxLabel;
	private: System::Windows::Forms::Label^ outputMinElementLabel;
	private: System::Windows::Forms::Label^ outputMaxElementLabel;
	private: System::Windows::Forms::Label^ outputElementBeforeMinLabel;
	private: System::Windows::Forms::Label^ outputElementAfterMaxLabel;
	private: System::Windows::Forms::Label^ thirdElementFromStartLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ outputThirdElementFromStartLabel;
	private: System::Windows::Forms::Label^ outputSecondElementFromEndLabel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ elementForPositionTextBox;
	private: System::Windows::Forms::Label^ positionLabel;
	private: System::Windows::Forms::Label^ outputPositionLabel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ newElementsrichTextBox;
	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->elementsRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->computeStuffButton = (gcnew System::Windows::Forms::Button());
			this->countLabel = (gcnew System::Windows::Forms::Label());
			this->outputSizeLabel = (gcnew System::Windows::Forms::Label());
			this->minElementLabel = (gcnew System::Windows::Forms::Label());
			this->maxElementLabel = (gcnew System::Windows::Forms::Label());
			this->elementBeforeMinLabel = (gcnew System::Windows::Forms::Label());
			this->elementAfterMaxLabel = (gcnew System::Windows::Forms::Label());
			this->outputMinElementLabel = (gcnew System::Windows::Forms::Label());
			this->outputMaxElementLabel = (gcnew System::Windows::Forms::Label());
			this->outputElementBeforeMinLabel = (gcnew System::Windows::Forms::Label());
			this->outputElementAfterMaxLabel = (gcnew System::Windows::Forms::Label());
			this->thirdElementFromStartLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->outputThirdElementFromStartLabel = (gcnew System::Windows::Forms::Label());
			this->outputSecondElementFromEndLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->elementForPositionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->positionLabel = (gcnew System::Windows::Forms::Label());
			this->outputPositionLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->newElementsrichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// elementsRichTextBox
			// 
			this->elementsRichTextBox->Location = System::Drawing::Point(26, 24);
			this->elementsRichTextBox->Name = L"elementsRichTextBox";
			this->elementsRichTextBox->Size = System::Drawing::Size(267, 137);
			this->elementsRichTextBox->TabIndex = 0;
			this->elementsRichTextBox->Text = L"";
			// 
			// computeStuffButton
			// 
			this->computeStuffButton->Location = System::Drawing::Point(107, 167);
			this->computeStuffButton->Name = L"computeStuffButton";
			this->computeStuffButton->Size = System::Drawing::Size(75, 23);
			this->computeStuffButton->TabIndex = 1;
			this->computeStuffButton->Text = L"Compute";
			this->computeStuffButton->UseVisualStyleBackColor = true;
			this->computeStuffButton->Click += gcnew System::EventHandler(this, &MyForm::computeStuffButton_Click);
			// 
			// countLabel
			// 
			this->countLabel->AutoSize = true;
			this->countLabel->Location = System::Drawing::Point(310, 27);
			this->countLabel->Name = L"countLabel";
			this->countLabel->Size = System::Drawing::Size(27, 13);
			this->countLabel->TabIndex = 2;
			this->countLabel->Text = L"Size";
			// 
			// outputSizeLabel
			// 
			this->outputSizeLabel->AutoSize = true;
			this->outputSizeLabel->Location = System::Drawing::Point(432, 27);
			this->outputSizeLabel->Name = L"outputSizeLabel";
			this->outputSizeLabel->Size = System::Drawing::Size(0, 13);
			this->outputSizeLabel->TabIndex = 3;
			// 
			// minElementLabel
			// 
			this->minElementLabel->AutoSize = true;
			this->minElementLabel->Location = System::Drawing::Point(310, 50);
			this->minElementLabel->Name = L"minElementLabel";
			this->minElementLabel->Size = System::Drawing::Size(64, 13);
			this->minElementLabel->TabIndex = 4;
			this->minElementLabel->Text = L"Min element";
			// 
			// maxElementLabel
			// 
			this->maxElementLabel->AutoSize = true;
			this->maxElementLabel->Location = System::Drawing::Point(310, 72);
			this->maxElementLabel->Name = L"maxElementLabel";
			this->maxElementLabel->Size = System::Drawing::Size(67, 13);
			this->maxElementLabel->TabIndex = 5;
			this->maxElementLabel->Text = L"Max element";
			// 
			// elementBeforeMinLabel
			// 
			this->elementBeforeMinLabel->AutoSize = true;
			this->elementBeforeMinLabel->Location = System::Drawing::Point(309, 144);
			this->elementBeforeMinLabel->Name = L"elementBeforeMinLabel";
			this->elementBeforeMinLabel->Size = System::Drawing::Size(97, 13);
			this->elementBeforeMinLabel->TabIndex = 6;
			this->elementBeforeMinLabel->Text = L"Element before min";
			// 
			// elementAfterMaxLabel
			// 
			this->elementAfterMaxLabel->AutoSize = true;
			this->elementAfterMaxLabel->Location = System::Drawing::Point(309, 167);
			this->elementAfterMaxLabel->Name = L"elementAfterMaxLabel";
			this->elementAfterMaxLabel->Size = System::Drawing::Size(91, 13);
			this->elementAfterMaxLabel->TabIndex = 7;
			this->elementAfterMaxLabel->Text = L"Element after max";
			// 
			// outputMinElementLabel
			// 
			this->outputMinElementLabel->AutoSize = true;
			this->outputMinElementLabel->Location = System::Drawing::Point(432, 50);
			this->outputMinElementLabel->Name = L"outputMinElementLabel";
			this->outputMinElementLabel->Size = System::Drawing::Size(0, 13);
			this->outputMinElementLabel->TabIndex = 8;
			// 
			// outputMaxElementLabel
			// 
			this->outputMaxElementLabel->AutoSize = true;
			this->outputMaxElementLabel->Location = System::Drawing::Point(432, 72);
			this->outputMaxElementLabel->Name = L"outputMaxElementLabel";
			this->outputMaxElementLabel->Size = System::Drawing::Size(0, 13);
			this->outputMaxElementLabel->TabIndex = 9;
			// 
			// outputElementBeforeMinLabel
			// 
			this->outputElementBeforeMinLabel->AutoSize = true;
			this->outputElementBeforeMinLabel->Location = System::Drawing::Point(432, 144);
			this->outputElementBeforeMinLabel->Name = L"outputElementBeforeMinLabel";
			this->outputElementBeforeMinLabel->Size = System::Drawing::Size(0, 13);
			this->outputElementBeforeMinLabel->TabIndex = 10;
			// 
			// outputElementAfterMaxLabel
			// 
			this->outputElementAfterMaxLabel->AutoSize = true;
			this->outputElementAfterMaxLabel->Location = System::Drawing::Point(432, 167);
			this->outputElementAfterMaxLabel->Name = L"outputElementAfterMaxLabel";
			this->outputElementAfterMaxLabel->Size = System::Drawing::Size(0, 13);
			this->outputElementAfterMaxLabel->TabIndex = 11;
			// 
			// thirdElementFromStartLabel
			// 
			this->thirdElementFromStartLabel->AutoSize = true;
			this->thirdElementFromStartLabel->Location = System::Drawing::Point(309, 96);
			this->thirdElementFromStartLabel->Name = L"thirdElementFromStartLabel";
			this->thirdElementFromStartLabel->Size = System::Drawing::Size(108, 13);
			this->thirdElementFromStartLabel->TabIndex = 12;
			this->thirdElementFromStartLabel->Text = L"3rd element from start";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(310, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"2nd element from end";
			// 
			// outputThirdElementFromStartLabel
			// 
			this->outputThirdElementFromStartLabel->AutoSize = true;
			this->outputThirdElementFromStartLabel->Location = System::Drawing::Point(432, 96);
			this->outputThirdElementFromStartLabel->Name = L"outputThirdElementFromStartLabel";
			this->outputThirdElementFromStartLabel->Size = System::Drawing::Size(0, 13);
			this->outputThirdElementFromStartLabel->TabIndex = 14;
			// 
			// outputSecondElementFromEndLabel
			// 
			this->outputSecondElementFromEndLabel->AutoSize = true;
			this->outputSecondElementFromEndLabel->Location = System::Drawing::Point(432, 119);
			this->outputSecondElementFromEndLabel->Name = L"outputSecondElementFromEndLabel";
			this->outputSecondElementFromEndLabel->Size = System::Drawing::Size(0, 13);
			this->outputSecondElementFromEndLabel->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(310, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Find Element position from input";
			// 
			// elementForPositionTextBox
			// 
			this->elementForPositionTextBox->Location = System::Drawing::Point(313, 209);
			this->elementForPositionTextBox->Name = L"elementForPositionTextBox";
			this->elementForPositionTextBox->Size = System::Drawing::Size(153, 20);
			this->elementForPositionTextBox->TabIndex = 18;
			// 
			// positionLabel
			// 
			this->positionLabel->AutoSize = true;
			this->positionLabel->Location = System::Drawing::Point(312, 232);
			this->positionLabel->Name = L"positionLabel";
			this->positionLabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->positionLabel->Size = System::Drawing::Size(44, 13);
			this->positionLabel->TabIndex = 19;
			this->positionLabel->Text = L"Position";
			// 
			// outputPositionLabel
			// 
			this->outputPositionLabel->AutoSize = true;
			this->outputPositionLabel->Location = System::Drawing::Point(400, 232);
			this->outputPositionLabel->Name = L"outputPositionLabel";
			this->outputPositionLabel->Size = System::Drawing::Size(0, 13);
			this->outputPositionLabel->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(310, 256);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Merge new elements into list";
			// 
			// newElementsrichTextBox
			// 
			this->newElementsrichTextBox->Location = System::Drawing::Point(312, 284);
			this->newElementsrichTextBox->Name = L"newElementsrichTextBox";
			this->newElementsrichTextBox->Size = System::Drawing::Size(154, 64);
			this->newElementsrichTextBox->TabIndex = 23;
			this->newElementsrichTextBox->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 405);
			this->Controls->Add(this->newElementsrichTextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->outputPositionLabel);
			this->Controls->Add(this->positionLabel);
			this->Controls->Add(this->elementForPositionTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->outputSecondElementFromEndLabel);
			this->Controls->Add(this->outputThirdElementFromStartLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->thirdElementFromStartLabel);
			this->Controls->Add(this->outputElementAfterMaxLabel);
			this->Controls->Add(this->outputElementBeforeMinLabel);
			this->Controls->Add(this->outputMaxElementLabel);
			this->Controls->Add(this->outputMinElementLabel);
			this->Controls->Add(this->elementAfterMaxLabel);
			this->Controls->Add(this->elementBeforeMinLabel);
			this->Controls->Add(this->maxElementLabel);
			this->Controls->Add(this->minElementLabel);
			this->Controls->Add(this->outputSizeLabel);
			this->Controls->Add(this->countLabel);
			this->Controls->Add(this->computeStuffButton);
			this->Controls->Add(this->elementsRichTextBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void computeStuffButton_Click(System::Object^ sender, System::EventArgs^ e) {
		outputPositionLabel->Text = "";
		std::string inputElements = toStandardString(elementsRichTextBox->Text);
		std::stringstream stream(inputElements);
		LinkedList *linkedList = new LinkedList();
		int n;
		while (stream >> n) {
			linkedList->insert(n);
		}
		std::string newElements = toStandardString(newElementsrichTextBox->Text);
		std::stringstream newStream(newElements);
		while (newStream >> n) {
			linkedList->insert(n);
			elementsRichTextBox->Text += " " + n.ToString();
		}
		int size = linkedList->getCount();
		outputSizeLabel->Text = size.ToString();
		if (size > 0) {
			outputMinElementLabel->Text = linkedList->minElement().ToString();
			outputMaxElementLabel->Text = linkedList->maxElement().ToString();
		}
		if (size >= 3) {
			outputThirdElementFromStartLabel->Text = linkedList->thirdElementFromStart().ToString();
		}
		if (size >= 2) {
			outputSecondElementFromEndLabel->Text = linkedList->secondElementFromEnd().ToString();
			int elementBeforeMin = linkedList->elementBeforeMin();
			if (elementBeforeMin != INT_MAX) {
				outputElementBeforeMinLabel->Text = elementBeforeMin.ToString();
			}
			int elementAfterMax = linkedList->elementAfterMax();
			if (elementAfterMax != INT_MIN) {
				outputElementAfterMaxLabel->Text = elementAfterMax.ToString();
			}
		}
		if (elementForPositionTextBox->Text != "") {
			int elementForPosition = System::Convert::ToInt64(elementForPositionTextBox->Text);
			int position = linkedList->searchPosition(elementForPosition);
			if (position != INT_MIN) {
				outputPositionLabel->Text = position.ToString();
			}
		}
	}
	static std::string toStandardString(System::String^ string) {
		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;
	}
};
}
