#include <iostream>
#include "rectangle.h"
#include "student.h"

using namespace std;

/*
	类的变量记心间, 三构一析放在前
	普通函数按需添, 万法归宗永不变
*/

void func(Rectangle v, Rectangle* p, Rectangle& r) {
	v.set(10, 20);
	cout << "修改后的矩形v的边长为: a = " << v.get_a()
		<< ", b = " << v.get_b() << endl;
	p->set(10, 20);
	cout << "修改后的指针p指向的矩形的边长为: a = " << p->get_a()
		<< ", b = " << p->get_b() << endl;
	r.set(10, 20);
	cout << "修改后的引用的矩形r的边长为: a = " << r.get_a()
		<< ", b = " << r.get_b() << endl;
}

int main() {

	/***** 任务一: 基础类编程设计实验 *****/
	cout << "--------------------------------------" << endl;
	cout << "      任务一: 基础类编程设计实验      " << endl;
	cout << "--------------------------------------" << endl;
	Student stu;
	stu.set();
	stu.PringInformation();
	stu.set_P(99);
	stu.set_M(99);
	stu.set_L(100);
	stu.PringInformation();
	cout << "任务一执行完毕!" << endl;
	system("pause");
	system("cls");


	/***** 任务二: 类内构造函数设计实验 ******/
	cout << "--------------------------------------" << endl;
	cout << "     任务二: 类内构造函数设计实验    " << endl;
	cout << "--------------------------------------" << endl;
	Rectangle rec1(5, 5), rec2(rec1), rec3;
	// 初始化类对象
	rec3.Init(10, 12);
	// 输出矩形的边长
	cout << "矩形rec1的边长为: a = " << rec1.get_a() 
		<< ", b = " << rec1.get_b() << endl;
	cout << "矩形rec2的边长为: a = " << rec2.get_a() 
		<< ", b = " << rec2.get_b() << endl;
	cout << "矩形rec3的边长为: a = " << rec3.get_a() 
		<< ", b = " << rec3.get_b() << endl;
	// 修改矩形的边长
	cout << "下面对矩形rec2的边长进行修改: a = 5, b = 9" << endl;
	rec2.set(5, 9);
	// 判断矩形是否为正方形
	cout << "矩形rec1";
	rec1.isSquare() ? cout << "是" : cout << "不是";
	cout << "正方形" << endl;
	cout << "矩形rec2";
	rec2.isSquare() ? cout << "是" : cout << "不是";
	cout << "正方形" << endl;
	cout << "矩形rec3";
	rec3.isSquare() ? cout << "是" : cout << "不是";
	cout << "正方形" << endl;
	// 输出矩形的周长
	cout << "矩形rec1的周长为: " << rec1.length() << endl;
	cout << "矩形rec2的周长为: " << rec2.length() << endl;
	cout << "矩形rec3的周长为: " << rec3.length() << endl;
	// 输出矩形的面积
	cout << "矩形rec1的面积为: " << rec1.area() << endl;
	cout << "矩形rec2的面积为: " << rec2.area() << endl;
	cout << "矩形rec3的面积为: " << rec3.area() << endl;
	// 通过sizeof运算符计算对象存储的内容
	cout << "矩形rec1对象所占存储空间大小为: " << sizeof(rec1) << endl;
	cout << "矩形rec2对象所占存储空间大小为: " << sizeof(rec2) << endl;
	cout << "矩形rec3对象所占存储空间大小为: " << sizeof(rec3) << endl;
	// 探索对象作为参数时的用法
	func(rec1, &rec2, rec3);
	// 输出当前矩形的边长
	cout << "当前矩形的边长:" << endl;
	cout << ">> 矩形rec1的边长为: a = " << rec1.get_a()
		<< ", b = " << rec1.get_b() << endl;
	cout << ">> 矩形rec2的边长为: a = " << rec2.get_a()
		<< ", b = " << rec2.get_b() << endl;
	cout << ">> 矩形rec3的边长为: a = " << rec3.get_a()
		<< ", b = " << rec3.get_b() << endl;

	cout << "任务二执行完毕!" << endl;
	system("pause");
	system("cls");
	cout << "析构函数执行: " << endl;
	return 0;
}