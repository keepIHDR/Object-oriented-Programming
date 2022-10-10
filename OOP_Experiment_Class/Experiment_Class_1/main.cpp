/*
* 时间: 2022-10-07
* 作者：Zehao Zhang
* 科目：面向对象程序设计
*/

#include <iostream>
#include "triangle2.h"
using namespace std;

// 判断是否为三角形  abc分别为三边边长
bool isTriangle(float a, float b, float c) {
	if (a + b > c && a + c > b && b + c > a) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	// 1. 快捷复制
	cout << "Hello Word!" << endl;
	// 光标某一行 不用选中Ctrl+C 可以复制整行
	cout << "Hello Word!" << endl;
	cout << "Hello Word!" << endl;
	// 2. 判断是否为三角形
	int a, b, c;
	// 连环输入
	cout << "请输入三角形的三条边长: ";
	cin >> a >> b >> c;
	cout << "a = " << a << "\tb = " << b << "\tc = " << c << endl;
	// 判断是否为三角形
	if (isTriangle(a, b, c)) {
		cout << "能构成三角形（通过头文件引用）" << endl;
	}
	else {
		cout << "不能构成三角形（通过头文件引用）" << endl;
	}
	// 3. 阅读代码必备 定位快捷键
		// F12 跳转到函数 
		// Ctrl+F12 跳转到头文件
		// Shift+F12 ***不知道***
	if (isTriangle2(a, b, c)) {
		cout << "能构成三角形" << endl;
	}
	else {
		cout << "不能构成三角形" << endl;
	}
	// 4. 防止在多个头文件中引用同一个函数
		// 在定义头文件时 加入下方代码
		// #ifndef _头文件名（通常大写）_
		// #define _相同的头文件名_
		// 代码块
		// #endif
	// 5. 单步运行快捷键 F11
	// 6. 快速代码格式化 Ctrl+K+F
	// 7. 相关文件说明
		// 解决方案目录中 
			// .sln 打开后就是该程序
			// x64 中 Debug 中 的 .exe 文件 是代码调试生成的文件
	system("pause");
	return 0;
}