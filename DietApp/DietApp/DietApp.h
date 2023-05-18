#pragma once

namespace DietApp {

	// Подключение пространств имен для дальнейшего использования различных классов

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для DietApp
	/// </summary>
	 
	// Создание класса (DietApp)
	
	public ref class DietApp : public System::Windows::Forms::Form 
	{
	public:

		DietApp(void); // Конструктор

	protected:

		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>

		~DietApp(); // Деструктор

	private: System::Windows::Forms::TabControl^ tabControlMain;

	private: System::Windows::Forms::TabPage^ tabPageIntroduction;

	private: System::Windows::Forms::TabPage^ tabPageQuestions;

	private: System::Windows::Forms::TabPage^ tabPageResults;

	private: System::Windows::Forms::RadioButton^ radioButtonFemale;

	private: System::Windows::Forms::RadioButton^ radioButtonMale;

	private: System::Windows::Forms::TextBox^ textBoxSecName;

	private: System::Windows::Forms::TextBox^ textBoxName;

	private: System::Windows::Forms::Button^ buttonStart;

	private: System::Windows::Forms::LinkLabel^ linkLabelAboutUs;

	private: System::Windows::Forms::TextBox^ FinishResult;

	private: System::Windows::Forms::TextBox^ CarbohydratesResult;

	private: System::Windows::Forms::TextBox^ ProteinsResult;

	private: System::Windows::Forms::TextBox^ FatsResult;

	private: System::Windows::Forms::TextBox^ BMIResult;

	private: System::Windows::Forms::TextBox^ KkalDayResult;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownAge;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeight;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownWeight;

	private: System::ComponentModel::IContainer^ components;

	private:

		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code

		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		
		void InitializeComponent(void);

#pragma endregion
	
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

	private: void VisitLink();

	//private: System::Void toolTipResultsPage_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) 
	//{
	//	toolTip->SetToolTip(linkLabelAboutUs, "В нашем приложении");
	//	toolTip->IsBalloon = true;
	//}

	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBoxName_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBoxSecName_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void textBoxAge_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void radioButtonMale_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void radioButtonFemale_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void KkalDayResult_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void BMIResult_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void FatsResult_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ProteinsResult_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void CarbohydratesResult_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void FinishResult_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void numericUpDownAge_ValueChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void numericUpDownHeight_ValueChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void numericUpDownWeight_ValueChanged(System::Object^ sender, System::EventArgs^ e);

	private: void ShowResult(double res);

	};
}
