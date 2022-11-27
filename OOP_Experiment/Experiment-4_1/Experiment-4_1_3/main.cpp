#include<iostream>
#include<string>
using namespace std;
#include"graduate.h"

void calculateGrade(Graduate& STU) {
	cout << STU.getName() << "�ĳɼ��ȼ�Ϊ: ";
	if (STU.score >= 90) {
		cout << "A";
	}
	else if (STU.score >= 80) {
		cout << "B";
	}
	else if (STU.score >= 70) {
		cout << "C";
	}
	else if (STU.score >= 60) {
		cout << "D";
	}
	else {
		cout << "E";
	}
	cout << endl;
}

int main() {
	cout << "----------------------------------" << endl;
	Graduate A("С��", 1, 202101, 99, "�˹�����", "Mr Zhang", "SDNU");
	const Graduate B("С��", 0, 202102, 85, "��Ȼ���Դ���", "Mr Wang", "SDNU");
	Graduate C("С��", 1, 202103, 73, "���簲ȫ", "Mr Zhao", "SDNU");
	cout << "----------------------------------" << endl;
	A.PrintInformation();
	B.PrintInformation();
	C.PrintInformation();
	cout << "----------------------------------" << endl;
	cout << "�о�����ƽ���ɼ�: " << Graduate::AverageScore() << endl;
	cout << "----------------------------------" << endl;
	calculateGrade(A);
	calculateGrade(C);
	cout << "----------------------------------" << endl;
	system("pause");
	return 0;
}