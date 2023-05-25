#include <iostream>
#include "DietApp.h"
#include "Human.h"
#include "CalculationsDiets.h"

// ����������� ����������� ���� ��� ����������� ������������� ��������� �������

using namespace System;
using namespace System::Windows::Forms;

// ���������� ���������� ��� �������� �� ������

double ClientAge = 0.0;
double ClientHeight = 0.0;
double ClientWeight = 0.0;
std::string ClientGender = "";
std::string ClientFirstName = "";
std::string ClientSecondName = "";
std::string ClientFullName = "";

// ���������� ������� ������� (Human, Diet)

Human Client;

Diet Results;

// ���������� ���������� ��� �������� �����������

double KkalPerDayRes, BMIRes, PrRes, FtRes, CbRes;
std::string TrRes;


inline DietApp::DietApp::DietApp(void)
{
	InitializeComponent(); // ������������� ��������� ��������� "����" (������, �����. ������� � �.�.)
	//
	//TODO: �������� ��� ������������
	//
}

inline DietApp::DietApp::~DietApp()
{
	if (components)
	{
		delete components;
	}
}

// �������� �������� ���� ����� (�������, �����, ������, ����(�����/������) � �.�.)

inline void DietApp::DietApp::InitializeComponent(void)
{
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DietApp::typeid));
	this->tabControlMain = (gcnew System::Windows::Forms::TabControl());
	this->tabPageIntroduction = (gcnew System::Windows::Forms::TabPage());
	this->linkLabelAboutUs = (gcnew System::Windows::Forms::LinkLabel());
	this->tabPageQuestions = (gcnew System::Windows::Forms::TabPage());
	this->numericUpDownWeight = (gcnew System::Windows::Forms::NumericUpDown());
	this->numericUpDownHeight = (gcnew System::Windows::Forms::NumericUpDown());
	this->numericUpDownAge = (gcnew System::Windows::Forms::NumericUpDown());
	this->buttonStart = (gcnew System::Windows::Forms::Button());
	this->radioButtonFemale = (gcnew System::Windows::Forms::RadioButton());
	this->radioButtonMale = (gcnew System::Windows::Forms::RadioButton());
	this->textBoxSecName = (gcnew System::Windows::Forms::TextBox());
	this->textBoxName = (gcnew System::Windows::Forms::TextBox());
	this->tabPageResults = (gcnew System::Windows::Forms::TabPage());
	this->Additionally = (gcnew System::Windows::Forms::Button());
	this->AboutFPC = (gcnew System::Windows::Forms::Button());
	this->AboutBMI = (gcnew System::Windows::Forms::Button());
	this->AboutNutrition = (gcnew System::Windows::Forms::Button());
	this->FinishResult = (gcnew System::Windows::Forms::TextBox());
	this->CarbohydratesResult = (gcnew System::Windows::Forms::TextBox());
	this->ProteinsResult = (gcnew System::Windows::Forms::TextBox());
	this->FatsResult = (gcnew System::Windows::Forms::TextBox());
	this->BMIResult = (gcnew System::Windows::Forms::TextBox());
	this->KkalDayResult = (gcnew System::Windows::Forms::TextBox());
	this->tabControlMain->SuspendLayout();
	this->tabPageIntroduction->SuspendLayout();
	this->tabPageQuestions->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWeight))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeight))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAge))->BeginInit();
	this->tabPageResults->SuspendLayout();
	this->SuspendLayout();
	// 
	// tabControlMain
	// 
	this->tabControlMain->Controls->Add(this->tabPageIntroduction);
	this->tabControlMain->Controls->Add(this->tabPageQuestions);
	this->tabControlMain->Controls->Add(this->tabPageResults);
	this->tabControlMain->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->tabControlMain->Location = System::Drawing::Point(-7, 1);
	this->tabControlMain->Name = L"tabControlMain";
	this->tabControlMain->SelectedIndex = 0;
	this->tabControlMain->Size = System::Drawing::Size(625, 594);
	this->tabControlMain->TabIndex = 0;
	// 
	// tabPageIntroduction
	// 
	this->tabPageIntroduction->BackColor = System::Drawing::Color::White;
	this->tabPageIntroduction->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPageIntroduction.BackgroundImage")));
	this->tabPageIntroduction->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->tabPageIntroduction->Controls->Add(this->linkLabelAboutUs);
	this->tabPageIntroduction->Location = System::Drawing::Point(4, 26);
	this->tabPageIntroduction->Name = L"tabPageIntroduction";
	this->tabPageIntroduction->Padding = System::Windows::Forms::Padding(3);
	this->tabPageIntroduction->Size = System::Drawing::Size(617, 564);
	this->tabPageIntroduction->TabIndex = 0;
	this->tabPageIntroduction->Text = L"��������";
	// 
	// linkLabelAboutUs
	// 
	this->linkLabelAboutUs->AutoSize = true;
	this->linkLabelAboutUs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(212)));
	this->linkLabelAboutUs->Location = System::Drawing::Point(489, 282);
	this->linkLabelAboutUs->Name = L"linkLabelAboutUs";
	this->linkLabelAboutUs->Size = System::Drawing::Size(113, 17);
	this->linkLabelAboutUs->TabIndex = 0;
	this->linkLabelAboutUs->TabStop = true;
	this->linkLabelAboutUs->Text = L"��������� � ���";
	this->linkLabelAboutUs->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &DietApp::linkLabel1_LinkClicked);
	// 
	// tabPageQuestions
	// 
	this->tabPageQuestions->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPageQuestions.BackgroundImage")));
	this->tabPageQuestions->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->tabPageQuestions->Controls->Add(this->numericUpDownWeight);
	this->tabPageQuestions->Controls->Add(this->numericUpDownHeight);
	this->tabPageQuestions->Controls->Add(this->numericUpDownAge);
	this->tabPageQuestions->Controls->Add(this->buttonStart);
	this->tabPageQuestions->Controls->Add(this->radioButtonFemale);
	this->tabPageQuestions->Controls->Add(this->radioButtonMale);
	this->tabPageQuestions->Controls->Add(this->textBoxSecName);
	this->tabPageQuestions->Controls->Add(this->textBoxName);
	this->tabPageQuestions->Location = System::Drawing::Point(4, 26);
	this->tabPageQuestions->Name = L"tabPageQuestions";
	this->tabPageQuestions->Padding = System::Windows::Forms::Padding(3);
	this->tabPageQuestions->Size = System::Drawing::Size(617, 564);
	this->tabPageQuestions->TabIndex = 1;
	this->tabPageQuestions->Text = L"������";
	this->tabPageQuestions->UseVisualStyleBackColor = true;
	// 
	// numericUpDownWeight
	// 
	this->numericUpDownWeight->Location = System::Drawing::Point(256, 66);
	this->numericUpDownWeight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
	this->numericUpDownWeight->Name = L"numericUpDownWeight";
	this->numericUpDownWeight->Size = System::Drawing::Size(165, 25);
	this->numericUpDownWeight->TabIndex = 12;
	this->numericUpDownWeight->ValueChanged += gcnew System::EventHandler(this, &DietApp::numericUpDownWeight_ValueChanged);
	// 
	// numericUpDownHeight
	// 
	this->numericUpDownHeight->Location = System::Drawing::Point(256, 152);
	this->numericUpDownHeight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
	this->numericUpDownHeight->Name = L"numericUpDownHeight";
	this->numericUpDownHeight->Size = System::Drawing::Size(165, 25);
	this->numericUpDownHeight->TabIndex = 11;
	this->numericUpDownHeight->ValueChanged += gcnew System::EventHandler(this, &DietApp::numericUpDownHeight_ValueChanged);
	// 
	// numericUpDownAge
	// 
	this->numericUpDownAge->Location = System::Drawing::Point(36, 245);
	this->numericUpDownAge->Name = L"numericUpDownAge";
	this->numericUpDownAge->Size = System::Drawing::Size(165, 25);
	this->numericUpDownAge->TabIndex = 10;
	this->numericUpDownAge->ValueChanged += gcnew System::EventHandler(this, &DietApp::numericUpDownAge_ValueChanged);
	// 
	// buttonStart
	// 
	this->buttonStart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
		static_cast<System::Int32>(static_cast<System::Byte>(218)));
	this->buttonStart->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
	this->buttonStart->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.75F, System::Drawing::FontStyle::Bold));
	this->buttonStart->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->buttonStart->Location = System::Drawing::Point(36, 434);
	this->buttonStart->Name = L"buttonStart";
	this->buttonStart->Size = System::Drawing::Size(213, 59);
	this->buttonStart->TabIndex = 7;
	this->buttonStart->Text = L"���������";
	this->buttonStart->UseVisualStyleBackColor = false;
	this->buttonStart->Click += gcnew System::EventHandler(this, &DietApp::buttonStart_Click);
	// 
	// radioButtonFemale
	// 
	this->radioButtonFemale->AutoSize = true;
	this->radioButtonFemale->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->radioButtonFemale->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->radioButtonFemale->Location = System::Drawing::Point(100, 348);
	this->radioButtonFemale->Name = L"radioButtonFemale";
	this->radioButtonFemale->Size = System::Drawing::Size(83, 21);
	this->radioButtonFemale->TabIndex = 6;
	this->radioButtonFemale->TabStop = true;
	this->radioButtonFemale->Text = L"�������";
	this->radioButtonFemale->UseVisualStyleBackColor = true;
	this->radioButtonFemale->CheckedChanged += gcnew System::EventHandler(this, &DietApp::radioButtonFemale_CheckedChanged);
	// 
	// radioButtonMale
	// 
	this->radioButtonMale->AutoSize = true;
	this->radioButtonMale->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->radioButtonMale->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->radioButtonMale->Location = System::Drawing::Point(100, 321);
	this->radioButtonMale->Name = L"radioButtonMale";
	this->radioButtonMale->Size = System::Drawing::Size(85, 21);
	this->radioButtonMale->TabIndex = 5;
	this->radioButtonMale->TabStop = true;
	this->radioButtonMale->Text = L"�������";
	this->radioButtonMale->UseVisualStyleBackColor = true;
	this->radioButtonMale->CheckedChanged += gcnew System::EventHandler(this, &DietApp::radioButtonMale_CheckedChanged);
	// 
	// textBoxSecName
	// 
	this->textBoxSecName->Location = System::Drawing::Point(36, 152);
	this->textBoxSecName->Name = L"textBoxSecName";
	this->textBoxSecName->Size = System::Drawing::Size(165, 25);
	this->textBoxSecName->TabIndex = 1;
	this->textBoxSecName->TextChanged += gcnew System::EventHandler(this, &DietApp::textBoxSecName_TextChanged);
	// 
	// textBoxName
	// 
	this->textBoxName->Location = System::Drawing::Point(36, 66);
	this->textBoxName->Name = L"textBoxName";
	this->textBoxName->Size = System::Drawing::Size(165, 25);
	this->textBoxName->TabIndex = 0;
	this->textBoxName->TextChanged += gcnew System::EventHandler(this, &DietApp::textBoxName_TextChanged);
	// 
	// tabPageResults
	// 
	this->tabPageResults->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPageResults.BackgroundImage")));
	this->tabPageResults->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->tabPageResults->Controls->Add(this->Additionally);
	this->tabPageResults->Controls->Add(this->AboutFPC);
	this->tabPageResults->Controls->Add(this->AboutBMI);
	this->tabPageResults->Controls->Add(this->AboutNutrition);
	this->tabPageResults->Controls->Add(this->FinishResult);
	this->tabPageResults->Controls->Add(this->CarbohydratesResult);
	this->tabPageResults->Controls->Add(this->ProteinsResult);
	this->tabPageResults->Controls->Add(this->FatsResult);
	this->tabPageResults->Controls->Add(this->BMIResult);
	this->tabPageResults->Controls->Add(this->KkalDayResult);
	this->tabPageResults->Location = System::Drawing::Point(4, 26);
	this->tabPageResults->Name = L"tabPageResults";
	this->tabPageResults->Size = System::Drawing::Size(617, 564);
	this->tabPageResults->TabIndex = 2;
	this->tabPageResults->Text = L"����������";
	this->tabPageResults->UseVisualStyleBackColor = true;
	// 
	// Additionally
	// 
	this->Additionally->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
	this->Additionally->Location = System::Drawing::Point(15, 487);
	this->Additionally->Name = L"Additionally";
	this->Additionally->Size = System::Drawing::Size(96, 24);
	this->Additionally->TabIndex = 9;
	this->Additionally->Text = L"�������������";
	this->Additionally->UseVisualStyleBackColor = true;
	this->Additionally->Click += gcnew System::EventHandler(this, &DietApp::Additionally_Click);
	// 
	// AboutFPC
	// 
	this->AboutFPC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
	this->AboutFPC->Location = System::Drawing::Point(134, 397);
	this->AboutFPC->Name = L"AboutFPC";
	this->AboutFPC->Size = System::Drawing::Size(67, 20);
	this->AboutFPC->TabIndex = 8;
	this->AboutFPC->Text = L"� ���";
	this->AboutFPC->UseVisualStyleBackColor = true;
	this->AboutFPC->Click += gcnew System::EventHandler(this, &DietApp::AboutFPC_Click);
	// 
	// AboutBMI
	// 
	this->AboutBMI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
	this->AboutBMI->Location = System::Drawing::Point(284, 242);
	this->AboutBMI->Name = L"AboutBMI";
	this->AboutBMI->Size = System::Drawing::Size(67, 21);
	this->AboutBMI->TabIndex = 7;
	this->AboutBMI->Text = L"� BMI";
	this->AboutBMI->UseVisualStyleBackColor = true;
	this->AboutBMI->Click += gcnew System::EventHandler(this, &DietApp::AboutBMI_Click);
	// 
	// AboutNutrition
	// 
	this->AboutNutrition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
	this->AboutNutrition->Location = System::Drawing::Point(284, 126);
	this->AboutNutrition->Name = L"AboutNutrition";
	this->AboutNutrition->Size = System::Drawing::Size(67, 21);
	this->AboutNutrition->TabIndex = 6;
	this->AboutNutrition->Text = L"� �������";
	this->AboutNutrition->UseVisualStyleBackColor = true;
	this->AboutNutrition->Click += gcnew System::EventHandler(this, &DietApp::AboutNutrition_Click);
	// 
	// FinishResult
	// 
	this->FinishResult->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
	this->FinishResult->Location = System::Drawing::Point(134, 440);
	this->FinishResult->Multiline = true;
	this->FinishResult->Name = L"FinishResult";
	this->FinishResult->ReadOnly = true;
	this->FinishResult->ScrollBars = System::Windows::Forms::ScrollBars::Both;
	this->FinishResult->Size = System::Drawing::Size(441, 109);
	this->FinishResult->TabIndex = 5;
	this->FinishResult->TextChanged += gcnew System::EventHandler(this, &DietApp::FinishResult_TextChanged);
	// 
	// CarbohydratesResult
	// 
	this->CarbohydratesResult->Location = System::Drawing::Point(134, 371);
	this->CarbohydratesResult->Multiline = true;
	this->CarbohydratesResult->Name = L"CarbohydratesResult";
	this->CarbohydratesResult->ReadOnly = true;
	this->CarbohydratesResult->Size = System::Drawing::Size(144, 20);
	this->CarbohydratesResult->TabIndex = 4;
	this->CarbohydratesResult->TextChanged += gcnew System::EventHandler(this, &DietApp::CarbohydratesResult_TextChanged);
	// 
	// ProteinsResult
	// 
	this->ProteinsResult->Location = System::Drawing::Point(134, 345);
	this->ProteinsResult->Multiline = true;
	this->ProteinsResult->Name = L"ProteinsResult";
	this->ProteinsResult->ReadOnly = true;
	this->ProteinsResult->Size = System::Drawing::Size(144, 20);
	this->ProteinsResult->TabIndex = 3;
	this->ProteinsResult->TextChanged += gcnew System::EventHandler(this, &DietApp::ProteinsResult_TextChanged);
	// 
	// FatsResult
	// 
	this->FatsResult->Location = System::Drawing::Point(134, 319);
	this->FatsResult->Multiline = true;
	this->FatsResult->Name = L"FatsResult";
	this->FatsResult->ReadOnly = true;
	this->FatsResult->Size = System::Drawing::Size(144, 20);
	this->FatsResult->TabIndex = 2;
	this->FatsResult->TextChanged += gcnew System::EventHandler(this, &DietApp::FatsResult_TextChanged);
	// 
	// BMIResult
	// 
	this->BMIResult->Location = System::Drawing::Point(134, 243);
	this->BMIResult->Multiline = true;
	this->BMIResult->Name = L"BMIResult";
	this->BMIResult->ReadOnly = true;
	this->BMIResult->Size = System::Drawing::Size(144, 20);
	this->BMIResult->TabIndex = 1;
	this->BMIResult->TextChanged += gcnew System::EventHandler(this, &DietApp::BMIResult_TextChanged);
	// 
	// KkalDayResult
	// 
	this->KkalDayResult->Location = System::Drawing::Point(134, 127);
	this->KkalDayResult->Multiline = true;
	this->KkalDayResult->Name = L"KkalDayResult";
	this->KkalDayResult->ReadOnly = true;
	this->KkalDayResult->Size = System::Drawing::Size(144, 20);
	this->KkalDayResult->TabIndex = 0;
	this->KkalDayResult->TextChanged += gcnew System::EventHandler(this, &DietApp::KkalDayResult_TextChanged);
	// 
	// DietApp
	// 
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	this->BackColor = System::Drawing::Color::White;
	this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
	this->ClientSize = System::Drawing::Size(611, 588);
	this->Controls->Add(this->tabControlMain);
	this->Font = (gcnew System::Drawing::Font(L"Arial", 10));
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
	this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
	this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
	this->Name = L"DietApp";
	this->Text = L"Diet App";
	this->Load += gcnew System::EventHandler(this, &DietApp::DietApp_Load);
	this->tabControlMain->ResumeLayout(false);
	this->tabPageIntroduction->ResumeLayout(false);
	this->tabPageIntroduction->PerformLayout();
	this->tabPageQuestions->ResumeLayout(false);
	this->tabPageQuestions->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWeight))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeight))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAge))->EndInit();
	this->tabPageResults->ResumeLayout(false);
	this->tabPageResults->PerformLayout();
	this->ResumeLayout(false);

}

