#pragma once

#include <iostream>
#include <string>
#include "Human.h"

class Diet : public Human 
{
protected:
	Human* human;
	double kkal;

public:
	//конструкторы по умолчанию

	Diet();

	//рассчет ккал

	double KklaPerDay(Human* h);

	//информация о питании

	void getInfoRitionalDiet();

	//индекс массы тела

	double BMI(double h, double w);

	//что и сколько кушать(белки, жиры и углеводы)

	double foodIntake(double kkl);

	//упражнения 

	string training(double bmi);
};

