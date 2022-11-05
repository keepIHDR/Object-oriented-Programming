#include <iostream>
#include "student.h"

using namespace std;

Student::Student() {
	grade = 'B';
	cout << "Student的构造函数调用! " << endl;
}

Student::~Student() {
	cout << "Student的析构函数调用! " << endl;
	system("pause");
}

void Student::set() {
	cout << "请输入学生信息: " << endl;
	cout << "\t姓名: ";
	cin >> name;
	cout << "\t三科成绩(P、M、L): ";
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
	cout << ">> 学生 " << name << " 的信息如下:" << endl;
	cout << "\t平时成绩:\t" << ScoreP << endl;
	cout << "\t期中成绩:\t" << ScoreM << endl;
	cout << "\t期末成绩:\t" << ScoreL << endl;
	cout << "\t总评成绩:\t" << SumScore << endl;
	cout << "\t等级:\t\t" << grade << endl;
}