// �������� ����������� ��� �����������

inline System::Void DietApp::DietApp::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	try
	{
		VisitLink();
	}

	catch (Exception^ ex)
	{
		MessageBox::Show("�� ������� ������� �� ������", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
}

// ���������� ������� �������� �� ������

inline void DietApp::DietApp::VisitLink()
{
	// ������ ���� ������ ����� �������� LinkVisited �� true (��������)
	
	linkLabelAboutUs->LinkVisited = true;
	
	// ����������� Process.Start ����� ����� ������� ������� �� ��������� � ������� �� ������
	
	System::Diagnostics::Process::Start("https://www.youtube.com/watch?v=gQilGmLnRVU");
}

inline System::Void DietApp::DietApp::buttonStart_Click(System::Object^ sender, System::EventArgs^ e) 
{
	// �������� �� ������ ������ ������

	if ((numericUpDownAge->Text == "") || (numericUpDownHeight->Text == "") || (numericUpDownWeight->Text == "") || (textBoxName->Text == "") || (textBoxSecName->Text == ""))
	{
		MessageBox::Show("������� �� ��� ��������/��������� �������� �����������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// ������ �� ������ (�������, ����, ���)

	ClientAge = System::Convert::ToDouble(numericUpDownAge->Text);
	ClientHeight = System::Convert::ToDouble(numericUpDownHeight->Text);
	ClientWeight = System::Convert::ToDouble(numericUpDownWeight->Text);
	Convert_String_to_string(textBoxName->Text, ClientFirstName);
	Convert_String_to_string(textBoxSecName->Text, ClientSecondName);
	ClientFullName = ClientFirstName + " " + ClientSecondName;

	// �������� �� ���� ������������ �������� (���/�������)

	if (!containsOnlyLetters(ClientFirstName) || !containsOnlyLetters(ClientSecondName))
	{
		MessageBox::Show("� ���� ���/������� ������� ������������ �������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// ���������� ������� Client ������ Human

	Human Client("���", ClientGender, ClientWeight, ClientHeight, "�������", ClientAge);

	// ��������� �������� �� ������� ������ Human

	KkalPerDayRes = Results.KklaPerDay(&Client);

	BMIRes = Results.BMI(ClientHeight, ClientWeight);

	PrRes = KkalPerDayRes * 0.15;

	FtRes = KkalPerDayRes * 0.3;

	CbRes = KkalPerDayRes * 0.6;

	TrRes = Results.training(BMIRes);

	// �������� (������� �� ��� ������)

	if ((ClientAge == 0.0) || (ClientHeight == 0.0) || (ClientWeight == 0.0) || (ClientFirstName == "") || (ClientSecondName == "") || (ClientGender == ""))
	{
		MessageBox::Show("������� �� ��� ��������/��������� �������� �����������!", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// ����� ����������� ����� ������� (ShowResult)

	ShowResult(KkalPerDayRes, BMIRes, FtRes, PrRes, CbRes, TrRes);

}

inline System::Void DietApp::DietApp::textBoxName_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	
}

inline System::Void DietApp::DietApp::textBoxSecName_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}

inline System::Void DietApp::DietApp::textBoxAge_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}

// ���������� ������ ������ 

inline System::Void DietApp::DietApp::radioButtonMale_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	// ������ �� ������ (���: �������)

	ClientGender = "�������";
}

inline System::Void DietApp::DietApp::radioButtonFemale_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	// ������ �� ������ (���: �������)

	ClientGender = "�������";
}

inline System::Void DietApp::DietApp::KkalDayResult_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}

inline System::Void DietApp::DietApp::BMIResult_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}

