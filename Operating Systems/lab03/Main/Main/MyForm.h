#pragma once
#include "header.h"
namespace Main {
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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(655, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"CreateProcesses";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::createProcesses);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(655, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"StopProcess";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::stopProcess);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(655, 192);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"ResumeProcess";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::resumeProcess);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(655, 270);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 35);
			this->button4->TabIndex = 3;
			this->button4->Text = L"EndProcess";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::endProcess);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(655, 348);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 35);
			this->button5->TabIndex = 4;
			this->button5->Text = L"KillProcess";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::killProcess);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(655, 426);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 35);
			this->button6->TabIndex = 5;
			this->button6->Text = L"ChangePriority";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::changePriority);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(15, 545);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(159, 35);
			this->button7->TabIndex = 6;
			this->button7->Text = L"MeasureTime";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::measureTime);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(655, 155);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 31);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(655, 233);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(130, 31);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(655, 311);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(130, 31);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(655, 389);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(130, 31);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(655, 467);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(62, 31);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(173, 32);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(130, 35);
			this->textBox6->TabIndex = 12;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(492, 32);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(130, 35);
			this->textBox7->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 16);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Number of processes ->";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(342, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Number of columns ->";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(15, 114);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(607, 384);
			this->dataGridView1->TabIndex = 16;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(15, 504);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(159, 35);
			this->button8->TabIndex = 17;
			this->button8->Text = L"ResumeAllProcesses";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::resumeAllProcesses);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(180, 504);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(159, 35);
			this->button9->TabIndex = 18;
			this->button9->Text = L"StopAllProcesses";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::stopAllProcesses);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(345, 504);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(159, 35);
			this->button10->TabIndex = 19;
			this->button10->Text = L"EndAllProcesses";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::endAllProcesses);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(510, 504);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(159, 35);
			this->button11->TabIndex = 20;
			this->button11->Text = L"KillAllProcesses";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::killAllProcesses);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(723, 467);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(62, 31);
			this->textBox8->TabIndex = 21;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(180, 545);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(159, 35);
			this->textBox9->TabIndex = 22;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 629);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Processes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		PROCESS_INFORMATION* processes;
		int numberOfProcesses;
private: System::Void createProcesses(System::Object^ sender, System::EventArgs^ e) {
	numberOfProcesses = System::Convert::ToInt64(textBox6->Text);
	processes = new PROCESS_INFORMATION[numberOfProcesses];
	int numberOfColumns = System::Convert::ToInt64(textBox7->Text);
	string path = "C:\\university\\git\\3-sem\\Operating Systems\\lab03\\Sum\\x64\\Debug\\Sum.exe ";
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(STARTUPINFO));
	si.cb = sizeof(STARTUPINFO);
	dataGridView1->RowCount = numberOfProcesses;
	dataGridView1->ColumnCount = 4;
	dataGridView1->Columns[0]->HeaderText = "PID";
	dataGridView1->Columns[1]->HeaderText = "ThreadID";
	dataGridView1->Columns[2]->HeaderText = "Priority";
	dataGridView1->Columns[3]->HeaderText = "Status";
	for (int i = 1; i <= dataGridView1->RowCount; i++) {
		dataGridView1->Rows[i - 1]->HeaderCell->Value = System::Convert::ToString(i);
	}
	for (int i = 0; i < numberOfProcesses; i++) {
		string newPath = path + to_string(numberOfColumns);
		if (!CreateProcess(NULL, (LPSTR)newPath.c_str(), NULL, NULL, TRUE, CREATE_NEW_CONSOLE | CREATE_SUSPENDED, NULL, NULL, & si, & pi)) {
			return;
		}
		dataGridView1->Rows[i]->Cells[0]->Value = pi.dwProcessId;
		dataGridView1->Rows[i]->Cells[1]->Value = pi.dwThreadId;
		dataGridView1->Rows[i]->Cells[2]->Value = GetPriorityClass(pi.hThread);
		dataGridView1->Rows[i]->Cells[3]->Value = "Suspended";
		processes[i] = pi;
	}
}
private: System::Void stopProcess(System::Object^ sender, System::EventArgs^ e) {
	int number = System::Convert::ToInt64(textBox1->Text);
	if (SuspendThread(processes[number - 1].hThread) == (DWORD)-1) {
		return;
	}
	dataGridView1->Rows[number-1]->Cells[3]->Value = "Suspended";
}
private: System::Void resumeProcess(System::Object^ sender, System::EventArgs^ e) {
	int number = System::Convert::ToInt64(textBox2->Text);
	if (ResumeThread(processes[number - 1].hThread) == (DWORD)-1) {
		return;
	}
	dataGridView1->Rows[number - 1]->Cells[3]->Value = "Running";
}

