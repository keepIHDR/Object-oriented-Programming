#include<iostream>
using namespace std;

class Location {
protected:
	int x, y;
public:
	Location(int _x, int _y) {
		x = _x;
		y = _y;
		cout << "+Location��Ĺ��캯��������" << endl;
	}
	~Location() {
		cout << "~Location�����������������" << endl;
		system("pause");
	}
	void move() {
		int _x, _y;
		cout << "�������������ı仯���(������ʾ����, ������ʾ����): " << endl;
		cout << " ��x = "; cin >> _x;
		cout << " ��y = "; cin >> _y;
		x += _x;
		y += _y;
		cout << "�ƶ��ɹ���" << endl;
	}
	void show() {
		cout << "��ǰ�������Ϊ: (" << x << "," << y << ")" << endl;
	}
};

class Point : public Location {
public:
	int z;
public:
	Point(int _x, int _y, int _z) : Location(_x, _y) {
		z = _z;
		cout << "+Point��Ĺ��캯��������" << endl;
	}
	~Point() {
		cout << "~Point�����������������" << endl;
		system("pause");
	}
	void move() {
		int _x, _y, _z;
		cout << "��������ά����ı仯���(������ʾ����, ������ʾ����): " << endl;
		cout << " ��x = "; cin >> _x;
		cout << " ��y = "; cin >> _y;
		cout << " ��z = "; cin >> _z;
		x += _x;
		y += _y;
		z += _z;
		cout << "�ƶ��ɹ���" << endl;
	}
	void show() {
		cout << "��ǰ�������Ϊ: (" << x << "," << y << "," << z << ")." << endl;
	}
};

class Sphere : public Point {
public:
	double R;
public:
	Sphere(int _x, int _y, int _z, double _r) : Point(_x, _y, _z) {
		R = _r;
		cout << "+Sphere��Ĺ��캯��������" << endl;
	}
	~Sphere() {
		cout << "~Sphere�����������������" << endl;
		system("pause");
	}
	void move() {
		int _x, _y, _z;
		cout << "��������������ı仯���(������ʾ����, ������ʾ����): " << endl;
		cout << " ��x = "; cin >> _x;
		cout << " ��y = "; cin >> _y;
		cout << " ��z = "; cin >> _z;
		x += _x;
		y += _y;
		z += _z;
		cout << "�ƶ��ɹ���" << endl;
	}
	void show() {
		cout << "��ǰ���ĵ�����Ϊ: (" << x << "," << y << "," << z << ").";
		cout << "    ��İ뾶Ϊ: " << R << endl;
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