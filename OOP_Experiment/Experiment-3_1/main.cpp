#include <iostream>
#include "triangle.h"
#include "student.h"

using namespace std;

void showAll() {
	cout << "------------------------------------" << endl;
	cout << "--     实验3_1: 类的设计与实现    --" << endl;
	cout << "--        1.学生信息类            --" << endl;
	cout << "--        2.三角形类              --" << endl;
	cout << "--        0.退出程序              --" << endl;
	cout << "------------------------------------" << endl;
}

int main() {
	int select = 0;
	while (1) {
		system("cls");
		showAll();
		cout << "请选择您要测试的类: ";
		cin >> select;
		switch (select)
		{
		case 1:
			Class_Stu();
			break;
		case 2:
			Class_Triangle();
			break;
		case 0:
			system("pause");
			return 0;
		default:
			cout << "输入选项错误!" << endl;
			system("pause");
			break;
		}
	}
}