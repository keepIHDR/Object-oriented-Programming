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
	cout << ">> 该三角形的信息如下: " << endl;
	cout << "   三边边长为: \t\t" << a << "," << b << "," << c << endl;
	cout << "   三角形的周长为: \t" << length() << endl;
	cout << "   三角形的面积为: \t" << area() << endl;
	cout << "   三角形的类型为: \t" << typeTriangle() << endl;
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
		cout << "修改成功!" << endl;
	}
	else {
		cout << "新的三边不能构成三角形!" << endl;
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
		return "锐角三角形";
	}
	else if (a * a + b * b == c * c) {
		return "直角三角形";
	}
	else {
		return "钝角三角形";
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
	cout << "--          三角形类              --" << endl;
	cout << "------------------------------------" << endl;
	cout << "--       1.修改三角形边长         --" << endl;
	cout << "--       2.计算三角形的周长       --" << endl;
	cout << "--       3.计算三角形的面积       --" << endl;
	cout << "--       4.判断三角形的类型       --" << endl;
	cout << "--       0.退出三角形类           --" << endl;
	cout << "------------------------------------" << endl;
	cout << "请选择您要测试的选项: ";
}

void Class_Triangle() {
	int select = 0;
	int a, b, c;
	A.Init(3, 4, 5);
	system("cls");
	cout << "初始化三角形成功!" << endl;
	system("pause");
	while (1) {
		system("cls");
		showTriangle();
		cin >> select;
		switch (select)
		{
		case 1:
			cout << "请输入新的三边边长: ";
			cin >> a >> b >> c;
			A.Modify_abc(a, b, c);
			break;
		case 2:
			cout << "三角形周长为: " << A.length() << endl;
			break;
		case 3:
			cout << "三角形面积为: " << A.area() << endl;
			break;
		case 4:
			cout << "三角形类型为: " << A.typeTriangle() << endl;
			break;
		case 0:
			return;
		default:
			cout << "输入选项错误!" << endl;
			break;
		}
		system("pause");
	}
}