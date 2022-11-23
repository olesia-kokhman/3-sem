#pragma once

#include "Material.h"
#include <list>
#include "Box.h"
#include "Order.h"
#include <iostream>

namespace kursova {

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

	private:
		std::list<Material*>* materials = new std::list<Material*>();
	private: System::Windows::Forms::TextBox^ boxWidthTextBox;
	private: System::Windows::Forms::TextBox^ boxHeightTextBox;
	private: System::Windows::Forms::TextBox^ boxDepthTextBox;
	private: System::Windows::Forms::Button^ drawButton;

	protected:



	private: System::Windows::Forms::TextBox^ nameTextBox;
	private: System::Windows::Forms::TextBox^ priceTextBox;


	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ importMaterialsButton;




	private: System::Windows::Forms::DataGridView^ materialsDataGridView;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ materialName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;

	private: System::Windows::Forms::Button^ saveButton;
	private: System::Windows::Forms::Button^ sortAscbutton;
	private: System::Windows::Forms::Button^ sortDescbutton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ drawBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ calculateMaterialPriceButton;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ materialPriceLabel;
	private: System::Windows::Forms::TextBox^ utilityRateTextBox;
	private: System::Windows::Forms::TextBox^ salaryRateTextBox;
	private: System::Windows::Forms::TextBox^ taxRateTextBox;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ calculateCostsButton;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ costsLabel;
	private: System::Windows::Forms::TextBox^ equipmentDeprecationPriceTextBox;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ calculateBoxCostButton;
	private: System::Windows::Forms::Label^ boxCostLabel;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ calculateBoxPriceButton;
	private: System::Windows::Forms::Label^ boxPriceLabel;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ countOfBoxesPerMonthTextBox;
	private: System::Windows::Forms::Button^ calculateIncomeButton;
	private: System::Windows::Forms::Label^ incomePerMonthLabel;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ calculateAllbutton;






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
			this->boxWidthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->boxHeightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->boxDepthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->drawButton = (gcnew System::Windows::Forms::Button());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->priceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->importMaterialsButton = (gcnew System::Windows::Forms::Button());
			this->materialsDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->materialName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->sortAscbutton = (gcnew System::Windows::Forms::Button());
			this->sortDescbutton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->drawBox = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->calculateMaterialPriceButton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->materialPriceLabel = (gcnew System::Windows::Forms::Label());
			this->utilityRateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->salaryRateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->taxRateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->calculateCostsButton = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->costsLabel = (gcnew System::Windows::Forms::Label());
			this->equipmentDeprecationPriceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->calculateBoxCostButton = (gcnew System::Windows::Forms::Button());
			this->boxCostLabel = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->calculateBoxPriceButton = (gcnew System::Windows::Forms::Button());
			this->boxPriceLabel = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->countOfBoxesPerMonthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->calculateIncomeButton = (gcnew System::Windows::Forms::Button());
			this->incomePerMonthLabel = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->calculateAllbutton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->materialsDataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->drawBox))->BeginInit();
			this->SuspendLayout();
			// 
			// boxWidthTextBox
			// 
			this->boxWidthTextBox->Location = System::Drawing::Point(12, 413);
			this->boxWidthTextBox->Name = L"boxWidthTextBox";
			this->boxWidthTextBox->Size = System::Drawing::Size(100, 20);
			this->boxWidthTextBox->TabIndex = 0;
			// 
			// boxHeightTextBox
			// 
			this->boxHeightTextBox->Location = System::Drawing::Point(12, 451);
			this->boxHeightTextBox->Name = L"boxHeightTextBox";
			this->boxHeightTextBox->Size = System::Drawing::Size(100, 20);
			this->boxHeightTextBox->TabIndex = 1;
			// 
			// boxDepthTextBox
			// 
			this->boxDepthTextBox->Location = System::Drawing::Point(12, 490);
			this->boxDepthTextBox->Name = L"boxDepthTextBox";
			this->boxDepthTextBox->Size = System::Drawing::Size(100, 20);
			this->boxDepthTextBox->TabIndex = 2;
			// 
			// drawButton
			// 
			this->drawButton->Location = System::Drawing::Point(12, 516);
			this->drawButton->Name = L"drawButton";
			this->drawButton->Size = System::Drawing::Size(100, 23);
			this->drawButton->TabIndex = 3;
			this->drawButton->Text = L"Draw";
			this->drawButton->UseVisualStyleBackColor = true;
			this->drawButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(973, 432);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(100, 20);
			this->nameTextBox->TabIndex = 4;
			// 
			// priceTextBox
			// 
			this->priceTextBox->Location = System::Drawing::Point(1116, 432);
			this->priceTextBox->Name = L"priceTextBox";
			this->priceTextBox->Size = System::Drawing::Size(100, 20);
			this->priceTextBox->TabIndex = 5;
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(973, 458);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(100, 23);
			this->addButton->TabIndex = 6;
			this->addButton->Text = L"Add";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// importMaterialsButton
			// 
			this->importMaterialsButton->Location = System::Drawing::Point(1116, 487);
			this->importMaterialsButton->Name = L"importMaterialsButton";
			this->importMaterialsButton->Size = System::Drawing::Size(100, 23);
			this->importMaterialsButton->TabIndex = 7;
			this->importMaterialsButton->Text = L"Import materials";
			this->importMaterialsButton->UseVisualStyleBackColor = true;
			this->importMaterialsButton->Click += gcnew System::EventHandler(this, &MyForm::importMaterialsButton_Click);
			// 
			// materialsDataGridView
			// 
			this->materialsDataGridView->AllowUserToAddRows = false;
			this->materialsDataGridView->AllowUserToDeleteRows = false;
			this->materialsDataGridView->AllowUserToResizeColumns = false;
			this->materialsDataGridView->AllowUserToResizeRows = false;
			this->materialsDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->materialsDataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->materialName,
					this->price
			});
			this->materialsDataGridView->Location = System::Drawing::Point(973, 12);
			this->materialsDataGridView->MultiSelect = false;
			this->materialsDataGridView->Name = L"materialsDataGridView";
			this->materialsDataGridView->ReadOnly = true;
			this->materialsDataGridView->Size = System::Drawing::Size(243, 382);
			this->materialsDataGridView->TabIndex = 9;
			// 
			// materialName
			// 
			this->materialName->HeaderText = L"Material Name";
			this->materialName->Name = L"materialName";
			this->materialName->ReadOnly = true;
			// 
			// price
			// 
			this->price->HeaderText = L"Price/m^2";
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(973, 487);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(100, 23);
			this->saveButton->TabIndex = 11;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &MyForm::saveButton_Click);
			// 
			// sortAscbutton
			// 
			this->sortAscbutton->Location = System::Drawing::Point(973, 516);
			this->sortAscbutton->Name = L"sortAscbutton";
			this->sortAscbutton->Size = System::Drawing::Size(100, 23);
			this->sortAscbutton->TabIndex = 12;
			this->sortAscbutton->Text = L"Sort asc";
			this->sortAscbutton->UseVisualStyleBackColor = true;
			this->sortAscbutton->Click += gcnew System::EventHandler(this, &MyForm::sortAscbutton_Click);
			// 
			// sortDescbutton
			// 
			this->sortDescbutton->Location = System::Drawing::Point(1116, 516);
			this->sortDescbutton->Name = L"sortDescbutton";
			this->sortDescbutton->Size = System::Drawing::Size(100, 23);
			this->sortDescbutton->TabIndex = 13;
			this->sortDescbutton->Text = L"Sort desc";
			this->sortDescbutton->UseVisualStyleBackColor = true;
			this->sortDescbutton->Click += gcnew System::EventHandler(this, &MyForm::sortDescbutton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(970, 416);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1113, 416);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Price";
			// 
			// drawBox
			// 
			this->drawBox->BackColor = System::Drawing::SystemColors::Window;
			this->drawBox->Location = System::Drawing::Point(12, 12);
			this->drawBox->Name = L"drawBox";
			this->drawBox->Size = System::Drawing::Size(952, 382);
			this->drawBox->TabIndex = 16;
			this->drawBox->TabStop = false;
			this->drawBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::drawBox_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 397);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Width";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 435);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Height";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 474);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Depth";
			// 
			// calculateMaterialPriceButton
			// 
			this->calculateMaterialPriceButton->Location = System::Drawing::Point(250, 451);
			this->calculateMaterialPriceButton->Name = L"calculateMaterialPriceButton";
			this->calculateMaterialPriceButton->Size = System::Drawing::Size(126, 23);
			this->calculateMaterialPriceButton->TabIndex = 20;
			this->calculateMaterialPriceButton->Text = L"Calculate Material Price";
			this->calculateMaterialPriceButton->UseVisualStyleBackColor = true;
			this->calculateMaterialPriceButton->Click += gcnew System::EventHandler(this, &MyForm::calculateMaterialPriceButton_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(247, 492);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Material Price";
			// 
			// materialPriceLabel
			// 
			this->materialPriceLabel->AutoSize = true;
			this->materialPriceLabel->Location = System::Drawing::Point(324, 492);
			this->materialPriceLabel->Name = L"materialPriceLabel";
			this->materialPriceLabel->Size = System::Drawing::Size(0, 13);
			this->materialPriceLabel->TabIndex = 22;
			// 
			// utilityRateTextBox
			// 
			this->utilityRateTextBox->Location = System::Drawing::Point(132, 413);
			this->utilityRateTextBox->Name = L"utilityRateTextBox";
			this->utilityRateTextBox->Size = System::Drawing::Size(100, 20);
			this->utilityRateTextBox->TabIndex = 23;
			// 
			// salaryRateTextBox
			// 
			this->salaryRateTextBox->Location = System::Drawing::Point(250, 413);
			this->salaryRateTextBox->Name = L"salaryRateTextBox";
			this->salaryRateTextBox->Size = System::Drawing::Size(126, 20);
			this->salaryRateTextBox->TabIndex = 24;
			// 
			// taxRateTextBox
			// 
			this->taxRateTextBox->Location = System::Drawing::Point(396, 413);
			this->taxRateTextBox->Name = L"taxRateTextBox";
			this->taxRateTextBox->Size = System::Drawing::Size(126, 20);
			this->taxRateTextBox->TabIndex = 25;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(129, 397);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 13);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Utility Rate / m^2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(247, 397);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 13);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Salary Rate / m^2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(393, 398);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 13);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Tax Rate / m^2";
			// 
			// calculateCostsButton
			// 
			this->calculateCostsButton->Location = System::Drawing::Point(132, 451);
			this->calculateCostsButton->Name = L"calculateCostsButton";
			this->calculateCostsButton->Size = System::Drawing::Size(100, 23);
			this->calculateCostsButton->TabIndex = 29;
			this->calculateCostsButton->Text = L"Calculate Costs";
			this->calculateCostsButton->UseVisualStyleBackColor = true;
			this->calculateCostsButton->Click += gcnew System::EventHandler(this, &MyForm::calculateCostsButton_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(129, 492);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 13);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Costs";
			// 
			// costsLabel
			// 
			this->costsLabel->AutoSize = true;
			this->costsLabel->Location = System::Drawing::Point(168, 492);
			this->costsLabel->Name = L"costsLabel";
			this->costsLabel->Size = System::Drawing::Size(0, 13);
			this->costsLabel->TabIndex = 31;
			// 
			// equipmentDeprecationPriceTextBox
			// 
			this->equipmentDeprecationPriceTextBox->Location = System::Drawing::Point(542, 413);
			this->equipmentDeprecationPriceTextBox->Name = L"equipmentDeprecationPriceTextBox";
			this->equipmentDeprecationPriceTextBox->Size = System::Drawing::Size(144, 20);
			this->equipmentDeprecationPriceTextBox->TabIndex = 32;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(539, 397);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(147, 13);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Equipment Depreciation Price";
			// 
			// calculateBoxCostButton
			// 
			this->calculateBoxCostButton->Location = System::Drawing::Point(396, 451);
			this->calculateBoxCostButton->Name = L"calculateBoxCostButton";
			this->calculateBoxCostButton->Size = System::Drawing::Size(126, 23);
			this->calculateBoxCostButton->TabIndex = 34;
			this->calculateBoxCostButton->Text = L"Calculate Box Cost";
			this->calculateBoxCostButton->UseVisualStyleBackColor = true;
			this->calculateBoxCostButton->Click += gcnew System::EventHandler(this, &MyForm::calculateBoxCostButton_Click);
			// 
			// boxCostLabel
			// 
			this->boxCostLabel->AutoSize = true;
			this->boxCostLabel->Location = System::Drawing::Point(443, 492);
			this->boxCostLabel->Name = L"boxCostLabel";
			this->boxCostLabel->Size = System::Drawing::Size(0, 13);
			this->boxCostLabel->TabIndex = 36;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(393, 492);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 13);
			this->label13->TabIndex = 35;
			this->label13->Text = L"Box Cost";
			// 
			// calculateBoxPriceButton
			// 
			this->calculateBoxPriceButton->Location = System::Drawing::Point(542, 451);
			this->calculateBoxPriceButton->Name = L"calculateBoxPriceButton";
			this->calculateBoxPriceButton->Size = System::Drawing::Size(144, 23);
			this->calculateBoxPriceButton->TabIndex = 37;
			this->calculateBoxPriceButton->Text = L"Calculate Box Price";
			this->calculateBoxPriceButton->UseVisualStyleBackColor = true;
			this->calculateBoxPriceButton->Click += gcnew System::EventHandler(this, &MyForm::calculateBoxPriceButton_Click);
			// 
			// boxPriceLabel
			// 
			this->boxPriceLabel->AutoSize = true;
			this->boxPriceLabel->Location = System::Drawing::Point(592, 493);
			this->boxPriceLabel->Name = L"boxPriceLabel";
			this->boxPriceLabel->Size = System::Drawing::Size(0, 13);
			this->boxPriceLabel->TabIndex = 39;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(539, 493);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(52, 13);
			this->label14->TabIndex = 38;
			this->label14->Text = L"Box Price";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(719, 397);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(128, 13);
			this->label12->TabIndex = 40;
			this->label12->Text = L"Count of boxes per month";
			// 
			// countOfBoxesPerMonthTextBox
			// 
			this->countOfBoxesPerMonthTextBox->Location = System::Drawing::Point(722, 413);
			this->countOfBoxesPerMonthTextBox->Name = L"countOfBoxesPerMonthTextBox";
			this->countOfBoxesPerMonthTextBox->Size = System::Drawing::Size(100, 20);
			this->countOfBoxesPerMonthTextBox->TabIndex = 41;
			// 
			// calculateIncomeButton
			// 
			this->calculateIncomeButton->Location = System::Drawing::Point(721, 451);
			this->calculateIncomeButton->Name = L"calculateIncomeButton";
			this->calculateIncomeButton->Size = System::Drawing::Size(101, 23);
			this->calculateIncomeButton->TabIndex = 42;
			this->calculateIncomeButton->Text = L"Calculate Income";
			this->calculateIncomeButton->UseVisualStyleBackColor = true;
			this->calculateIncomeButton->Click += gcnew System::EventHandler(this, &MyForm::calculateIncomeButton_Click);
			// 
			// incomePerMonthLabel
			// 
			this->incomePerMonthLabel->AutoSize = true;
			this->incomePerMonthLabel->Location = System::Drawing::Point(815, 492);
			this->incomePerMonthLabel->Name = L"incomePerMonthLabel";
			this->incomePerMonthLabel->Size = System::Drawing::Size(0, 13);
			this->incomePerMonthLabel->TabIndex = 44;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(718, 492);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(92, 13);
			this->label16->TabIndex = 43;
			this->label16->Text = L"Income per month";
			// 
			// calculateAllbutton
			// 
			this->calculateAllbutton->Location = System::Drawing::Point(420, 516);
			this->calculateAllbutton->Name = L"calculateAllbutton";
			this->calculateAllbutton->Size = System::Drawing::Size(75, 23);
			this->calculateAllbutton->TabIndex = 45;
			this->calculateAllbutton->Text = L"Calculate All";
			this->calculateAllbutton->UseVisualStyleBackColor = true;
			this->calculateAllbutton->Click += gcnew System::EventHandler(this, &MyForm::calculateAllbutton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1245, 546);
			this->Controls->Add(this->calculateAllbutton);
			this->Controls->Add(this->incomePerMonthLabel);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->calculateIncomeButton);
			this->Controls->Add(this->countOfBoxesPerMonthTextBox);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->boxPriceLabel);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->calculateBoxPriceButton);
			this->Controls->Add(this->boxCostLabel);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->calculateBoxCostButton);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->equipmentDeprecationPriceTextBox);
			this->Controls->Add(this->costsLabel);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->calculateCostsButton);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->taxRateTextBox);
			this->Controls->Add(this->salaryRateTextBox);
			this->Controls->Add(this->utilityRateTextBox);
			this->Controls->Add(this->materialPriceLabel);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->calculateMaterialPriceButton);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->drawBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->sortDescbutton);
			this->Controls->Add(this->sortAscbutton);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->materialsDataGridView);
			this->Controls->Add(this->importMaterialsButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->priceTextBox);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->drawButton);
			this->Controls->Add(this->boxDepthTextBox);
			this->Controls->Add(this->boxHeightTextBox);
			this->Controls->Add(this->boxWidthTextBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->materialsDataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->drawBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		auto price = System::Convert::ToDouble(priceTextBox->Text);

		Material* material = new Material(toStandardString(nameTextBox->Text), price);
		int index = materialsDataGridView->Rows->Add();

		materialsDataGridView->Rows[index]->Cells[0]->Value = gcnew String(material->getName().c_str());
		materialsDataGridView->Rows[index]->Cells[1]->Value = material->getPrice();

		materials->push_back(material);
	}
	catch (FormatException^ ex) {
		MessageBox::Show(this, "Bad price format", "Validation error", MessageBoxButtons::OK);
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
private: System::Void importMaterialsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream file("output.txt");

	if (file.is_open())
	{
		materials = new std::list<Material*>();
		materialsDataGridView->Rows->Clear();

		Material* material = new Material();

		while (file >> material) {
			auto rowIndex = materialsDataGridView->Rows->Add();

			materialsDataGridView->Rows[rowIndex]->Cells[0]->Value = gcnew String(material->getName().c_str());
			materialsDataGridView->Rows[rowIndex]->Cells[1]->Value = material->getPrice();

			materials->push_back(material);

			material = new Material();
		}
	}
	else
	{
		MessageBox::Show(this, "Saved file doesn't exist", "Validation error", MessageBoxButtons::OK);
	}
	file.close();
}
private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ofstream file("output.txt", std::ios::trunc);
	for (auto it = materials->begin(); it != materials->end(); ++it)
		file << *it;

	file.close();
}
private: System::Void sortAscbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	materials->sort(MaterialPriceComparator());
	printMaterials();
}
void printMaterials() {
	materialsDataGridView->Rows->Clear();
	int i = 0;
	for (auto it = materials->begin(); it != materials->end(); ++it)
	{
		auto material = *it;
		materialsDataGridView->Rows->Add();
		materialsDataGridView->Rows[i]->Cells[0]->Value = gcnew String(material->getName().c_str());
		materialsDataGridView->Rows[i]->Cells[1]->Value = material->getPrice();
		i++;
	}
}
private: System::Void sortDescbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	materials->sort(MaterialPriceComparator());
	materials->reverse();
	printMaterials();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	drawBox->Invalidate();
}
private: Box* getBox() {
	double width = System::Convert::ToDouble(boxWidthTextBox->Text);
	double height = System::Convert::ToDouble(boxHeightTextBox->Text);
	double depth = System::Convert::ToDouble(boxDepthTextBox->Text);

	Box* box = new Box(width, height, depth);

	return box;
}
private: System::Void drawBox_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	try {
		auto box = getBox();

		auto myCanvas = e->Graphics;
		System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(System::Drawing::Color::Black);
		double smallSideWidth = (double)box->width / 5.2;

		int heightStart = drawBox->Height / 2 - box->height / 2;
		int x = 10;
		//left small side
		myCanvas->DrawRectangle(pen, x, heightStart, smallSideWidth, box->depth);
		x += smallSideWidth;
		//кришка
		myCanvas->DrawRectangle(pen, x, heightStart, box->width, box->depth);
		x += box->width;
		//left wall side
		myCanvas->DrawRectangle(pen, x, heightStart, box->height, box->depth);
		//кріплення верхнє
		myCanvas->DrawRectangle(pen, x, heightStart - box->height / 10.0, box->height, (double)box->height / 10.0);
		//кріплення нижнє
		myCanvas->DrawRectangle(pen, x, heightStart + box->depth, box->height, (double)box->height / 10.0);
		x += box->height;
		//bikini bottom
		myCanvas->DrawRectangle(pen, x, heightStart, box->width, box->depth);
		//up side
		myCanvas->DrawRectangle(pen, x, heightStart - box->height, box->width, box->height);
		//down side
		myCanvas->DrawRectangle(pen, x, heightStart + box->depth, box->width, box->height);
		x += box->width;
		//right side
		myCanvas->DrawRectangle(pen, x, heightStart, box->height, box->depth);
	}
	catch (Exception^ ex) {
		ex->Message;
	}
}
private: System::Void calculateMaterialPriceButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkMaterialIsEmpty())
		return;

	if (checkRowIsNotSelected())
		return;

	if (checkBoxInput())
		return;

	auto box = getBox();

	std::string name = toStandardString(materialsDataGridView->SelectedRows[0]->Cells[0]->Value->ToString());

	auto material = findMaterial(name);


	Order* order = new Order(box, material);

	materialPriceLabel->Text = order->calculateMaterialPrice().ToString("#,0.00");
}
private: Material* findMaterial(std::string name) {
	for (auto it = materials->begin(); it != materials->end(); ++it) {
		auto material = *it;
		if (material->getName() == name)
			return material;
	}
}
private: bool checkMaterialIsEmpty() {
	if (materials->empty()) {
		MessageBox::Show(this, "Materials are empty. Please add new material", "Validation error", MessageBoxButtons::OK);
		return true;
	}
	return false;
}
private: bool checkRowIsNotSelected() {
	if (materialsDataGridView->SelectedRows->Count == 0) {
		MessageBox::Show(this, "Need to select material", "Validation error", MessageBoxButtons::OK);
		return true;
	}
	return false;
}
private: bool checkCostsInvalid() {
	try {
		double utilityRate = System::Convert::ToDouble(utilityRateTextBox->Text);
		double salaryRate = System::Convert::ToDouble(salaryRateTextBox->Text);
		double taxRate = System::Convert::ToDouble(taxRateTextBox->Text);
	}
	catch (System::FormatException^ ex) {
		MessageBox::Show(this, "Cost inputs are not number", "Validation error", MessageBoxButtons::OK);
		return true;
	}
	return false;
}

