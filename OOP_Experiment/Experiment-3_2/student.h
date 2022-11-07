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
	Student();			// 构造函数
	~Student();			// 析构函数
	void set();			// 初始化函数
	double calculsteSum();		// 计算总评成绩函数
	char calculsteGrade();		// 计算等级函数
	void set_P(double ScoreP);	// 修改平时成绩函数
	void set_M(double ScoreM);	// 修改期中成绩函数
	void set_L(double ScoreL);	// 修改期末成绩函数
	void PringInformation();	// 输出学生信息函数
};