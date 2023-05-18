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
	//������������ �� ���������

	Diet();

	//������� ����

	double KklaPerDay(Human* h);

	//���������� � �������

	void getInfoRitionalDiet();

	//������ ����� ����

	double BMI(double h, double w);

	//��� � ������� ������(�����, ���� � ��������)

	double foodIntake(double kkl);

	//���������� 

	string training(double bmi);
};

