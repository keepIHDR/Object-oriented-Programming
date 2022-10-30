#include "triangle.h"
#include <cmath>
#include <iostream>

using namespace std;

void triangle::set_a(double _a) {
	a = _a;
}

void triangle::set_b(double _b) {
	b = _b;
}

void triangle::set_c(double _c) {
	c = _c;
}

void triangle::PrintInformation() {
	cout << ">> �������ε���Ϣ����: " << endl;
	cout << "   ���߱߳�Ϊ: \t\t" << a << "," << b << "," << c << endl;
	cout << "   �����ε��ܳ�Ϊ: \t" << length() << endl;
	cout << "   �����ε����Ϊ: \t" << area() << endl;
	cout << "   �����ε�����Ϊ: \t" << typeTriangle() << endl;
}

void triangle::Init(double newa, double newb, double newc) {
	set_a(newa);
	set_b(newb);
	set_c(newc);
	SortTriangle();
}

void triangle::Modify_abc(double Na, double Nb, double Nc) {
	if (Na + Nb > Nc && Na + Nc > Nb && Nb + Nc > Na) {
		a = Na;
		b = Nb;
		c = Nc;
		SortTriangle();
		cout << "�޸ĳɹ�!" << endl;
	}
	else {
		cout << "�µ����߲��ܹ���������!" << endl;
		return;
	}
}

bool triangle::isTriangle() {
	if (a + b > c && a + c > b && b + c > a) {
		return true;
	}
	else {
		return false;
	}
}

double triangle::length() {
	return a + b + c;
}

double triangle::area() {
	double p = 0.5 * (a + b + c);
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

string triangle::typeTriangle() {
	if (a * a + b * b > c * c) {
		return "���������";
	}
	else if (a * a + b * b == c * c) {
		return "ֱ��������";
	}
	else {
		return "�۽�������";
	}
}

void triangle::SortTriangle() {
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (b > c) {
		int temp = b;
		b = c;
		c = temp;
	}
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
}

triangle A;

void showTriangle() {
	cout << "------------------------------------" << endl;
	cout << "--          ��������              --" << endl;
	cout << "------------------------------------" << endl;
	cout << "--       1.�޸������α߳�         --" << endl;
	cout << "--       2.���������ε��ܳ�       --" << endl;
	cout << "--       3.���������ε����       --" << endl;
	cout << "--       4.�ж������ε�����       --" << endl;
	cout << "--       0.�˳���������           --" << endl;
	cout << "------------------------------------" << endl;
	cout << "��ѡ����Ҫ���Ե�ѡ��: ";
}

void Class_Triangle() {
	int select = 0;
	int a, b, c;
	A.Init(3, 4, 5);
	system("cls");
	cout << "��ʼ�������γɹ�!" << endl;
	system("pause");
	while (1) {
		system("cls");
		showTriangle();
		cin >> select;
		switch (select)
		{
		case 1:
			cout << "�������µ����߱߳�: ";
			cin >> a >> b >> c;
			A.Modify_abc(a, b, c);
			break;
		case 2:
			cout << "�������ܳ�Ϊ: " << A.length() << endl;
			break;
		case 3:
			cout << "���������Ϊ: " << A.area() << endl;
			break;
		case 4:
			cout << "����������Ϊ: " << A.typeTriangle() << endl;
			break;
		case 0:
			return;
		default:
			cout << "����ѡ�����!" << endl;
			break;
		}
		system("pause");
	}
}