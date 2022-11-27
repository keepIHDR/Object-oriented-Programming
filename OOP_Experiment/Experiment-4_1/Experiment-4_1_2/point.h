#pragma once
class Point {
private:
	double x, y;
public:
	Point();	// Point的构造函数
	Point(int _x, int _y);	// Point的有参构造函数
	~Point();	// Point的析构函数
	void Init(int _x, int _y);	// 坐标初始化函数
	void Modify(int _x, int _y);// 坐标修改函数
	void Print();	// 坐标位置输出函数
	friend double distance(Point& A, Point& B);
};

Point::Point() {
	cout << "Point的构造函数被调用" << endl;
}

Point::Point(int _x, int _y) {
	x = _x;
	y = _y;
	cout << "Point的有参构造函数被调用" << endl;
}

Point::~Point() {
	cout << "Point的析构函数被调用" << endl;
}

void Point::Init(int _x, int _y) {
	x = _x;
	y = _y;
	cout << "初始化成功! " << endl;
}

void Point::Modify(int _x, int _y) {
	x = _x;
	y = _y;
	cout << "修改成功! " << endl;
}

void Point::Print() {
	cout << "该点的坐标位置为: (" << x << " ," << y << " )" << endl;
}