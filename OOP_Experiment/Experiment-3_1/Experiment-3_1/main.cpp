#include <iostream>
#include "triangle.h"
#include "student.h"

using namespace std;

void showAll() {
	cout << "------------------------------------" << endl;
	cout << "--     ʵ��3_1: ��������ʵ��    --" << endl;
	cout << "--        1.ѧ����Ϣ��            --" << endl;
	cout << "--        2.��������              --" << endl;
	cout << "--        0.�˳�����              --" << endl;
	cout << "------------------------------------" << endl;
}

int main() {
	int select = 0;
	while (1) {
		system("cls");
		showAll();
		cout << "��ѡ����Ҫ���Ե���: ";
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
			cout << "����ѡ�����!" << endl;
			system("pause");
			break;
		}
	}
}