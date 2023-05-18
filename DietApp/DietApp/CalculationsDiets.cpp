#include "CalculationsDiets.h"

Diet::Diet()
{
	kkal = 0;
	human = nullptr;
}

double Diet::KklaPerDay(Human* h)
{
	double k; //����������� ����������

	//������� ������������ ����������

	if (h->getActivity() == "������") { k = 1.20; }
	else if (h->getActivity() == "�������") { k = 1.38; }
	else if (h->getActivity() == "���������") { k = 1.55; }

	//������� ���� � ����

	if ((h->getGenere() == "�������") || (h->getGenere() == "�������")) 
	{ 
		return ((66 + (13.7 * h->getWeight()) + (5 * h->getHeight()) - (6.8 * h->getAge())) * k);
	}

	else if ((h->getGenere() == "�������") || (h->getGenere() == "�������")) 
	{ 
		return ((655 + (9.6 * h->getWeight()) + (1.8 * h->getHeight()) - (4.7 * h->getAge())) * k);
	}
}

void Diet::getInfoRitionalDiet()
{
	////��� ��� ������ ����� ������� � ������ ������� �������� �� ������� ��������
	// 
	// 
	//�������� ���������� �� �����

	cout << "������������ ������� � ��� ������� ��������, ������� ��������� ��� ��������������� ����������� " << "\n" << "� �������������� ��������, �������� ����������� ���������(�����, ����, ��������, ��������, ��������, �������������, ������ �������� ��������) ����������� �� ������ � ��������, ���������� ���������� �.�." << endl;
	cout << endl;
	cout << "�������� ������� �� ���� ������������ � ������� �� �� ����, ����� ������, ����� �� ��������� ��������" << "\n" << "������� ������� � ���� ������� ��������� ��� ��������, �������� �� ����������� ���������� �������.������������ ������� �������� � ���� ���������������� �������.����������� �������� �������������� �������, ����� ����� ���� ���������� � ���������� � 4-5 ����� � ���� � �� �� �����. ������� ������ ���������� 25% ��������� �������, ���� � 35%, ������� � 15%, ���� � 25%. ������� ������� �� �������, ��� �� 3 ���� �� ���.";

}

// ������ ����������� ����/��������

double Diet::BMI(double h, double w)
{
	double bmi;
	bmi = w / ((h / 10) * (h / 10));

	if (bmi < 16.5) 
	{ 
		cout << "������� ���������� ����"; 
	}

	else if ((bmi >= 16.5) && (bmi <= 18.4)) 
	{ 
		cout << "���������� ����"; 
	}

	else if ((bmi >= 18.5) && (bmi <= 24.9)) 
	{ 
		cout << "���������� ��� ����"; 
	}

	else if ((bmi >= 25) && (bmi <= 30)) 
	{ 
		cout << "���������� ����� ����"; 
	}

	else if ((bmi >= 30.1) && (bmi <= 34.9)) 
	{ 
		cout << "��������(����� 1)"; 
	}

	else if ((bmi >= 35) && (bmi <= 40)) 
	{ 
		cout << "��������(����� 2)"; 
	}

	else if (bmi > 40) 
	{ 
		cout << "��������(����� 3)"; 
	}

	return bmi;
}

double Diet::foodIntake(double kkl)
{
	cout << "��� ����������� ����������� ������� � ���� ����� ���������� 55-60% ���������, ����� 15% ������ � ���� ������ ���������� ����� 30% �������� �������.";

	//�����

	double protein = kkl * 0.15;

	//����

	double fats = kkl * 0.30;

	//��������

	double carbs = kkl * 0.6;

	cout << "������ ������, ����� � ��������� � ����������� �� ����� ������� � ����:";
	cout << "����� = " << protein << endl;
	return protein;

	cout << "���� = " << fats << endl;
	return fats;

	cout << "�������� = " << carbs << endl;
	return carbs;

}

///������ ���� ����� ����-������ ��� �������----------------------------------------------------------------------------------------------------------------------------------------------------
//��� ������� ���� �� ������������� ������������ ���� "�� ���� � �������", ����� ����� ��������� ������� �� ������� ������� � ���� � ����� �������������� �������� � ���� ������� �� �����������
//� ����� ���������� �� ������� ��������� ���������� ���-�� ���, ������, ����� � ��������� ��� ���. ������ ��� �������� ������������� ���������� � �����������.
///---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

string Diet::training(double bmi)
{
	if ((bmi >= 18.5) && (bmi <= 24.9)) 
	{ 
		return string("� ��� ���������� ����� ����, ��� ����������� ������ ������� � ������� 15 - 20 ����� � ������ ������ ����� ���� � ����. ������� ���������� �����������: ��������(�������� �������, ������, ����� � ��������), ��������, ����������� ������, ����������"); 
	}

	else if ((bmi >= 25) && (bmi <= 30)) 
	{ 
		return string("� ��� ���������� ���. ������������� ������ ������� 15 - 20 ����� � ����, ������� ���������� �����������: ��������(�������� �������, ������, ����� � ��������), ��������, ����������� ������, ����������, ������ �� �������� 2 - 3 ���� � ������(��� ������ ����� ������� ������ ����������, � ��� �� ������ ������ ����� 2 ����� � ����.)"); 
	}

	else if ((bmi < 18.5) || (bmi > 30)) 
	{ 
		return string("� ��� ��������/���������� ����, ��� ������������� ���������� �� ����� �� �������������"); 
	}
}