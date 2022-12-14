#pragma once
#include <string>
#include <iostream>

using namespace std;

class triangle
{
	// 属性: 数据
private:
	double a, b, c;
	// 行为: 函数
private:
	void set_a(double _a);
protected:
	void set_b(double _b);
public:
	void set_c(double _c);
	void PrintInformation();	// 输出三角形相关信息
	void Init(double newa, double newb, double newc);	// 初始化
	void Modify_abc(double Na, double Nb, double Nc);   // 修改边长
	bool isTriangle();	// 判断是否能够构成三角形
	double length();	// 计算周长
	double area();		// 计算面积
	string typeTriangle();// 判断三角形类型
private:
	void SortTriangle();	// 三边排序
};

void showTriangle();
void Class_Triangle();