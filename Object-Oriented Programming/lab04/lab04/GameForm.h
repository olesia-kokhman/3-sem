#pragma once
#include "Game.h"
namespace lab04 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
		{
			InitializeComponent();
		}
	protected:
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewImageColumn^ Column1;
	private: System::Windows::Forms::DataGridViewImageColumn^ Column2;
	private: System::Windows::Forms::DataGridViewImageColumn^ Column3;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Button^ restartButton;
	protected:
	private: Game* game;
	private:
#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->restartButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeight = 21;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dataGridView1->Location = System::Drawing::Point(62, 72);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(0);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 21;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->RowTemplate->Height = 69;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->ShowEditingIcon = false;
			this->dataGridView1->Size = System::Drawing::Size(303, 211);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GameForm::dataGridView1_CellClick);
			this->dataGridView1->ColumnAdded += gcnew System::Windows::Forms::DataGridViewColumnEventHandler(this, &GameForm::dataGridView1_ColumnAdded);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"cross.png");
			this->imageList1->Images->SetKeyName(1, L"circle.png");
			this->imageList1->Images->SetKeyName(2, L"white.png");
			// 
			// restartButton
			// 
			this->restartButton->Location = System::Drawing::Point(146, 310);
			this->restartButton->Name = L"restartButton";
			this->restartButton->Size = System::Drawing::Size(114, 42);
			this->restartButton->TabIndex = 1;
			this->restartButton->Text = L"Restart";
			this->restartButton->UseVisualStyleBackColor = true;
			this->restartButton->Click += gcnew System::EventHandler(this, &GameForm::restartButton_Click);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 364);
			this->Controls->Add(this->restartButton);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"GameForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic-Tac-Toe";
			this->Load += gcnew System::EventHandler(this, &GameForm::GameForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_ColumnAdded(System::Object^ sender, System::Windows::Forms::DataGridViewColumnEventArgs^ e) {
	this->dataGridView1->Rows->Add();
}
private: System::Void GameForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Rows->Add();
	this->dataGridView1->Rows->Add();
	this->dataGridView1->Rows->Add();
	dataGridView1->ClearSelection();
	dataGridView1->CurrentCell = nullptr;
	SetupNewGame();
}
private: void SetupNewGame() {
	game = new Game();
	BuildEmptyCells();
}
private: void BuildEmptyCells() {
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		for (int j = 0; j < dataGridView1->Rows[i]->Cells->Count; j++) {
			dataGridView1->Rows[i]->Cells[j]->Value = imageList1->Images[2];
		}
	}
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	this->dataGridView1->ClearSelection();
	dataGridView1->CurrentCell = nullptr;
	if (game->Items[e->RowIndex][e->ColumnIndex] != Empty) {
		return;
	}
	game->MakeMove(e->RowIndex, e->ColumnIndex);
	int imageIndex;
	if (game->Items[e->RowIndex][e->ColumnIndex] == Cross) {
		imageIndex = 0;
	}
	else if (game->Items[e->RowIndex][e->ColumnIndex] == Nought) {
		imageIndex = 1;
	}
	else {
		imageIndex = 2;
	}
	dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = imageList1->Images[imageIndex];
	MessageBoxButtons buttons = MessageBoxButtons::OK;
	System::Windows::Forms::DialogResult result;
	if (game->CheckTie()) {
		result = MessageBox::Show(this, "Tie", "Game Result", buttons);
	}
	if (game->Winned) {
		result = MessageBox::Show(this, (game->CurrentPlayer == 0 ? "Cross" : "Nought") + " is winner!", "Game Result", buttons);
	}
}
private: System::Void restartButton_Click(System::Object^ sender, System::EventArgs^ e) {
	SetupNewGame();
}
};
}
