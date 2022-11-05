#pragma once
#include <cstring>

using namespace std;

class Student {
public:
	string name;		// 学生姓名 
	double ScoreP;		// 平时成绩
	double ScoreM;		// 期中成绩
	double ScoreL;		// 期末成绩
	double SumScore;	// 总评成绩
	char grade;			// 等级
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