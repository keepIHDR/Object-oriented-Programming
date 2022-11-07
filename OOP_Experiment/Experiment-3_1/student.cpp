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

string Student::getName() {
    return name;
}

string Student::getSex() {
    if (sex == 'f') {
        return "男";
    }
    else {
        return "女";
    }
}

string Student::getID() {
    return ID;
}

int Student::getAge() {
    return age;
}

double Student::getCScore() {
    return CScore;
}

double Student::getMathScore() {
    return MathScore;
}

double Student::getEnglishScore() {
    return EnglishScore;
}

void Student::PrintInformation() {
    cout << ">> " << getName() << "同学的信息如下: " << endl;
    cout << "   性别: \t" << getSex() << endl;
    cout << "   年龄: \t" << getAge() << endl;
    cout << "   学号: \t" << getID() << endl;
    cout << "   C语言成绩: \t" << getCScore() << endl;
    cout << "   高数成绩: \t" << getMathScore() << endl;
    cout << "   英语成绩: \t" << getEnglishScore() << endl;
}

void Student::Modify_name(string Nname) {
    name = Nname;
    cout << "修改成功!" << endl;
}

void Student::Modify_sex(char Nsex) {
    sex = Nsex;
    cout << "修改成功!" << endl;
}

void Student::Modify_ID(string NID) {
    ID = NID;
    cout << "修改成功!" << endl;
}

void Student::Modify_age(int Nage) {
    age = Nage;
    cout << "修改成功!" << endl;
}

void Student::Modify_CScore(double NCScore) {
    CScore = NCScore;
    cout << "修改成功!" << endl;
}

void Student::Modify_MScore(double NMathScore) {
    MathScore = NMathScore;
    cout << "修改成功!" << endl;
}

void Student::Modify_EScore(double NEnglishScore) {
    EnglishScore = NEnglishScore;
    cout << "修改成功!" << endl;
}

Student s;

void showStu() {
    cout << "------------------------------------" << endl;
    cout << "--         学生信息类             --" << endl;
    cout << "------------------------------------" << endl;
    cout << "--       1.获取学生信息           --" << endl;
    cout << "--       2.修改学生信息           --" << endl;
    cout << "--       3.输出学生信息           --" << endl;
	cout << "--       0.退出学生类             --" << endl;
	cout << "------------------------------------" << endl;
    cout << "请选择您要测试的选项: ";
}


void getSTU() {
	cout << "------------------------------------" << endl;
	cout << "--        获取学生信息            --" << endl;
	cout << "------------------------------------" << endl;
	cout << "--       1.查看学生姓名           --" << endl;
	cout << "--       2.查看学生性别           --" << endl;
	cout << "--       3.查看学生年龄           --" << endl;
	cout << "--       4.查看学生学号           --" << endl;
	cout << "--       5.查看学生C语言成绩      --" << endl;
	cout << "--       6.查看学生高数成绩       --" << endl;
	cout << "--       7.查看学生英语成绩       --" << endl;
	cout << "------------------------------------" << endl;
	cout << "请选择您要查看的学生信息: ";
}

void ModifySTU() {
	cout << "------------------------------------" << endl;
	cout << "--        修改学生信息            --" << endl;
	cout << "------------------------------------" << endl;
	cout << "--       1.修改学生姓名           --" << endl;
	cout << "--       2.修改学生性别           --" << endl;
	cout << "--       3.修改学生年龄           --" << endl;
	cout << "--       4.修改学生学号           --" << endl;
	cout << "--       5.修改学生C语言成绩      --" << endl;
	cout << "--       6.修改学生高数成绩       --" << endl;
	cout << "--       7.修改学生英语成绩       --" << endl;
	cout << "------------------------------------" << endl;
	cout << "请选择您要修改的学生信息: ";
}

void Class_Stu() {
	int temp1 = 0;
	int temp2 = 0;
	int select = 0;
	string name;
	char sex = 0;
	string ID;
	int age = 0;
	double score = 0.0;
	s.Init("Zehao", 'f', "202111000212", 19, 99, 100, 98);
	system("cls");
	cout << "初始化学生信息成功!" << endl;
	system("pause");
	while (1) {
		system("cls");
		showStu();
		cin >> select;
		switch (select)
		{
		case 1:
			system("cls");
			getSTU();
			cin >> temp1;
			switch (temp1)
			{
			case 1:
				cout << "学生的姓名为: " << s.getName() << endl;
				break;
			case 2:
				cout << "学生的性别为: " << s.getSex() << endl;
				break;
			case 3:
				cout << "学生的年龄为: " << s.getAge() << endl;
				break;
			case 4:
				cout << "学生的学号为: " << s.getID() << endl;
				break;
			case 5:
				cout << "学生的C语言成绩为: " << s.getCScore() << endl;
				break;
			case 6:
				cout << "学生的高数成绩为: " << s.getMathScore() << endl;
				break;
			case 7:
				cout << "学生的英语成绩为: " << s.getEnglishScore() << endl;
				break;
			default:
				cout << "输入的选项错误!" << endl;
				break;
			}
			break;
		case 2:
			system("cls");
			ModifySTU();
			cin >> temp2;
			switch (temp2)
			{
			case 1:
				cout << "学生的姓名更改为: ";
				cin >> name;
				s.Modify_name(name);
				break;
			case 2:
				cout << "学生的性别更改为(f:男 m:女): ";
				cin >> sex;
				s.Modify_sex(sex);
				break;
			case 3:
				cout << "学生的年龄更改为: ";
				cin >> age;
				s.Modify_age(age);
				break;
			case 4:
				cout << "学生的学号更改为: ";
				cin >> ID;
				s.Modify_ID(ID);
				break;
			case 5:
				cout << "学生的C语言成绩更改为: ";
				cin >> score;
				s.Modify_CScore(score);
				break;
			case 6:
				cout << "学生的高数成绩更改为: ";
				cin >> score;
				s.Modify_MScore(score);
				break;
			case 7:
				cout << "学生的英语成绩更改为: ";
				cin >> score;
				s.Modify_EScore(score);
				break;
			default:
				cout << "输入的选项错误!" << endl;
				break;
			}
			break;
		case 3:
			s.PrintInformation();
			break;
		case 0:
			return;
		default:
			cout << "输入选项错误!" << endl;
			break;
		}
		system("pause");
	}
}