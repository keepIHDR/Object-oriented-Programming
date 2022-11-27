#pragma once
class Point {
private:
	double x, y;
public:
	Point();	// Point�Ĺ��캯��
	Point(int _x, int _y);	// Point���вι��캯��
	~Point();	// Point����������
	void Init(int _x, int _y);	// �����ʼ������
	void Modify(int _x, int _y);// �����޸ĺ���
	void Print();	// ����λ���������
	friend double distance(Point& A, Point& B);
};

Point::Point() {
	cout << "Point�Ĺ��캯��������" << endl;
}

Point::Point(int _x, int _y) {
	x = _x;
	y = _y;
	cout << "Point���вι��캯��������" << endl;
}

Point::~Point() {
	cout << "Point����������������" << endl;
}

void Point::Init(int _x, int _y) {
	x = _x;
	y = _y;
	cout << "��ʼ���ɹ�! " << endl;
}

void Point::Modify(int _x, int _y) {
	x = _x;
	y = _y;
	cout << "�޸ĳɹ�! " << endl;
}

void Point::Print() {
	cout << "�õ������λ��Ϊ: (" << x << " ," << y << " )" << endl;
}