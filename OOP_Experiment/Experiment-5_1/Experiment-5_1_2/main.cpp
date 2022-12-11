#include<iostream>
using namespace std;

class Location {
protected:
	int x, y;
public:
	Location(int _x, int _y) {
		x = _x;
		y = _y;
		cout << "+Location类的构造函数被调用" << endl;
	}
	~Location() {
		cout << "~Location类的析构函数被调用" << endl;
		system("pause");
	}
	void move() {
		int _x, _y;
		cout << "请输入横纵坐标的变化情况(正数表示增加, 负数表示减少): " << endl;
		cout << " Δx = "; cin >> _x;
		cout << " Δy = "; cin >> _y;
		x += _x;
		y += _y;
		cout << "移动成功！" << endl;
	}
	void show() {
		cout << "当前点的坐标为: (" << x << "," << y << ")" << endl;
	}
};

class Point : public Location {
public:
	int z;
public:
	Point(int _x, int _y, int _z) : Location(_x, _y) {
		z = _z;
		cout << "+Point类的构造函数被调用" << endl;
	}
	~Point() {
		cout << "~Point类的析构函数被调用" << endl;
		system("pause");
	}
	void move() {
		int _x, _y, _z;
		cout << "请输入三维坐标的变化情况(正数表示增加, 负数表示减少): " << endl;
		cout << " Δx = "; cin >> _x;
		cout << " Δy = "; cin >> _y;
		cout << " Δz = "; cin >> _z;
		x += _x;
		y += _y;
		z += _z;
		cout << "移动成功！" << endl;
	}
	void show() {
		cout << "当前点的坐标为: (" << x << "," << y << "," << z << ")." << endl;
	}
};

class Sphere : public Point {
public:
	double R;
public:
	Sphere(int _x, int _y, int _z, double _r) : Point(_x, _y, _z) {
		R = _r;
		cout << "+Sphere类的构造函数被调用" << endl;
	}
	~Sphere() {
		cout << "~Sphere类的析构函数被调用" << endl;
		system("pause");
	}
	void move() {
		int _x, _y, _z;
		cout << "请输入球心坐标的变化情况(正数表示增加, 负数表示减少): " << endl;
		cout << " Δx = "; cin >> _x;
		cout << " Δy = "; cin >> _y;
		cout << " Δz = "; cin >> _z;
		x += _x;
		y += _y;
		z += _z;
		cout << "移动成功！" << endl;
	}
	void show() {
		cout << "当前球心的坐标为: (" << x << "," << y << "," << z << ").";
		cout << "    球的半径为: " << R << endl;
	}
};

int main() {
	cout << "----------Location----------" << endl;
	Location L1(6, 6);
	L1.show();
	L1.move();
	L1.show();
	cout << "----------------------------" << endl;

	cout << "-----------Point------------" << endl;
	Point p1(3, 4, 5);
	p1.show();
	p1.move();
	p1.show();
	cout << "----------------------------" << endl;

	cout << "-----------Sphere-----------" << endl;
	Sphere s1(0, 0, 0, 5);
	s1.show();
	s1.move();
	s1.show();
	cout << "----------------------------" << endl;

	system("pause");
	return 0;
}