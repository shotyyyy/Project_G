#include <Windows.h>
#include <iostream>
#include <cmath>
#include <string>
#include "Human.h"
#include "CalculationsDiets.h"
#include "DietApp.h"

// Подключение пространств имен для дальнейшего использования различных классов

using namespace System;
using namespace System::Windows::Forms;

// Запуск приложения DietApp

[STAThreadAttribute]
int main(cli::array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	DietApp::DietApp form;
	Application::Run(% form);
}