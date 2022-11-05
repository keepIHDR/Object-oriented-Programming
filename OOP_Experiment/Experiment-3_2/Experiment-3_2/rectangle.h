#pragma once

/*
	类的变量记心间, 三构一析放在前
	普通函数按需添, 万法归宗永不变
*/

class Rectangle {
private:
	double a, b;	// 私有数据成员变量
// 对外提供的接口
public:
	void Init(double _a, double _b);	// 初始化类对象
	Rectangle();						// 无参构造函数
	Rectangle(double _a,double _b);		// 有参构造函数
	Rectangle(Rectangle &temp);			// 拷贝构造函数
	~Rectangle();		// 释放对象
	double get_a();		// 输出矩形的边长a
	double get_b();		// 输出矩形的边长b
	void set(double a,double b);		// 修改矩形的边长
	bool isSquare();	// 判断是否为正方形
	double length();	// 输出矩形的周长
	double area();		// 输出矩形的面积
};