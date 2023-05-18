#include "Human.h"

using namespace std;

Human::Human()
{
	genere = ""; weight = 0; height = 0; typeOfActivity = ""; age = 0; name = "";
}

Human::Human(string n, string g, double w, double h, string toa, double a)
{
	genere = g; weight = w; height = h; typeOfActivity = toa; age = a; name = n;
}

// ������� � �������
void Human::setGenere(string g) { genere = g; }

string Human::getGenere() { return genere; }

void Human::setWeight(double w) { weight = w; }

double Human::getWeight() { return weight; }

void Human::setHeight(double h) { height = h; }

double Human::getHeight() { return height; }

string Human::clculatingActivity() ///�������� ����������
{
	int onFootTime, peTime, whileWork, score;
	score = 0;

	cout << "��� ��������� ��� ��� ��� ����������, ������ 0; ��� ����� �������� � �������" << endl;
	cout << "��� ����� �� ������ ������ � ����? ������� ��������: "; cin >> onFootTime; cout << endl;
	cout << "������� �� ������� ������� �� ������������ � ������� ������? ������� ��������: "; cin >> peTime; cout << endl;
	cout << "��� ����� �� ���������� � �������� �� ������(�����, ����������� � �.�.)? ������� ��������: "; cin >> whileWork; cout << endl;

	//������� ����� ������

	if (onFootTime == 0) 
	{ 
		score = score; 
	
	}

	else if ((onFootTime > 0) && (onFootTime < 30)) 
	{ 
		score += 1; 
	}

	else if ((onFootTime >= 30) && (onFootTime <= 60)) 
	{ 
		score += 2; 
	}

	else if ((onFootTime >= 60) && (onFootTime <= 120)) 
	{ 
		score += 3; 
	}

	else if (onFootTime > 120) 
	{ 
		score += 4; 
	}

	//������� ������������ � ������

	if (peTime == 0) 
	{ 
		score = score; 
	}

	else if ((peTime > 0) && (peTime < 30)) 
	{ 
		score += 1; 
	}

	else if ((peTime >= 30) && (peTime <= 60)) 
	{ 
		score += 2; 
	}

	else if ((peTime >= 60) && (peTime <= 120)) 
	{ 
		score += 3; 
	}

	else if (peTime > 120) 
	{ 
		score += 4; 
	}

	//���������� �� ������

	if (whileWork == 0) { score = score; }
	else if (whileWork > 0 && whileWork < 30) { score += 1; }
	else if (whileWork >= 30 && whileWork <= 60) { score += 2; }
	else if (whileWork >= 60 && whileWork <= 120) { score += 3; }
	else if (whileWork > 120) { score += 4; }

	//������� ���� ����������

	if (score < 6) { return "������"; }
	else if (score >= 6 && score <= 9) { return "�������"; }
	else if (score >= 10 && score <= 12) { return "���������"; }

}

void Human::setActivity(string toa) { typeOfActivity = toa; }

string Human::getActivity() { return typeOfActivity; }

void Human::setAge(double a) { age = a; }

double Human::getAge() { return age; }

void Human::setName(string n) { name = n; }

string Human::getName() { return name; }

//���������� ���������� ������� ����� � ������

ostream& operator<<(ostream& os, Human& obj)
{
	cout << "������� �������� ����������" << endl;
	os << "���� ���: " << obj.name << endl;
	os << "��� ���: " << obj.genere << endl;
	os << "��� �������: " << obj.age << endl;
	os << "��� ���: " << obj.weight << ", ��� ����: " << obj.height << endl;
	os << "��� ��� �����������: " << obj.typeOfActivity << endl;

	return os;
}

istream& operator>>(istream& is, Human& obj)
{	
	cout << "������� �������� ���������� (��� �� ���������)" << endl;
	cout << "��� ��� �����? " << endl;
	is >> obj.name;
	cout << "��� ���? " << endl;
	is >> obj.genere;
	cout << "������� ��� ���? " << endl;
	is >> obj.age;
	cout << "��� ���? " << endl;
	is >> obj.weight;
	cout << "����� � ��� ����? " << endl;
	is >> obj.height;
	cout << "��������� �� ��������? �������� ��� ��� ���������� " << endl;
	is >> obj.typeOfActivity;

	return is;
}


