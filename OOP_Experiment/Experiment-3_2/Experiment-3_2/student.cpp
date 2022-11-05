#include <iostream>
#include "student.h"

using namespace std;

Student::Student() {
	grade = 'B';
	cout << "Student�Ĺ��캯������! " << endl;
}

Student::~Student() {
	cout << "Student��������������! " << endl;
	system("pause");
}

void Student::set() {
	cout << "������ѧ����Ϣ: " << endl;
	cout << "\t����: ";
	cin >> name;
	cout << "\t���Ƴɼ�(P��M��L): ";
	cin >> ScoreP >> ScoreM >> ScoreL;
	SumScore = calculsteSum();
	grade = calculsteGrade();
}

double Student::calculsteSum() {
	return ScoreP * 0.25 + ScoreM * 0.25 + ScoreL * 0.5;
}

char Student::calculsteGrade() {
	if (SumScore >= 90) {
		return 'A';
	}
	else if (SumScore >= 80) {
		return 'B';
	}
	else if (SumScore >= 70) {
		return 'C';
	}
	else if (SumScore >= 60) {
		return 'D';
	}
	else {
		return 'E';
	}
}

void Student::set_P(double p) {
	ScoreP = p;
	SumScore = calculsteSum();
	grade = calculsteGrade();
}

void Student::set_M(double m) {
	ScoreM = m;
	SumScore = calculsteSum();
	grade = calculsteGrade();
}

void Student::set_L(double l) {
	ScoreL = l;
	SumScore = calculsteSum();
	grade = calculsteGrade();
}

void Student::PringInformation() {
	cout << ">> ѧ�� " << name << " ����Ϣ����:" << endl;
	cout << "\tƽʱ�ɼ�:\t" << ScoreP << endl;
	cout << "\t���гɼ�:\t" << ScoreM << endl;
	cout << "\t��ĩ�ɼ�:\t" << ScoreL << endl;
	cout << "\t�����ɼ�:\t" << SumScore << endl;
	cout << "\t�ȼ�:\t\t" << grade << endl;
}