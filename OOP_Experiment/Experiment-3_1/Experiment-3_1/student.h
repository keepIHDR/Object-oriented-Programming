#pragma once
#include <string>
using namespace std;

class Student
{
private:
	string name;            // 姓名
	char sex;               // 性别(f:男 m:女)
    string ID;              // 学号
    int age;                // 年龄
    double CScore;          // C语言成绩
    double MathScore;       // 高数成绩
    double EnglishScore;    // 英语成绩
public:
    void Init(string Nname, char Nsex, string NID, int Nage,
        double NCScore, double NMathScore, double NEnglishScore);
                            // 初始化学生信息
    void PrintInformation();// 输出学生信息
};