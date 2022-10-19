#pragma once
#include "Standard.h"
#include "StringConvertion.h"
#include "Social.h"
namespace BankAccount2 {

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
	private: System::Windows::Forms::Button^ button8;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ transactionHistory;
	private: System::Windows::Forms::DataGridView^ Info;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button9;
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
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->transactionHistory = (gcnew System::Windows::Forms::DataGridView());
			this->Info = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->transactionHistory))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Info))->BeginInit();
			this->SuspendLayout();
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(759, 248);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(161, 32);
			this->button8->TabIndex = 56;
			this->button8->Text = L"Confirm";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::buttonsClick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(19, 253);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(509, 22);
			this->label6->TabIndex = 55;
			this->label6->Text = L"Enter your password again to get an access to the functions ->";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(582, 248);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(161, 30);
			this->textBox11->TabIndex = 54;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(203, 374);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(161, 30);
			this->textBox10->TabIndex = 53;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(534, 374);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(161, 30);
			this->textBox9->TabIndex = 52;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(868, 338);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(161, 30);
			this->textBox8->TabIndex = 51;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(534, 338);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(161, 30);
			this->textBox6->TabIndex = 49;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(367, 338);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(161, 30);
			this->textBox5->TabIndex = 48;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(203, 338);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(161, 30);
			this->textBox4->TabIndex = 47;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(36, 338);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(161, 30);
			this->textBox3->TabIndex = 46;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(29, 388);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 22);
			this->label5->TabIndex = 45;
			this->label5->Text = L"Transaction history:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 22);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Info:";
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(868, 284);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(161, 48);
			this->button7->TabIndex = 43;
			this->button7->Text = L"takeACredit";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttonsClick);
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(701, 284);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(161, 48);
			this->button6->TabIndex = 42;
			this->button6->Text = L"getBonuses";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttonsClick);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(534, 284);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(161, 48);
			this->button5->TabIndex = 41;
			this->button5->Text = L"transferFunds";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::buttonsClick);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(367, 284);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(161, 48);
			this->button4->TabIndex = 40;
			this->button4->Text = L"withdrawCash";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::buttonsClick);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(203, 284);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(161, 48);
			this->button3->TabIndex = 39;
			this->button3->Text = L"payTheUtilityBill";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::buttonsClick);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(36, 284);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 48);
			this->button2->TabIndex = 38;
			this->button2->Text = L"topUp";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::buttonsClick);
			// 
			// transactionHistory
			// 
			this->transactionHistory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->transactionHistory->Location = System::Drawing::Point(38, 413);
			this->transactionHistory->Name = L"transactionHistory";
			this->transactionHistory->RowHeadersWidth = 51;
			this->transactionHistory->RowTemplate->Height = 24;
			this->transactionHistory->Size = System::Drawing::Size(991, 220);
			this->transactionHistory->TabIndex = 37;
			// 
			// Info
			// 
			this->Info->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Info->Location = System::Drawing::Point(36, 176);
			this->Info->Name = L"Info";
			this->Info->RowHeadersWidth = 140;
			this->Info->RowTemplate->Height = 24;
			this->Info->Size = System::Drawing::Size(991, 55);
			this->Info->TabIndex = 36;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(447, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 48);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Create card";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::createButton);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(857, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 22);
			this->label3->TabIndex = 34;
			this->label3->Text = L" <- Enter password ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 22);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Enter card number ->";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(470, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 22);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Choose type: ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Standard", L"Social", L"VIP" });
			this->comboBox1->Location = System::Drawing::Point(465, 50);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(126, 24);
			this->comboBox1->TabIndex = 31;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(215, 91);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(217, 27);
			this->textBox2->TabIndex = 30;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(619, 93);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 27);
			this->textBox1->TabIndex = 29;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Benefit", L"Student ", L"Pensioner", L"Orphan",
					L"Parent"
			});
			this->comboBox2->Location = System::Drawing::Point(701, 50);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(126, 24);
			this->comboBox2->TabIndex = 57;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(613, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(308, 22);
			this->label7->TabIndex = 58;
			this->label7->Text = L"Specification(not needed if standard):";
			// 
			// button9
			// 
			this->button9->Enabled = false;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(701, 338);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(161, 48);
			this->button9->TabIndex = 59;
			this->button9->Text = L"transferBonuses";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::buttonsClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 658);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->transactionHistory);
			this->Controls->Add(this->Info);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->transactionHistory))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Info))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int type = 0;
		int typeSpec = 0;
		Standard* account;
