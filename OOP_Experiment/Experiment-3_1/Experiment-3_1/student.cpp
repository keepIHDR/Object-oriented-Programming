#include "student.h"
#include <iostream>

using namespace std;

void Student::Init(string Nname, char Nsex, string NID, int Nage, double NCScore, double NMathScore, double NEnglishScore) {
	name = Nname;
	sex = Nsex;
	ID = NID;
	age = Nage;
	CScore = NCScore;
	MathScore = NMathScore;
	EnglishScore = NEnglishScore;
}

void Student::PrintInformation() {
    cout << ">> " << name << "同学的信息如下: " << endl;
    if (sex == 'f') {
        cout << "   性别: \t" << "男" << endl;
    }
    else {
        cout << "   性别: \t" << "女" << endl;
    }
    cout << "   年龄: \t" << age << endl;
    cout << "   学号: \t" << ID << endl;
    cout << "   C语言成绩: \t" << CScore << endl;
    cout << "   高数成绩: \t" << MathScore << endl;
    cout << "   英语成绩: \t" << EnglishScore << endl;
}