private: bool checkEquipmentDeprecationPrice() {
	try {
		double equipmentDeprecationPrice = System::Convert::ToDouble(equipmentDeprecationPriceTextBox->Text);
	}
	catch (System::FormatException^ ex) {
		MessageBox::Show(this, "Equipment Deprecation Price is not a number", "Validation error", MessageBoxButtons::OK);
		return true;
	}
	return false;
}

private: bool checkCountOfBoxes() {
	try {
		int countOfBoxesPerMonth = System::Convert::ToInt32(countOfBoxesPerMonthTextBox->Text);
	}
	catch (System::FormatException^ ex) {
		MessageBox::Show(this, "Count of Boxes is not a number", "Validation error", MessageBoxButtons::OK);
		return true;
	}
	return false;
}

private: bool checkBoxInput() {
	try {
		double width = System::Convert::ToDouble(boxWidthTextBox->Text);
		double height = System::Convert::ToDouble(boxHeightTextBox->Text);
		double depth = System::Convert::ToDouble(boxDepthTextBox->Text);
	}
	catch (System::FormatException^ ex) {
		MessageBox::Show(this, "Width/Height/Depth is not a number", "Validation error", MessageBoxButtons::OK);
		return true;
	}
	return false;
}

private: System::Void calculateCostsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkMaterialIsEmpty())
		return;

	if (checkRowIsNotSelected())
		return;

	if (checkBoxInput())
		return;

	if (checkCostsInvalid()) {
		return;
	}

	auto box = getBox();

	std::string name = toStandardString(materialsDataGridView->SelectedRows[0]->Cells[0]->Value->ToString());

	auto material = findMaterial(name);

	Order* order = new Order(box, material);

	double utilityRate = System::Convert::ToDouble(utilityRateTextBox->Text);
	double salaryRate = System::Convert::ToDouble(salaryRateTextBox->Text);
	double taxRate = System::Convert::ToDouble(taxRateTextBox->Text);

	costsLabel->Text = order->calculateCosts(utilityRate, salaryRate, taxRate).ToString("#,0.00");
}
private: System::Void calculateBoxCostButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkMaterialIsEmpty())
		return;

	if (checkRowIsNotSelected())
		return;

	if (checkBoxInput())
		return;

	if (checkCostsInvalid()) {
		return;
	}

	if (checkEquipmentDeprecationPrice())
		return;

	auto box = getBox();

	std::string name = toStandardString(materialsDataGridView->SelectedRows[0]->Cells[0]->Value->ToString());

	auto material = findMaterial(name);

	Order* order = new Order(box, material);

	double utilityRate = System::Convert::ToDouble(utilityRateTextBox->Text);
	double salaryRate = System::Convert::ToDouble(salaryRateTextBox->Text);
	double taxRate = System::Convert::ToDouble(taxRateTextBox->Text);
	double equipmentDeprecationPrice = System::Convert::ToDouble(equipmentDeprecationPriceTextBox->Text);

	boxCostLabel->Text = order->calculateBoxCost(utilityRate, salaryRate, taxRate, equipmentDeprecationPrice).ToString("#,0.00");
}
private: System::Void calculateBoxPriceButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkMaterialIsEmpty())
		return;

	if (checkRowIsNotSelected())
		return;

	if (checkBoxInput())
		return;
	
	if (checkCostsInvalid()) {
		return;
	}

	if (checkEquipmentDeprecationPrice())
		return;

	auto box = getBox();

	std::string name = toStandardString(materialsDataGridView->SelectedRows[0]->Cells[0]->Value->ToString());

	auto material = findMaterial(name);

	Order* order = new Order(box, material);

	double utilityRate = System::Convert::ToDouble(utilityRateTextBox->Text);
	double salaryRate = System::Convert::ToDouble(salaryRateTextBox->Text);
	double taxRate = System::Convert::ToDouble(taxRateTextBox->Text);
	double equipmentDeprecationPrice = System::Convert::ToDouble(equipmentDeprecationPriceTextBox->Text);

	boxPriceLabel->Text = order->calculateBoxPrice(utilityRate, salaryRate, taxRate, equipmentDeprecationPrice).ToString("#,0.00");
}
private: System::Void calculateIncomeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkMaterialIsEmpty())
		return;

	if (checkRowIsNotSelected())
		return;

	if (checkBoxInput())
		return;

	if (checkCostsInvalid()) {
		return;
	}

	if (checkEquipmentDeprecationPrice())
		return;

	if (checkCountOfBoxes())
		return;

	auto box = getBox();

	std::string name = toStandardString(materialsDataGridView->SelectedRows[0]->Cells[0]->Value->ToString());

	auto material = findMaterial(name);

	Order* order = new Order(box, material);

	double utilityRate = System::Convert::ToDouble(utilityRateTextBox->Text);
	double salaryRate = System::Convert::ToDouble(salaryRateTextBox->Text);
	double taxRate = System::Convert::ToDouble(taxRateTextBox->Text);
	double equipmentDeprecationPrice = System::Convert::ToDouble(equipmentDeprecationPriceTextBox->Text);
	int countOfBoxesPerMonth = System::Convert::ToInt32(countOfBoxesPerMonthTextBox->Text);

	incomePerMonthLabel->Text = order->calculateIncomePerMonth(utilityRate, salaryRate, taxRate, equipmentDeprecationPrice, countOfBoxesPerMonth).ToString("#,0.00");
}
private: System::Void calculateAllbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkMaterialIsEmpty())
		return;

	if (checkRowIsNotSelected())
		return;

	if (checkBoxInput())
		return;

	if (checkCostsInvalid()) {
		return;
	}

	if (checkEquipmentDeprecationPrice())
		return;

	if (checkCountOfBoxes())
		return;

	auto box = getBox();

	std::string name = toStandardString(materialsDataGridView->SelectedRows[0]->Cells[0]->Value->ToString());

	auto material = findMaterial(name);

	Order* order = new Order(box, material);

	double utilityRate = System::Convert::ToDouble(utilityRateTextBox->Text);
	double salaryRate = System::Convert::ToDouble(salaryRateTextBox->Text);
	double taxRate = System::Convert::ToDouble(taxRateTextBox->Text);
	double equipmentDeprecationPrice = System::Convert::ToDouble(equipmentDeprecationPriceTextBox->Text);
	int countOfBoxesPerMonth = System::Convert::ToInt32(countOfBoxesPerMonthTextBox->Text);

	materialPriceLabel->Text = order->calculateMaterialPrice().ToString("#,0.00");
	costsLabel->Text = order->calculateCosts(utilityRate, salaryRate, taxRate).ToString("#,0.00");
	boxCostLabel->Text = order->calculateBoxCost(utilityRate, salaryRate, taxRate, equipmentDeprecationPrice).ToString("#,0.00");
	boxPriceLabel->Text = order->calculateBoxPrice(utilityRate, salaryRate, taxRate, equipmentDeprecationPrice).ToString("#,0.00");
	incomePerMonthLabel->Text = order->calculateIncomePerMonth(utilityRate, salaryRate, taxRate, equipmentDeprecationPrice, countOfBoxesPerMonth).ToString("#,0.00");
}
};
}