private: System::Void createButton(System::Object^ sender, System::EventArgs^ e) {
	String^ tempType = comboBox1->Text;
	String^ tempSpec = comboBox2->Text;
	Info->RowCount = 1;
	Info->ColumnCount = 6;
	Info->Columns[0]->HeaderText = "CardNumber";
	Info->Columns[1]->HeaderText = "Type";
	Info->Columns[2]->HeaderText = "Balance";
	Info->Columns[3]->HeaderText = "Commission";
	Info->Columns[4]->HeaderText = "BonusBalance";
	Info->Columns[5]->HeaderText = "CreditPercent";
	String^ tempNumber = textBox2->Text;
	Info->Rows[0]->Cells[0]->Value = tempNumber;
	if (tempSpec == "Benefit") {
		typeSpec = 1;
	}
	else if (tempSpec == "Student") {
		typeSpec = 2;
	}
	else if (tempSpec == "Pensioner") {
		typeSpec = 3;
	}
	else if (tempSpec == "Orphan") {
		typeSpec = 4;
	}
	else if (tempSpec == "Parent") {
		typeSpec = 5;
	}
	if (tempType == "Standard") {
		type = 1;
		Info->Rows[0]->Cells[1]->Value = "Standard";
		Info->Rows[0]->Cells[2]->Value = "0.0";
		Info->Rows[0]->Cells[3]->Value = "0.05%";
		Info->Rows[0]->Cells[4]->Value = "unavailable";
		Info->Rows[0]->Cells[5]->Value = "unavailable";
	}
	else if (tempType == "Social") {
		type = 2;
		Info->Rows[0]->Cells[1]->Value = "Social: " + tempSpec;
		Info->Rows[0]->Cells[2]->Value = "0.0";
		Info->Rows[0]->Cells[3]->Value = "0.05%";
		Info->Rows[0]->Cells[4]->Value = "0.0";
		Info->Rows[0]->Cells[5]->Value = "unavailable";
	}
	else if (tempType == "VIP") {
		type = 3;
	}

	
}
private: System::Void buttonsClick(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Button^ button = (Button^)sender;
	System::String^ textOfButtons = button->Text;
	String^ tempPassword = textBox1->Text;
	String^ tempNumber = textBox2->Text;
	String^ tempPasswordAgain = textBox11->Text;
	String^ tempSpec = comboBox2->Text;
	string spec = toStandardString(tempSpec);
	string password = toStandardString(tempPassword);
	string number = toStandardString(tempNumber);
	string passwordAgain = toStandardString(tempPasswordAgain);
	if (textOfButtons == "Confirm") {
		if (type == 1) {
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
			account = new Standard(number, password);
		}
		else if (type == 2) {
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
			button6->Enabled = true;
			button9->Enabled = true;
			account = new Social(number, password, spec);
		}
		else if (type == 3) {
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
			button6->Enabled = true;
			button7->Enabled = true;
			// VIP
		}
		button8->Enabled = false;
	}
	else if (textOfButtons == "topUp") {
		double sum = System::Convert::ToDouble(textBox3->Text);
		account->topUp(sum);
		Info->Rows[0]->Cells[2]->Value = System::Convert::ToString(account->getBalance());
	}
	else if (textOfButtons == "withdrawCash") {
		double sum = System::Convert::ToDouble(textBox5->Text);
		if (account->withdrawCash(sum)) {
			Info->Rows[0]->Cells[2]->Value = System::Convert::ToString(account->getBalance());
		}
		else {
			// message box 
			Info->Rows[0]->Cells[2]->Value = "false";
		}
	}
	else if (textOfButtons == "transferFunds") {
		String^ tempAnotherAccount = textBox6->Text;
		string anotherAccount = toStandardString(tempAnotherAccount);
		double sum = System::Convert::ToDouble(textBox9->Text);
		if (account->transferFunds(sum)) {
			Info->Rows[0]->Cells[2]->Value = System::Convert::ToString(account->getBalance());
		}
		else {
			// message box
		}
	}
	else if (textOfButtons == "getBonuses") {
		Info->Rows[0]->Cells[4]->Value = System::Convert::ToString(account->getBonuses());
	}
	else if (textOfButtons == "transferBonuses") {
		account->setBalance(account->getBonuses());
		Info->Rows[0]->Cells[2]->Value = System::Convert::ToString(account->getBalance());
		Info->Rows[0]->Cells[4]->Value = "0.0";
	}
	else if (textOfButtons == "takeACredit") {
		double sum = System::Convert::ToDouble(textBox8->Text);
		Info->Rows[0]->Cells[2]->Value = System::Convert::ToString(account->getBalance());
		//account.takeCredit(sum);
	}
	else if (textOfButtons == "payTheUtilityBill") {
		String^ tempBill = textBox4->Text;
		string bill = toStandardString(tempBill);
		double sum = System::Convert::ToDouble(textBox10->Text);
		if (account->payUtilityBill(sum)) {
			Info->Rows[0]->Cells[2]->Value = System::Convert::ToString(account->getBalance());
		}
		else {
			// message box 
		}
	}
}
};
}