private: System::Void resumeAllProcesses(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < numberOfProcesses; i++) {
		ResumeThread(processes[i].hThread);
		dataGridView1->Rows[i]->Cells[3]->Value = "Running";
		dataGridView1->Rows[i]->Cells[2]->Value = GetPriorityClass(processes[i].hProcess);
	}
}
private: System::Void stopAllProcesses(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < numberOfProcesses; i++) {
		SuspendThread(processes[i].hThread);
		dataGridView1->Rows[i]->Cells[3]->Value = "Suspended";
	}
}
private: System::Void endProcess(System::Object^ sender, System::EventArgs^ e) {
	int number = System::Convert::ToInt64(textBox3->Text);
	if (!TerminateProcess(processes[number - 1].hProcess, 2)) {
		return;
	}
	CloseHandle(processes[number - 1].hThread);
	CloseHandle(processes[number - 1].hProcess);
	dataGridView1->Rows[number - 1]->Cells[3]->Value = "Ended";
}
private: System::Void killProcess(System::Object^ sender, System::EventArgs^ e) {
	int number = System::Convert::ToInt64(textBox4->Text);
	if (!TerminateProcess(processes[number - 1].hProcess, 2)) {
		return;
	}
	CloseHandle(processes[number - 1].hThread);
	CloseHandle(processes[number - 1].hProcess);
	dataGridView1->Rows[number - 1]->Cells[3]->Value = "Killed";
}
private: System::Void endAllProcesses(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < numberOfProcesses; i++) {
		TerminateProcess(processes[i].hProcess, 2);
		CloseHandle(processes[i].hThread);
		CloseHandle(processes[i].hProcess);
		dataGridView1->Rows[i]->Cells[3]->Value = "Ended";
	}
}
private: System::Void killAllProcesses(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < numberOfProcesses; i++) {
		TerminateProcess(processes[i].hProcess, 2);
		CloseHandle(processes[i].hThread);
		CloseHandle(processes[i].hProcess);
		dataGridView1->Rows[i]->Cells[3]->Value = "Killed";
	}
}
private: System::Void changePriority(System::Object^ sender, System::EventArgs^ e) {
	int priorityArray[] = { IDLE_PRIORITY_CLASS, BELOW_NORMAL_PRIORITY_CLASS, NORMAL_PRIORITY_CLASS,
    ABOVE_NORMAL_PRIORITY_CLASS, HIGH_PRIORITY_CLASS, REALTIME_PRIORITY_CLASS };
	int number = System::Convert::ToInt64(textBox5->Text);
	int newPriority = System::Convert::ToInt64(textBox8->Text);
	if (!SetPriorityClass(processes[number - 1].hProcess, priorityArray[newPriority])) {
		return;
	}
	dataGridView1->Rows[number - 1]->Cells[2]->Value = GetPriorityClass(processes[number - 1].hProcess);
}
private: System::Void measureTime(System::Object^ sender, System::EventArgs^ e) {
	int handleCounter = 0;
	HANDLE* threadHandles = new HANDLE[numberOfProcesses];
	double start = GetTickCount64();
	for (int i = 0; i < numberOfProcesses; ++i) {
		threadHandles[handleCounter++] = processes[i].hThread;
		ResumeThread(processes[i].hThread);
		dataGridView1->Rows[i]->Cells[3]->Value = "Ended";
		dataGridView1->Rows[i]->Cells[2]->Value = GetPriorityClass(processes[i].hProcess);
	}
	WaitForMultipleObjects(handleCounter, threadHandles, TRUE, INFINITE);
	double finish = GetTickCount64();
	double exTime = (finish - start) * 0.001;
	textBox9->Text = System::Convert::ToString(exTime + " sec");
}
};
}
