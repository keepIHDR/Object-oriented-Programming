#pragma once
#include <cstring>

using namespace std;

class Student {
public:
	string name;		// ѧ������ 
	double ScoreP;		// ƽʱ�ɼ�
	double ScoreM;		// ���гɼ�
	double ScoreL;		// ��ĩ�ɼ�
	double SumScore;	// �����ɼ�
	char grade;			// �ȼ�
public:
	Student();
	~Student();
	void set();
	double calculsteSum();
	char calculsteGrade();
	void set_P(double p);
	void set_M(double m);
	void set_L(double l);
	void PringInformation();
};