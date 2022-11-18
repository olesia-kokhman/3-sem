#pragma once
#include <string>
#include "Chyslo.h"
namespace lab12 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	class NotSelectedTypeException : public std::exception {
	};
	class NotRecognizedNumberException : public std::exception {
	};
	class OverLimitNumberException : public std::exception {
	};
	const long long LIMIT_NUMBER = 100000;
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
	private: System::Windows::Forms::TextBox^ FirstNumberTextBox;
	protected:
	private: System::Windows::Forms::ComboBox^ FirstNumberComboBox;
	private: System::Windows::Forms::TextBox^ SecondNumberTextBox;
	private: System::Windows::Forms::ComboBox^ SecondNumberComboBox;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ multiplyButton;
	private: System::Windows::Forms::Button^ minusButton;
	private: System::Windows::Forms::Button^ convertToBinaryButton;
	private: System::Windows::Forms::Button^ convertToDecimal;
	private: System::Windows::Forms::Label^ firstNumberLabel;
	private: System::Windows::Forms::Label^ secondNumberLabel;
	private: System::Windows::Forms::Button^ convertToHexButton;
	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->FirstNumberTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FirstNumberComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SecondNumberTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SecondNumberComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->multiplyButton = (gcnew System::Windows::Forms::Button());
			this->minusButton = (gcnew System::Windows::Forms::Button());
			this->convertToBinaryButton = (gcnew System::Windows::Forms::Button());
			this->convertToDecimal = (gcnew System::Windows::Forms::Button());
			this->firstNumberLabel = (gcnew System::Windows::Forms::Label());
			this->secondNumberLabel = (gcnew System::Windows::Forms::Label());
			this->convertToHexButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// FirstNumberTextBox
			// 
			this->FirstNumberTextBox->Location = System::Drawing::Point(75, 74);
			this->FirstNumberTextBox->Name = L"FirstNumberTextBox";
			this->FirstNumberTextBox->Size = System::Drawing::Size(100, 20);
			this->FirstNumberTextBox->TabIndex = 0;
			// 
			// FirstNumberComboBox
			// 
			this->FirstNumberComboBox->FormattingEnabled = true;
			this->FirstNumberComboBox->Location = System::Drawing::Point(210, 73);
			this->FirstNumberComboBox->Name = L"FirstNumberComboBox";
			this->FirstNumberComboBox->Size = System::Drawing::Size(115, 21);
			this->FirstNumberComboBox->TabIndex = 1;
			this->FirstNumberComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::FirstNumberComboBox_SelectedIndexChanged);
			// 
			// SecondNumberTextBox
			// 
			this->SecondNumberTextBox->Location = System::Drawing::Point(356, 74);
			this->SecondNumberTextBox->Name = L"SecondNumberTextBox";
			this->SecondNumberTextBox->Size = System::Drawing::Size(100, 20);
			this->SecondNumberTextBox->TabIndex = 2;
			// 
			// SecondNumberComboBox
			// 
			this->SecondNumberComboBox->FormattingEnabled = true;
			this->SecondNumberComboBox->Location = System::Drawing::Point(485, 74);
			this->SecondNumberComboBox->Name = L"SecondNumberComboBox";
			this->SecondNumberComboBox->Size = System::Drawing::Size(100, 21);
			this->SecondNumberComboBox->TabIndex = 3;
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(75, 199);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(100, 23);
			this->addButton->TabIndex = 4;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// multiplyButton
			// 
			this->multiplyButton->Location = System::Drawing::Point(210, 199);
			this->multiplyButton->Name = L"multiplyButton";
			this->multiplyButton->Size = System::Drawing::Size(115, 23);
			this->multiplyButton->TabIndex = 5;
			this->multiplyButton->Text = L"Multiply";
			this->multiplyButton->UseVisualStyleBackColor = true;
			this->multiplyButton->Click += gcnew System::EventHandler(this, &MyForm::multiplyButton_Click);
			// 
			// minusButton
			// 
			this->minusButton->Location = System::Drawing::Point(356, 199);
			this->minusButton->Name = L"minusButton";
			this->minusButton->Size = System::Drawing::Size(100, 23);
			this->minusButton->TabIndex = 6;
			this->minusButton->Text = L"Minus";
			this->minusButton->UseVisualStyleBackColor = true;
			this->minusButton->Click += gcnew System::EventHandler(this, &MyForm::minusButton_Click);
			// 
			// convertToBinaryButton
			// 
			this->convertToBinaryButton->Location = System::Drawing::Point(75, 100);
			this->convertToBinaryButton->Name = L"convertToBinaryButton";
			this->convertToBinaryButton->Size = System::Drawing::Size(100, 23);
			this->convertToBinaryButton->TabIndex = 7;
			this->convertToBinaryButton->Text = L"Convert To Binary";
			this->convertToBinaryButton->UseVisualStyleBackColor = true;
			this->convertToBinaryButton->Click += gcnew System::EventHandler(this, &MyForm::convertFirstNumberButton_Click);
			// 
			// convertToDecimal
			// 
			this->convertToDecimal->Location = System::Drawing::Point(210, 100);
			this->convertToDecimal->Name = L"convertToDecimal";
			this->convertToDecimal->Size = System::Drawing::Size(115, 23);
			this->convertToDecimal->TabIndex = 8;
			this->convertToDecimal->Text = L"Convert To Decimal";
			this->convertToDecimal->UseVisualStyleBackColor = true;
			this->convertToDecimal->Click += gcnew System::EventHandler(this, &MyForm::convertToDecimal_Click);
			// 
			// firstNumberLabel
			// 
			this->firstNumberLabel->AutoSize = true;
			this->firstNumberLabel->Location = System::Drawing::Point(207, 142);
			this->firstNumberLabel->Name = L"firstNumberLabel";
			this->firstNumberLabel->Size = System::Drawing::Size(0, 13);
			this->firstNumberLabel->TabIndex = 9;
			// 
			// secondNumberLabel
			// 
			this->secondNumberLabel->AutoSize = true;
			this->secondNumberLabel->Location = System::Drawing::Point(482, 142);
			this->secondNumberLabel->Name = L"secondNumberLabel";
			this->secondNumberLabel->Size = System::Drawing::Size(0, 13);
			this->secondNumberLabel->TabIndex = 10;
			// 
			// convertToHexButton
			// 
			this->convertToHexButton->Location = System::Drawing::Point(75, 137);
			this->convertToHexButton->Name = L"convertToHexButton";
			this->convertToHexButton->Size = System::Drawing::Size(100, 23);
			this->convertToHexButton->TabIndex = 11;
			this->convertToHexButton->Text = L"Convert To Hex";
			this->convertToHexButton->UseVisualStyleBackColor = true;
			this->convertToHexButton->Click += gcnew System::EventHandler(this, &MyForm::convertToHexButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(643, 366);
			this->Controls->Add(this->convertToHexButton);
			this->Controls->Add(this->secondNumberLabel);
			this->Controls->Add(this->firstNumberLabel);
			this->Controls->Add(this->convertToDecimal);
			this->Controls->Add(this->convertToBinaryButton);
			this->Controls->Add(this->minusButton);
			this->Controls->Add(this->multiplyButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->SecondNumberComboBox);
			this->Controls->Add(this->SecondNumberTextBox);
			this->Controls->Add(this->FirstNumberComboBox);
			this->Controls->Add(this->FirstNumberTextBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FirstNumberComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Form::CenterToScreen();

	FirstNumberComboBox->Items->Add("binary");
	FirstNumberComboBox->Items->Add("decimal");
	FirstNumberComboBox->Items->Add("hex");

	SecondNumberComboBox->Items->Add("binary");
	SecondNumberComboBox->Items->Add("decimal");
	SecondNumberComboBox->Items->Add("hex");
}
private: System::Void convertFirstNumberButton_Click(System::Object^ sender, System::EventArgs^ e) { // convert to binary
	auto input = getValidChyslo(FirstNumberTextBox, FirstNumberComboBox);

	if (input) {
		auto chyslo = getChyslo(FirstNumberTextBox, FirstNumberComboBox);
		
		try {
			firstNumberLabel->Text = gcnew String(chyslo.convertToBinary().getValue().c_str());
		}
		catch (NegativeBinaryNotSupportedException) {
			MessageBox::Show(this, "Negative binary numbers are not supported", "Validation error", MessageBoxButtons::OK);
		}
	}
}
private: System::Void convertToHexButton_Click(System::Object^ sender, System::EventArgs^ e) {
	auto input = getValidChyslo(FirstNumberTextBox, FirstNumberComboBox);

	if (input) {
		auto chyslo = getChyslo(FirstNumberTextBox, FirstNumberComboBox);
		firstNumberLabel->Text = gcnew String(chyslo.convertToHex().getValue().c_str());
	}
}
private: System::Void convertToDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
	auto input = getValidChyslo(FirstNumberTextBox, FirstNumberComboBox);

	if (input) {
		auto chyslo = getChyslo(FirstNumberTextBox, FirstNumberComboBox);
		firstNumberLabel->Text = gcnew String(chyslo.convertToDecimal().getValue().c_str());
	}
}
private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
	auto inputOne = getValidChyslo(FirstNumberTextBox, FirstNumberComboBox);
	auto inputTwo = getValidChyslo(SecondNumberTextBox, SecondNumberComboBox);

	if (inputOne && inputTwo) {
		auto chysloOne = getChyslo(FirstNumberTextBox, FirstNumberComboBox);
		auto chysloTwo = getChyslo(SecondNumberTextBox, SecondNumberComboBox);

		try {
			firstNumberLabel->Text = gcnew String(chysloOne.add(chysloTwo).getValue().c_str());
		}
		catch (OverFlowChysloException) {
			MessageBox::Show(this, "There was overflow!", "Validation error", MessageBoxButtons::OK);
		}
	}
}
private: System::Void multiplyButton_Click(System::Object^ sender, System::EventArgs^ e) {
	auto inputOne = getValidChyslo(FirstNumberTextBox, FirstNumberComboBox);
	auto inputTwo = getValidChyslo(SecondNumberTextBox, SecondNumberComboBox);

	if (inputOne && inputTwo) {
		auto chysloOne = getChyslo(FirstNumberTextBox, FirstNumberComboBox);
		auto chysloTwo = getChyslo(SecondNumberTextBox, SecondNumberComboBox);

		try {
			firstNumberLabel->Text = gcnew String(chysloOne.multiply(chysloTwo).getValue().c_str());
		}
		catch (OverFlowChysloException) {
			MessageBox::Show(this, "There was overflow!", "Validation error", MessageBoxButtons::OK);
		}
	}
}
private: System::Void minusButton_Click(System::Object^ sender, System::EventArgs^ e) {
	auto inputOne = getValidChyslo(FirstNumberTextBox, FirstNumberComboBox);
	auto inputTwo = getValidChyslo(SecondNumberTextBox, SecondNumberComboBox);

	if (inputOne && inputTwo) {
		auto chysloOne = getChyslo(FirstNumberTextBox, FirstNumberComboBox);
		auto chysloTwo = getChyslo(SecondNumberTextBox, SecondNumberComboBox);

		try {
			firstNumberLabel->Text = gcnew String(chysloOne.minus(chysloTwo).getValue().c_str());
		}
		catch (OverFlowChysloException) {
			MessageBox::Show(this, "There was overflow!", "Validation error", MessageBoxButtons::OK);
		}
	}
}
	private: Chyslo getChyslo(System::Windows::Forms::TextBox^ textBox, System::Windows::Forms::ComboBox^ comboBox) {
		return Chyslo(Chyslo::toStandardString(textBox->Text->ToString()), Chyslo::toStandardString(comboBox->SelectedItem->ToString()));
	}
	private: std::string* getValidChyslo(System::Windows::Forms::TextBox^ textBox, System::Windows::Forms::ComboBox^ comboBox) {
		try {
			auto selectedType = comboBox->SelectedItem;
			if (!selectedType) {
				throw NotSelectedTypeException();
			}

			auto chyslo = Chyslo(Chyslo::toStandardString(textBox->Text->ToString()), Chyslo::toStandardString(selectedType->ToString()));

			if (!chyslo.isBinary() && !chyslo.isDecimal() && !chyslo.isHex()) {
				throw NotRecognizedNumberException();
			}

			if (stoll(chyslo.getValue()) > LIMIT_NUMBER) {
				throw OverLimitNumberException();
			}

			return &chyslo.getValue();
		}
		catch (NotRecognizedNumberException) {
			MessageBox::Show(this, "Not recognized number type for the following input: " + textBox->Text + ". Please try again", "Validation error", MessageBoxButtons::OK);
		}
		catch (NotSelectedTypeException) {
			MessageBox::Show(this, "Not selected type. Please try again", "Validation error", MessageBoxButtons::OK);
		}
		catch (OverLimitNumberException) {
			MessageBox::Show(this, "Input number is too large. Please try again", "Validation error", MessageBoxButtons::OK);
		}
		return nullptr;
	}
};
}