inline System::Void DietApp::DietApp::FatsResult_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}

inline System::Void DietApp::DietApp::ProteinsResult_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}

inline System::Void DietApp::DietApp::CarbohydratesResult_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}

inline System::Void DietApp::DietApp::FinishResult_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}

inline System::Void DietApp::DietApp::numericUpDownAge_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
{

}

inline System::Void DietApp::DietApp::numericUpDownHeight_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
{

}

inline System::Void DietApp::DietApp::numericUpDownWeight_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
{

}

// ���������� ������� ������ ����������� � �����

inline void DietApp::DietApp::ShowResult(double kRes, double bmiRes, double prRes, double ftRes, double cbRes, std::string trRes) 
{
	// ����� ����������� � ��������� ���� ����� 

	KkalDayResult->Text = System::Convert::ToString(kRes);

	BMIResult->Text = System::Convert::ToString(bmiRes);

	FatsResult->Text = System::Convert::ToString(ftRes);

	ProteinsResult->Text = System::Convert::ToString(prRes);

	CarbohydratesResult->Text = System::Convert::ToString(cbRes);

	String^ s = "";

	FinishResult->Text = Convert_string_to_String(trRes, s);
}

// ���������� ������� �����������

// ����������� �� System::string ^ � std::string 

std::string& DietApp::DietApp::Convert_String_to_string(String^ s, std::string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

// ����������� �� std::string � System::string ^

String^ DietApp::DietApp::Convert_string_to_String(std::string& os, String^ s)
{
	s = gcnew System::String(os.c_str()); // �����������

	return s;
}

// ������� ������ "�����" � �����������

// "����: � �������" 

inline System::Void DietApp::DietApp::AboutNutrition_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("������������ ������� �������� � ���� ���������� ������ �������.\n\n"
					 "����������� �������� �������������� �������, ����� ����� ���� ���������� � ���������� � 4 - 5 ����� � ���� � �� �� �����.\n\n"
					 "������� ������ ���������� 25 % ��������� �������, ���� � 35 %, ������� � 15 %, ���� � 25 % .\n\n"
					 "������� ������� �� �������, ��� �� 3 ���� �� ���.\n\n"
					 "��� ����������� ����������� ������� � ���� ����� ���������� 55-60% ���������, ����� 15% ������ � ���� ������ ���������� ����� 30% �������� �������.", "� �������", MessageBoxButtons::OK);
	return;
}

