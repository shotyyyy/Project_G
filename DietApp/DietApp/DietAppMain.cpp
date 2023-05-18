#include <Windows.h>
#include <iostream>
#include <cmath>
#include <string>
#include "Human.h"
#include "CalculationsDiets.h"
#include "DietApp.h"

using namespace System;
using namespace System::Windows::Forms;



//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	Human man("Ivan", "мужской", 70, 170, "средн€€", 19);
//	Diet kk1;
//	//double a = kk1.KklaPerDay(&man);
//	//cout << a;
//	//kk1.getInfoRitionalDiet();
//	cout << kk1.KklaPerDay(&man);
//}



extern std::string ClientGender;
extern double ClientWeight, ClientHeight, ClientAge;



Human Client("им€", ClientGender, ClientWeight, ClientHeight, "средн€€", ClientAge);



[STAThreadAttribute]

int main(cli::array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	DietApp::DietApp form;
	Application::Run(% form);

	//Human Client("им€", ClientGender, ClientWeight, ClientHeight, "средн€€", ClientAge);

	
}