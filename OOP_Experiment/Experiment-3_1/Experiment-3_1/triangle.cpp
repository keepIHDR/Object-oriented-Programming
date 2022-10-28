#include "triangle.h"
#include <cmath>
#include <iostream>

using namespace std;

void triangle::PrintInformation() {
	cout << ">> 该三角形的信息如下: " << endl;
	cout << "   三边边长为: \t\t" << a << "," << b << "," << c << endl;
	cout << "   三角形的周长为: \t" << length() << endl;
	cout << "   三角形的面积为: \t" << area() << endl;
	cout << "   三角形的类型为: \t" << typeTriangle() << endl;
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
		return "锐角三角形";
	}
	else if (a * a + b * b == c * c) {
		return "直角三角形";
	}
	else {
		return "钝角三角形";
	}
}