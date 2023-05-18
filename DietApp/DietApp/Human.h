#pragma once

#include <iostream>

// Подключение пространств имен

using namespace std;

class Human
{
protected:
	//параметры человека

	string genere;			//гендер
	string name;			//имя
	double weight;			//вес
	double height;			//рост
	string typeOfActivity;	//вид активности(малая(1200ккл), низкая(1375ккл), умеренная(1550ккл), тяжелая(1900ккл))
	double age;				//возраст

public:
	//конструкторы по умолчанияю

	Human();
	Human(string n, string g, double w, double h, string toa, double a);

	//получение информации каждого параметра и его вывод
	//гендер

	void setGenere(string g);
	string getGenere();

	//вес

	void setWeight(double w);
	double getWeight();

	//рост

	void setHeight(double h);
	double getHeight();

	//вид активности

	string clculatingActivity();
	void setActivity(string toa);
	string getActivity();

	//возраст

	void setAge(double a);
	double getAge();

	//имя

	void setName(string n);
	string getName();

	//перегрузка операторов ввода и вывода

	/*friend ostream& operator<<(ostream& os, Human& obj);
	friend istream& operator>>(istream& is, Human& obj);*/


};