// "����: � BMI" 

inline System::Void DietApp::DietApp::AboutBMI_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("BMI:\n\n"
					 "������ 16.5   -->   ������� ���������� ���� !\n\n"
					 "�� 16.5 �� 18.4   -->   ���������� ���� !\n\n"
					 "�� 18.5 �� 24.9   -->   ���������� ��� ���� !\n\n"
					 "�� 25 �� 30   -->   ���������� ����� ���� !\n\n"
					 "�� 30.1 �� 34.9   -->   ��������(����� 1) !\n\n"
					 "�� 35 �� 40   -->   ��������(����� 2) !\n\n"
					 "������ 40  -->   ��������(����� 3) !", "� BMI", MessageBoxButtons::OK);
	return;
}

// "����: � ���" 

inline System::Void DietApp::DietApp::AboutFPC_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("����:\n\n"
					 "���� � ����� ����������� �������������. ��� �������� ��������� � ������������ ��������, �������� ����������, ��������� �����, �������� �� ������ � �����������.\n\n"
					 "�����:\n\n"
					 "����� ������� �� ����������� ������� ����������� � �������������� ������� ��� ���� ��������. � ��������� ������������ �������� ����� �����������, ������ �� ������� �� ����� ���� ������������� ����� �������� � ������ ��������� �� ��� (����������� ������������).\n\n"
					 "��������:\n\n"
					 "�������� � ������� ���������� ������� ��� ���������� � ���������� ����������. ��������� ������� (�������, ��������, ���������, �������� � ��.) � ������� �������� (��������, ������� �������).", "� ���", MessageBoxButtons::OK);
	return;
}

// "����: �������������" 

inline System::Void DietApp::DietApp::Additionally_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("��� ������� ���� �� ������������� ������������ ����� �� ����� � ��������, ����� ����� ��������� ������� �� ������� ������� � ���� � ����� �������������� �������� � ���� ������� �� �����������\n\n"
					 "��� �������� ������������� ���������� � �����������.", "�������������", MessageBoxButtons::OK);
	return;
}

// ������� �������� ������ �� ������� ������������ ��������

inline bool DietApp::DietApp::containsOnlyLetters(std::string const& str)
{
	return str.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ����������������������������������������������������������������ި") == std::string::npos;
}