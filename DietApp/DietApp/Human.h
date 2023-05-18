#pragma once

#include <iostream>

// ����������� ����������� ����

using namespace std;

class Human
{
protected:
	//��������� ��������

	string genere;			//������
	string name;			//���
	double weight;			//���
	double height;			//����
	string typeOfActivity;	//��� ����������(�����(1200���), ������(1375���), ���������(1550���), �������(1900���))
	double age;				//�������

public:
	//������������ �� ����������

	Human();
	Human(string n, string g, double w, double h, string toa, double a);

	//��������� ���������� ������� ��������� � ��� �����
	//������

	void setGenere(string g);
	string getGenere();

	//���

	void setWeight(double w);
	double getWeight();

	//����

	void setHeight(double h);
	double getHeight();

	//��� ����������

	string clculatingActivity();
	void setActivity(string toa);
	string getActivity();

	//�������

	void setAge(double a);
	double getAge();

	//���

	void setName(string n);
	string getName();

	//���������� ���������� ����� � ������

	/*friend ostream& operator<<(ostream& os, Human& obj);
	friend istream& operator>>(istream& is, Human& obj);*/


};

