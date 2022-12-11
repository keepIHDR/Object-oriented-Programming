#include<iostream>
using namespace std;

class Base {
public: int a;
protected: int b;
private: int c;
private: static int count;
public:
	Base(int _a, int _b, int _c) {
		a = _a; b = _b; c = _c;
		count++;
		cout << "+Base�๹�캯�������� " << endl;
	}
	~Base() {
		cout << "~Base���������������� " << endl;
		system("pause");
	}
	void print() {	// ���������ݳ�Ա����
		cout << ">> Base�����ݳ�Ա: " << endl;
		cout << "\t a = " << a << endl;
		cout << "\t b = " << b << endl;
		cout << "\t c = " << c << endl;
	}	
	static int statistic() {	// ͳ������󴴽������ĺ���
		return count;
	}
};

int Base::count = 0;	// ��̬��Ա������ʼ��

class Derived1 : public Base {
public:
	Derived1(int _a, int _b, int _c) :Base(_a, _b, _c) {
		cout << "+Derived1�๹�캯�������� " << endl;
	}
	~Derived1() {
		cout << "~Derived1���������������� " << endl;
		system("pause");
	}
	void modefy1() {
		a = 101;
		b = 102;
		//c = 103;		����private���Եı����̳к��������޷�����
	}
	void print1() {
		cout << ">> Derived2�����ݳ�Ա: " << endl;
		cout << "\t a = " << a << endl;
		cout << "\t b = " << b << endl;
		//cout << "\t c = " << c << endl;	����private���Եı����̳к��������޷�����
	}
};

class Derived2 : private Base {
public:
	Derived2(int _a, int _b, int _c) :Base(_a, _b, _c) {
		cout << "+Derived2�๹�캯�������� " << endl;
	}
	~Derived2() {
		cout << "~Derived2���������������� " << endl;
		system("pause");
	}
	void modefy2() {
		a = 201;
		b = 202;
		//c = 203;		����private���Եı����̳к��������޷�����
	}
	void print2() {
		cout << ">> Derived2�����ݳ�Ա: " << endl;
		cout << "\t a = " << a << endl;
		cout << "\t b = " << b << endl;
		//cout << "\t c = " << c << endl;	����private���Եı����̳к��������޷�����
	}
};

class Derived3 : protected Base {
public:
	Derived3(int _a, int _b, int _c) :Base(_a, _b, _c) {
		cout << "+Derived3�๹�캯�������� " << endl;
	}
	~Derived3() {
		cout << "~Derived3���������������� " << endl;
		system("pause");
	}
	void modefy1() {
		a = 301;
		b = 302;
		//c = 303;		����private���Եı����̳к��������޷�����
	}
	void print3() {
		cout << ">> Derived3�����ݳ�Ա: " << endl;
		cout << "\t a = " << a << endl;
		cout << "\t b = " << b << endl;
		//cout << "\t c = " << c << endl;	����private���Եı����̳к��������޷�����
	}
};

int main() {
	cout << "----------------------------" << endl;
	cout << "    Base��Ĵ�С:" << sizeof(Base) << endl;
	cout << "Derived1��Ĵ�С: " << sizeof(Derived1) << endl;
	cout << "Derived2��Ĵ�С: " << sizeof(Derived2) << endl;
	cout << "Derived3��Ĵ�С: " << sizeof(Derived3) << endl;
	cout << "----------------------------" << endl;

	cout << "-----------Base��-----------" << endl;
	Base bb(1, 2, 3);
	bb.print();
	cout << ">> ������������: " << Base::statistic() << endl;
	cout << "----------------------------" << endl;


	cout << "---------Derived1��---------" << endl;
	Derived1 d1(2, 3, 4);
	d1.a = 11;
	//d1.b = 12;	���ⲻ�ɷ���protected���Եĳ�Ա����
	//d1.c = 13;	private���Եĳ�Ա�������ܼ̳�		
	cout << "----------------------------" << endl;


	cout << "---------Derived2��---------" << endl;
	Derived2 d2(3, 4, 5);
	//d2.a = 11;	���ⲻ�ɷ���protected���Եĳ�Ա����
	//d2.b = 12;	���ⲻ�ɷ���protected���Եĳ�Ա����
	//d2.c = 13;	private���Եĳ�Ա�������ܼ̳�
	cout << "----------------------------" << endl;

	
	cout << "---------Derived3��---------" << endl;
	Derived3 d3(4, 5, 6);
	//d2.a = 11;	���ⲻ�ɷ���private���Եĳ�Ա����
	//d2.b = 12;	���ⲻ�ɷ���private���Եĳ�Ա����
	//d2.c = 13;	private���Եĳ�Ա�������ܼ̳�
	cout << "----------------------------" << endl;


	system("pause");
	return 0;
}