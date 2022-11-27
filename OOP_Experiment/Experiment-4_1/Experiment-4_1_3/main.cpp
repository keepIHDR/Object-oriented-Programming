#include<iostream>
#include<string>
using namespace std;
#include"graduate.h"

void calculateGrade(Graduate& STU) {
	cout << STU.getName() << "的成绩等级为: ";
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
	Graduate A("小明", 1, 202101, 99, "人工智能", "Mr Zhang", "SDNU");
	const Graduate B("小红", 0, 202102, 85, "自然语言处理", "Mr Wang", "SDNU");
	Graduate C("小王", 1, 202103, 73, "网络安全", "Mr Zhao", "SDNU");
	cout << "----------------------------------" << endl;
	A.PrintInformation();
	B.PrintInformation();
	C.PrintInformation();
	cout << "----------------------------------" << endl;
	cout << "研究生的平均成绩: " << Graduate::AverageScore() << endl;
	cout << "----------------------------------" << endl;
	calculateGrade(A);
	calculateGrade(C);
	cout << "----------------------------------" << endl;
	system("pause");
	return 0;
}