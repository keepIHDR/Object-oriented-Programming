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
public:
	void PrintInformation();	// ��������������Ϣ
	void Init(double newa, double newb, double newc);	// ��ʼ��
	bool isTriangle();	// �ж��Ƿ��ܹ�����������
	double length();	// �����ܳ�
	double area();		// �������
	string typeTriangle();// �ж�����������
};