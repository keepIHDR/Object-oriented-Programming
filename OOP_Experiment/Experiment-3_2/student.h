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
	Student();			// ���캯��
	~Student();			// ��������
	void set();			// ��ʼ������
	double calculsteSum();		// ���������ɼ�����
	char calculsteGrade();		// ����ȼ�����
	void set_P(double ScoreP);	// �޸�ƽʱ�ɼ�����
	void set_M(double ScoreM);	// �޸����гɼ�����
	void set_L(double ScoreL);	// �޸���ĩ�ɼ�����
	void PringInformation();	// ���ѧ����Ϣ����
};