#include <iostream>
#include "triangle.h"
#include "student.h"

using namespace std;

int main() {

	cout << "------------------------------------" << endl;
	Student s;
	s.Init("Zehao", 'f', "202111000212", 19, 99, 100, 98);
	s.PrintInformation();
	cout << "------------------------------------" << endl;

	cout << "------------------------------------" << endl;
	triangle A;
	A.Init(3, 4, 5);
	A.PrintInformation();
	cout << "------------------------------------" << endl;

	system("pause");
	return 0;
}