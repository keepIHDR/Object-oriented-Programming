#pragma once
#include<string>
#include<iostream>
using namespace std;

class Graduate {	// ��У�о�����
private:
	string name;	// �о�������
	bool gender;	// �о����Ա�
	int id;			// �о���ѧ��
	double score;	// �о�����ѧ�ɼ�
	string research;// �о����о�����
	string tutor;	// �о�����ʦ����
	const string university;	// �о�������ѧУ
public:
	static int Count;		// ��¼ѧ��������
	static double SumScore;	// ����ѧ���ܷ�
	// ����һ��
	Graduate();		// ��ͨ���캯��
	Graduate(string _name, bool _gender, int _id, double _score,
		string _research, string _tutor, string _university);	// �вι��캯��
	Graduate(const Graduate& c);	// �������캯��
	~Graduate();	// ��������
	string getName();	// ��������
	void PrintInformation();		// ��ͨ��Ա��������о���������Ϣ
	void PrintInformation() const;	// ����Ա��������о���������Ϣ
	static double AverageScore();	// �������о��������ƽ���ɼ�
	friend void calculateGrade(Graduate& STU);
	// ����Ԫ������ʽ����ÿ���о�������ĳɼ��ȼ�
};

Graduate::Graduate() :university("SDNU") {
	cout << "Graduate����ͨ���캯��������!" << endl;
	cout << "������ѧ����Ϣ:" << endl;
	cout << " name = "; cin >> name;
	cout << " gender(m:1, f:0) = "; cin >> gender;
	cout << " id = "; cin >> id;
	cout << " score = "; cin >> score;
	cout << " research = "; cin >> research;
	cout << " tutor = "; cin >> tutor;
	Count++;
	SumScore += this->score;
}

int Graduate::Count = 0;
double Graduate::SumScore = 0.0;

Graduate::Graduate(string _name, bool _gender, int _id, double _score, string _research, string _tutor, string _university) :university(_university) {
	cout << "Graduate���вι��캯��������!" << endl;
	this->name = _name;
	this->gender = _gender;
	this->id = _id;
	this->score = _score;
	this->research = _research;
	this->tutor = _tutor;
	Count++;
	SumScore += this->score;
}

Graduate::Graduate(const Graduate& c) {
	cout << "Graduate�Ŀ������캯��������!" << endl;
	this->name = c.name;
	this->gender = c.gender;
	this->id = c.id;
	this->score = c.score;
	this->research = c.research;
	this->tutor = c.tutor;
	Count++;
	SumScore += this->score;
}

Graduate::~Graduate() {
	cout << "Graduate����������������" << endl;
}

string Graduate::getName() {
	return this->name;
}

void Graduate::PrintInformation() {
	cout << ">> ��ͨ��Ա��������о���������Ϣ " << endl;
	cout << "ѧ�� " << this->name << " ����Ϣ����:" << endl;
	cout << "\t  gender = " << this->gender << "   (m:1, f:0)" << endl;
	cout << "\t      id = " << this->id << endl;
	cout << "\t   score = " << this->score << endl;
	cout << "\tresearch = " << this->research << endl;
	cout << "\t   tutor = " << this->tutor << endl;
}

void Graduate::PrintInformation() const {
	cout << ">> ����Ա��������о���������Ϣ " << endl;
	cout << "ѧ�� " << this->name << " ����Ϣ����:" << endl;
	cout << "\t  gender = " << this->gender << "   (m:1, f:0)" << endl;
	cout << "\t      id = " << this->id << endl;
	cout << "\t   score = " << this->score << endl;
	cout << "\tresearch = " << this->research << endl;
	cout << "\t   tutor = " << this->tutor << endl;
}

double Graduate::AverageScore() {
	return double(SumScore / (Count * 1.0));
}