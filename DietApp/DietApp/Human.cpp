#include "Human.h"

// Подключение пространств имен

using namespace std;

Human::Human()
{
	genere = ""; weight = 0; height = 0; typeOfActivity = ""; age = 0; name = "";
}

Human::Human(string n, string g, double w, double h, string toa, double a)
{
	genere = g; weight = w; height = h; typeOfActivity = toa; age = a; name = n;
}

// геттеры и сэттеры
void Human::setGenere(string g) { genere = g; }

string Human::getGenere() { return genere; }

void Human::setWeight(double w) { weight = w; }

double Human::getWeight() { return weight; }

void Human::setHeight(double h) { height = h; }

double Human::getHeight() { return height; }

string Human::clculatingActivity() ///доделать исключения
{
	int onFootTime, peTime, whileWork, score;
	score = 0;

	/*cout << "При отсутсвии той или ной активности, ставте 0; все время вводится в минутах" << endl;
	cout << "Как долго вы ходите пешком в день? Введите значение: ";*/

	cin >> onFootTime; cout << endl;

	/*cout << "Сколько вы тратите времени на физкультурой в течении недели? Введите значение: ";*/

	cin >> peTime; cout << endl;

	/*cout << "Как долго вы находитесь в движении на работе(школа, университет и т.д.)? Введите значение: ";*/

	cin >> whileWork; cout << endl;

	//сколько ходит пешком

	if (onFootTime == 0) { score = score; }

	else if ((onFootTime > 0) && (onFootTime < 30)) { score += 1; }

	else if ((onFootTime >= 30) && (onFootTime <= 60)) { score += 2; }

	else if ((onFootTime >= 60) && (onFootTime <= 120)) { score += 3; }

	else if (onFootTime > 120) { score += 4; }

	//занятия физкультурой в неделю

	if (peTime == 0) { score = score; }

	else if ((peTime > 0) && (peTime < 30)) { score += 1; }

	else if ((peTime >= 30) && (peTime <= 60)) { score += 2; }

	else if ((peTime >= 60) && (peTime <= 120)) { score += 3; }

	else if (peTime > 120) { score += 4; }

	//активность на работе

	if (whileWork == 0) { score = score; }

	else if (whileWork > 0 && whileWork < 30) { score += 1; }

	else if (whileWork >= 30 && whileWork <= 60) { score += 2; }

	else if (whileWork >= 60 && whileWork <= 120) { score += 3; }

	else if (whileWork > 120) { score += 4; }

	//рассчет типа активности

	if (score < 6) { return "низкая"; }

	else if (score >= 6 && score <= 9) { return "средняя"; }

	else if (score >= 10 && score <= 12) { return "умеренная"; }

}

void Human::setActivity(string toa) { typeOfActivity = toa; }

string Human::getActivity() { return typeOfActivity; }

void Human::setAge(double a) { age = a; }

double Human::getAge() { return age; }

void Human::setName(string n) { name = n; }

string Human::getName() { return name; }

//реализация перегрузки функций ввода и вывода

/*ostream& operator<<(ostream& os, Human& obj)
{
	cout << "Введите значения параметров" << endl;
	os << "Ваше имя: " << obj.name << endl;
	os << "Ваш пол: " << obj.genere << endl;
	os << "Ваш возраст: " << obj.age << endl;
	os << "Ваш вес: " << obj.weight << ", ваш рост: " << obj.height << endl;
	os << "Ваш тип активоности: " << obj.typeOfActivity << endl;

	return os;
}*/

/*istream& operator>>(istream& is, human& obj)
{	
	cout << "введите значения параметров (все на кириллице)" << endl;
	cout << "как вас зовут? " << endl;
	is >> obj.name;
	cout << "ваш пол? " << endl;
	is >> obj.genere;
	cout << "сколько вам лет? " << endl;
	is >> obj.age;
	cout << "ваш вес? " << endl;
	is >> obj.weight;
	cout << "какой у вас рост? " << endl;
	is >> obj.height;
	cout << "насколько вы активный? выберити ваш тип активности " << endl;
	is >> obj.typeofactivity;

	return is;
}*/


