#include "data.h"
#include <iostream>
using namespace std;

Data::Data(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
	cout << "���캯��������! " << endl;
}

Data::Data(const Data& r) {
	year = r.year;
	month = r.month;
	day = r.day;
	cout << "�������캯��������! " << endl;
}

Data::~Data() {
	cout << "~��������������! " << endl;
}

void Data::show() {
	cout << year << "��" << month << "��" << day << "��" << endl;
}

void Data::setYear(int y) {
	year = y;
}

void Data::setMonth(int m) {
	month = m;
}

void Data::setDay(int d) {
	day = d;
}