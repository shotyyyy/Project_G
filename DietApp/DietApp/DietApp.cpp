#include <iostream>
#include "DietApp.h"
#include "Human.h"
#include "CalculationsDiets.h"

using namespace System;
using namespace System::Windows::Forms;



//[STAThreadAttribute]
//
//int main(array<String^>^ args)
//{
//	Application::SetCompatibleTextRenderingDefault(false);
//	Application::EnableVisualStyles();
//	DietApp::DietApp form;
//	Application::Run(% form);
//}



double ClientAge = 0.0;
double ClientHeight = 0.0;
double ClientWeight = 0.0;
std::string ClientGender = "";



extern Human Client;



inline DietApp::DietApp::DietApp(void)
{
	InitializeComponent(); // Инициализация различных элементов "окна" (кнопки, текст. надписи и т.д.)
	//
	//TODO: добавьте код конструктора
	//
}

inline DietApp::DietApp::~DietApp()
{
	if (components)
	{
		delete components;
	}
}

inline void DietApp::DietApp::InitializeComponent(void)
{
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DietApp::typeid));
	this->tabControlMain = (gcnew System::Windows::Forms::TabControl());
	this->tabPageIntroduction = (gcnew System::Windows::Forms::TabPage());
	this->linkLabelAboutUs = (gcnew System::Windows::Forms::LinkLabel());
	this->tabPageQuestions = (gcnew System::Windows::Forms::TabPage());
	this->numericUpDownAge = (gcnew System::Windows::Forms::NumericUpDown());
	this->buttonStart = (gcnew System::Windows::Forms::Button());
	this->radioButtonFemale = (gcnew System::Windows::Forms::RadioButton());
	this->radioButtonMale = (gcnew System::Windows::Forms::RadioButton());
	this->textBoxSecName = (gcnew System::Windows::Forms::TextBox());
	this->textBoxName = (gcnew System::Windows::Forms::TextBox());
	this->tabPageResults = (gcnew System::Windows::Forms::TabPage());
	this->FinishResult = (gcnew System::Windows::Forms::TextBox());
	this->CarbohydratesResult = (gcnew System::Windows::Forms::TextBox());
	this->ProteinsResult = (gcnew System::Windows::Forms::TextBox());
	this->FatsResult = (gcnew System::Windows::Forms::TextBox());
	this->BMIResult = (gcnew System::Windows::Forms::TextBox());
	this->KkalDayResult = (gcnew System::Windows::Forms::TextBox());
	this->numericUpDownHeight = (gcnew System::Windows::Forms::NumericUpDown());
	this->numericUpDownWeight = (gcnew System::Windows::Forms::NumericUpDown());
	this->tabControlMain->SuspendLayout();
	this->tabPageIntroduction->SuspendLayout();
	this->tabPageQuestions->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAge))->BeginInit();
	this->tabPageResults->SuspendLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeight))->BeginInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWeight))->BeginInit();
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
	this->tabPageIntroduction->Text = L"Описание";
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
	this->linkLabelAboutUs->Text = L"Подробнее о нас";
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
	this->tabPageQuestions->Text = L"Анкета";
	this->tabPageQuestions->UseVisualStyleBackColor = true;
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
	this->buttonStart->Text = L"Применить";
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
	this->radioButtonFemale->Text = L"Женский";
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
	this->radioButtonMale->Text = L"Мужской";
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
	this->tabPageResults->Text = L"Результаты";
	this->tabPageResults->UseVisualStyleBackColor = true;
	// 
	// FinishResult
	// 
	this->FinishResult->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F));
	this->FinishResult->Location = System::Drawing::Point(134, 440);
	this->FinishResult->Multiline = true;
	this->FinishResult->Name = L"FinishResult";
	this->FinishResult->Size = System::Drawing::Size(144, 37);
	this->FinishResult->TabIndex = 5;
	this->FinishResult->TextChanged += gcnew System::EventHandler(this, &DietApp::FinishResult_TextChanged);
	// 
	// CarbohydratesResult
	// 
	this->CarbohydratesResult->Location = System::Drawing::Point(134, 371);
	this->CarbohydratesResult->Multiline = true;
	this->CarbohydratesResult->Name = L"CarbohydratesResult";
	this->CarbohydratesResult->Size = System::Drawing::Size(144, 20);
	this->CarbohydratesResult->TabIndex = 4;
	this->CarbohydratesResult->TextChanged += gcnew System::EventHandler(this, &DietApp::CarbohydratesResult_TextChanged);
	// 
	// ProteinsResult
	// 
	this->ProteinsResult->Location = System::Drawing::Point(134, 345);
	this->ProteinsResult->Multiline = true;
	this->ProteinsResult->Name = L"ProteinsResult";
	this->ProteinsResult->Size = System::Drawing::Size(144, 20);
	this->ProteinsResult->TabIndex = 3;
	this->ProteinsResult->TextChanged += gcnew System::EventHandler(this, &DietApp::ProteinsResult_TextChanged);
	// 
	// FatsResult
	// 
	this->FatsResult->Location = System::Drawing::Point(134, 319);
	this->FatsResult->Multiline = true;
	this->FatsResult->Name = L"FatsResult";
	this->FatsResult->Size = System::Drawing::Size(144, 20);
	this->FatsResult->TabIndex = 2;
	this->FatsResult->TextChanged += gcnew System::EventHandler(this, &DietApp::FatsResult_TextChanged);
	// 
	// BMIResult
	// 
	this->BMIResult->Location = System::Drawing::Point(134, 243);
	this->BMIResult->Multiline = true;
	this->BMIResult->Name = L"BMIResult";
	this->BMIResult->Size = System::Drawing::Size(144, 20);
	this->BMIResult->TabIndex = 1;
	this->BMIResult->TextChanged += gcnew System::EventHandler(this, &DietApp::BMIResult_TextChanged);
	// 
	// KkalDayResult
	// 
	this->KkalDayResult->Location = System::Drawing::Point(134, 127);
	this->KkalDayResult->Multiline = true;
	this->KkalDayResult->Name = L"KkalDayResult";
	this->KkalDayResult->Size = System::Drawing::Size(144, 20);
	this->KkalDayResult->TabIndex = 0;
	this->KkalDayResult->TextChanged += gcnew System::EventHandler(this, &DietApp::KkalDayResult_TextChanged);
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
	// numericUpDownWeight
	// 
	this->numericUpDownWeight->Location = System::Drawing::Point(256, 66);
	this->numericUpDownWeight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
	this->numericUpDownWeight->Name = L"numericUpDownWeight";
	this->numericUpDownWeight->Size = System::Drawing::Size(165, 25);
	this->numericUpDownWeight->TabIndex = 12;
	this->numericUpDownWeight->ValueChanged += gcnew System::EventHandler(this, &DietApp::numericUpDownWeight_ValueChanged);
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
	this->tabControlMain->ResumeLayout(false);
	this->tabPageIntroduction->ResumeLayout(false);
	this->tabPageIntroduction->PerformLayout();
	this->tabPageQuestions->ResumeLayout(false);
	this->tabPageQuestions->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAge))->EndInit();
	this->tabPageResults->ResumeLayout(false);
	this->tabPageResults->PerformLayout();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeight))->EndInit();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWeight))->EndInit();
	this->ResumeLayout(false);

}

