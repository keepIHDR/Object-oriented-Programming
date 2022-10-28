#include "triangle.h"
#include <cmath>
#include <iostream>

using namespace std;

void triangle::PrintInformation() {
	cout << ">> �������ε���Ϣ����: " << endl;
	cout << "   ���߱߳�Ϊ: \t\t" << a << "," << b << "," << c << endl;
	cout << "   �����ε��ܳ�Ϊ: \t" << length() << endl;
	cout << "   �����ε����Ϊ: \t" << area() << endl;
	cout << "   �����ε�����Ϊ: \t" << typeTriangle() << endl;
}

void triangle::Init(double newa, double newb, double newc) {
	a = newa;
	b = newb;
	c = newc;
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