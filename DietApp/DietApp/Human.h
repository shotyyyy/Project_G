#pragma once

#include <iostream>

using namespace std;

class Human
{
protected:
	//параметры человека

	string genere;			//гендер
	string name;			//им€
	double weight;			//вес
	double height;			//рост
	string typeOfActivity;	//вид активности(мала€(1200ккл), низка€(1375ккл), умеренна€(1550ккл), т€жела€(1900ккл))
	double age;				//возраст

public:
	//конструкторы по умолчани€ю

	Human();
	Human(string n, string g, double w, double h, string toa, double a);

	//получение информации каждого параметра и его вывод
	//гнедер

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

	//им€

	void setName(string n);
	string getName();

	//перегрузка операторов ввода и вывода

	friend ostream& operator<<(ostream& os, Human& obj);
	friend istream& operator>>(istream& is, Human& obj);


};

