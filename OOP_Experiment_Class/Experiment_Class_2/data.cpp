#include "data.h"
#include <iostream>
using namespace std;

Data::Data(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
	cout << "构造函数被调用! " << endl;
}

Data::Data(const Data& r) {
	year = r.year;
	month = r.month;
	day = r.day;
	cout << "拷贝构造函数被调用! " << endl;
}

Data::~Data() {
	cout << "~析构函数被调用! " << endl;
}

void Data::show() {
	cout << year << "年" << month << "月" << day << "日" << endl;
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