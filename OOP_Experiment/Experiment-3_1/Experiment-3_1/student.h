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
    string getName();           // 获取姓名
    string getSex();            // 获取性别
    string getID();             // 获取学号
    int getAge();               // 获取年龄
    double getCScore();         // 获取C语言成绩
    double getMathScore();      // 获取高数成绩
    double getEnglishScore();   // 获取英语成绩
    void PrintInformation();    // 输出学生信息
    void Modify_name(string Nname);         // 修改学生姓名
    void Modify_sex(char Nsex);             // 修改学生性别
    void Modify_ID(string NID);             // 修改学生学号
    void Modify_age(int Nage);              // 修改学生年龄
    void Modify_CScore(double NCScore);       // 修改学生C语言成绩
    void Modify_MScore(double NMathScore);    // 修改学生高数成绩
    void Modify_EScore(double NEnglishScore); // 修改学生英语成绩
};

void showStu();
void getSTU();
void ModifySTU();
void Class_Stu();