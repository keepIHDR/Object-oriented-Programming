#include <iostream>
using namespace std;

void Open_the_Door() {
	cout << "\t打开冰箱门" << endl;
}

void Put_Exlephant() {
	cout << "\t把大象放入冰箱" << endl;
}

void Close_the_Door() {
	cout << "\t关闭冰箱门" << endl;
}

void Put_Elephant_to_Refrigerator() {
	Open_the_Door();
	Put_Exlephant();
	Close_the_Door();
}