inline System::Void DietApp::DietApp::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	try
	{
		VisitLink();
	}

	catch (Exception^ ex)
	{
		MessageBox::Show("Не удалось перейти по ссылке", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
}

inline void DietApp::DietApp::VisitLink()
{
	// Меняем цвет ссылки через параметр LinkVisited на true (посещена)
	
	linkLabelAboutUs->LinkVisited = true;
	
	// Запрашиваем Process.Start метод чтобы открыть браузер по умолчанию и перейти по ссылке
	
	System::Diagnostics::Process::Start("https://www.youtube.com/watch?v=gQilGmLnRVU");
}

inline System::Void DietApp::DietApp::buttonStart_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ ClientName = "";

	// Данные из анкеты (возраст, рост, вес)

	ClientAge = System::Convert::ToDouble(numericUpDownAge->Value);
	ClientHeight = System::Convert::ToDouble(numericUpDownHeight->Value);
	ClientWeight = System::Convert::ToDouble(numericUpDownWeight->Value);
	ClientName = System::Convert::ToString(textBoxName->Text) + " " + System::Convert::ToString(textBoxSecName->Text);

	// Проверка (введены ли все данные)

	if ((ClientAge == 0.0) || (ClientHeight == 0.0) || (ClientWeight == 0.0) || (ClientName == "") || (ClientGender == ""))
	{
		MessageBox::Show("Введены не все значения/Введенные значения некорректны!", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Выводим результаты

	/*KkalDayResult->Text = gcnew String(Client.clculatingActivity(KkalDayResult).c_str();*/

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

inline System::Void DietApp::DietApp::radioButtonMale_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	// Данные из анкеты (пол: мужской)

	ClientGender = "Мужской";
}

inline System::Void DietApp::DietApp::radioButtonFemale_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	// Данные из анкеты (пол: женский)

	ClientGender = "Женский";
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

inline void DietApp::DietApp::ShowResult(double res) 
{
	
}
