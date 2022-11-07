#include <iostream>
#include "rectangle.h"
using namespace std;

void Rectangle::Init(double _a, double _b) {
	a = _a;
	b = _b;
	cout << "��ʼ���ɹ�! " << endl;
}

Rectangle::Rectangle() {
	cout << "Rectangle���޲ι��캯��������! " << endl;
}

Rectangle::Rectangle(double _a, double _b) {
	a = _a;
	b = _b;
	cout << "Rectangle���вι��캯������! " << endl;
}

Rectangle::Rectangle(Rectangle& temp) {
	a = temp.get_a();
	b = temp.get_b();
	cout << "Rectangle�Ŀ������캯������! " << endl;
}

Rectangle::~Rectangle() {
	cout << "Rectangle����������������! " << endl;
	system("pause");
}

double Rectangle::get_a() {
	return a;
}

double Rectangle::get_b() {
	return b;
}

void Rectangle::set(double _a,double _b) {
	a = _a;
	b = _b;
}

bool Rectangle::isSquare() {
	if (a == b) {
		return true;
	}
	return false;
}

double Rectangle::length() {
	return 2 * (a + b);
}

double Rectangle::area() {
	return a * b;
}