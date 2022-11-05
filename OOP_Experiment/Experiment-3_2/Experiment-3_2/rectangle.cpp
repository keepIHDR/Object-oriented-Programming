#include <iostream>
#include "rectangle.h"
using namespace std;

void Rectangle::Init(double _a, double _b) {
	a = _a;
	b = _b;
	cout << "初始化成功! " << endl;
}

Rectangle::Rectangle() {
	cout << "Rectangle的无参构造函数被调用! " << endl;
}

Rectangle::Rectangle(double _a, double _b) {
	a = _a;
	b = _b;
	cout << "Rectangle的有参构造函数调用! " << endl;
}

Rectangle::Rectangle(Rectangle& temp) {
	a = temp.get_a();
	b = temp.get_b();
	cout << "Rectangle的拷贝构造函数调用! " << endl;
}

Rectangle::~Rectangle() {
	cout << "Rectangle的析构函数被调用! " << endl;
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