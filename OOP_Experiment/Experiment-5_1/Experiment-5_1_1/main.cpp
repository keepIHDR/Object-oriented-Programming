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
		cout << "+Base类构造函数被调用 " << endl;
	}
	~Base() {
		cout << "~Base类析构函数被调用 " << endl;
		system("pause");
	}
	void print() {	// 输出类的数据成员函数
		cout << ">> Base类数据成员: " << endl;
		cout << "\t a = " << a << endl;
		cout << "\t b = " << b << endl;
		cout << "\t c = " << c << endl;
	}	
	static int statistic() {	// 统计类对象创建个数的函数
		return count;
	}
};

int Base::count = 0;	// 静态成员变量初始化

class Derived1 : public Base {
public:
	Derived1(int _a, int _b, int _c) :Base(_a, _b, _c) {
		cout << "+Derived1类构造函数被调用 " << endl;
	}
	~Derived1() {
		cout << "~Derived1类析构函数被调用 " << endl;
		system("pause");
	}
	void modefy1() {
		a = 101;
		b = 102;
		//c = 103;		基类private属性的变量继承后派生类无法访问
	}
	void print1() {
		cout << ">> Derived2类数据成员: " << endl;
		cout << "\t a = " << a << endl;
		cout << "\t b = " << b << endl;
		//cout << "\t c = " << c << endl;	基类private属性的变量继承后派生类无法访问
	}
};

class Derived2 : private Base {
public:
	Derived2(int _a, int _b, int _c) :Base(_a, _b, _c) {
		cout << "+Derived2类构造函数被调用 " << endl;
	}
	~Derived2() {
		cout << "~Derived2类析构函数被调用 " << endl;
		system("pause");
	}
	void modefy2() {
		a = 201;
		b = 202;
		//c = 203;		基类private属性的变量继承后派生类无法访问
	}
	void print2() {
		cout << ">> Derived2类数据成员: " << endl;
		cout << "\t a = " << a << endl;
		cout << "\t b = " << b << endl;
		//cout << "\t c = " << c << endl;	基类private属性的变量继承后派生类无法访问
	}
};

class Derived3 : protected Base {
public:
	Derived3(int _a, int _b, int _c) :Base(_a, _b, _c) {
		cout << "+Derived3类构造函数被调用 " << endl;
	}
	~Derived3() {
		cout << "~Derived3类析构函数被调用 " << endl;
		system("pause");
	}
	void modefy1() {
		a = 301;
		b = 302;
		//c = 303;		基类private属性的变量继承后派生类无法访问
	}
	void print3() {
		cout << ">> Derived3类数据成员: " << endl;
		cout << "\t a = " << a << endl;
		cout << "\t b = " << b << endl;
		//cout << "\t c = " << c << endl;	基类private属性的变量继承后派生类无法访问
	}
};

int main() {
	cout << "----------------------------" << endl;
	cout << "    Base类的大小:" << sizeof(Base) << endl;
	cout << "Derived1类的大小: " << sizeof(Derived1) << endl;
	cout << "Derived2类的大小: " << sizeof(Derived2) << endl;
	cout << "Derived3类的大小: " << sizeof(Derived3) << endl;
	cout << "----------------------------" << endl;

	cout << "-----------Base类-----------" << endl;
	Base bb(1, 2, 3);
	bb.print();
	cout << ">> 基类对象的数量: " << Base::statistic() << endl;
	cout << "----------------------------" << endl;


	cout << "---------Derived1类---------" << endl;
	Derived1 d1(2, 3, 4);
	d1.a = 11;
	//d1.b = 12;	类外不可访问protected属性的成员变量
	//d1.c = 13;	private属性的成员变量不能继承		
	cout << "----------------------------" << endl;


	cout << "---------Derived2类---------" << endl;
	Derived2 d2(3, 4, 5);
	//d2.a = 11;	类外不可访问protected属性的成员变量
	//d2.b = 12;	类外不可访问protected属性的成员变量
	//d2.c = 13;	private属性的成员变量不能继承
	cout << "----------------------------" << endl;

	
	cout << "---------Derived3类---------" << endl;
	Derived3 d3(4, 5, 6);
	//d2.a = 11;	类外不可访问private属性的成员变量
	//d2.b = 12;	类外不可访问private属性的成员变量
	//d2.c = 13;	private属性的成员变量不能继承
	cout << "----------------------------" << endl;


	system("pause");
	return 0;
}