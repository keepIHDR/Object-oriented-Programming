#pragma once

/*
	��ı������ļ�, ����һ������ǰ
	��ͨ����������, �򷨹���������
*/

class Rectangle {
private:
	double a, b;	// ˽�����ݳ�Ա����
// �����ṩ�Ľӿ�
public:
	void Init(double _a, double _b);	// ��ʼ�������
	Rectangle();						// �޲ι��캯��
	Rectangle(double _a,double _b);		// �вι��캯��
	Rectangle(Rectangle &temp);			// �������캯��
	~Rectangle();		// �ͷŶ���
	double get_a();		// ������εı߳�a
	double get_b();		// ������εı߳�b
	void set(double a,double b);		// �޸ľ��εı߳�
	bool isSquare();	// �ж��Ƿ�Ϊ������
	double length();	// ������ε��ܳ�
	double area();		// ������ε����
};