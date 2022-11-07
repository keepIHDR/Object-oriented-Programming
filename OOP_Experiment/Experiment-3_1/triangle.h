#pragma once
#include <string>
#include <iostream>

using namespace std;

class triangle
{
	// ����: ����
private:
	double a, b, c;
	// ��Ϊ: ����
private:
	void set_a(double _a);
protected:
	void set_b(double _b);
public:
	void set_c(double _c);
	void PrintInformation();	// ��������������Ϣ
	void Init(double newa, double newb, double newc);	// ��ʼ��
	void Modify_abc(double Na, double Nb, double Nc);   // �޸ı߳�
	bool isTriangle();	// �ж��Ƿ��ܹ�����������
	double length();	// �����ܳ�
	double area();		// �������
	string typeTriangle();// �ж�����������
private:
	void SortTriangle();	// ��������
};

void showTriangle();
void Class_Triangle();