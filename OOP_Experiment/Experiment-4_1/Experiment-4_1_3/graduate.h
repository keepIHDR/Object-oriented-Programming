#pragma once
#include<string>
#include<iostream>
using namespace std;

class Graduate {	// 高校研究生类
private:
	string name;	// 研究生姓名
	bool gender;	// 研究生性别
	int id;			// 研究生学号
	double score;	// 研究生入学成绩
	string research;// 研究生研究方向
	string tutor;	// 研究生导师姓名
	const string university;	// 研究生所在学校
public:
	static int Count;		// 记录学生总数量
	static double SumScore;	// 计算学生总分
	// 三构一析
	Graduate();		// 普通构造函数
	Graduate(string _name, bool _gender, int _id, double _score,
		string _research, string _tutor, string _university);	// 有参构造函数
	Graduate(const Graduate& c);	// 拷贝构造函数
	~Graduate();	// 析构函数
	string getName();	// 返回姓名
	void PrintInformation();		// 普通成员函数输出研究生基本信息
	void PrintInformation() const;	// 常成员函数输出研究生基本信息
	static double AverageScore();	// 输出多个研究生对象的平均成绩
	friend void calculateGrade(Graduate& STU);
	// 以友元函数形式计算每个研究生对象的成绩等级
};

Graduate::Graduate() :university("SDNU") {
	cout << "Graduate的普通构造函数被调用!" << endl;
	cout << "请输入学生信息:" << endl;
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
	cout << "Graduate的有参构造函数被调用!" << endl;
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
	cout << "Graduate的拷贝构造函数被调用!" << endl;
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
	cout << "Graduate的析构函数被调用" << endl;
}

string Graduate::getName() {
	return this->name;
}

void Graduate::PrintInformation() {
	cout << ">> 普通成员函数输出研究生基本信息 " << endl;
	cout << "学生 " << this->name << " 的信息如下:" << endl;
	cout << "\t  gender = " << this->gender << "   (m:1, f:0)" << endl;
	cout << "\t      id = " << this->id << endl;
	cout << "\t   score = " << this->score << endl;
	cout << "\tresearch = " << this->research << endl;
	cout << "\t   tutor = " << this->tutor << endl;
}

void Graduate::PrintInformation() const {
	cout << ">> 常成员函数输出研究生基本信息 " << endl;
	cout << "学生 " << this->name << " 的信息如下:" << endl;
	cout << "\t  gender = " << this->gender << "   (m:1, f:0)" << endl;
	cout << "\t      id = " << this->id << endl;
	cout << "\t   score = " << this->score << endl;
	cout << "\tresearch = " << this->research << endl;
	cout << "\t   tutor = " << this->tutor << endl;
}

double Graduate::AverageScore() {
	return double(SumScore / (Count * 1.0));
}