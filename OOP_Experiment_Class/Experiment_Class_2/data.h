#pragma once
class Data {
private:
	int year;
	int month;
	int day;
public:
	Data(int y, int m, int d);
	Data(const Data& r);
	~Data();
	void show();
	void setYear(int y);
	void setMonth(int m);
	void setDay(int d);
};