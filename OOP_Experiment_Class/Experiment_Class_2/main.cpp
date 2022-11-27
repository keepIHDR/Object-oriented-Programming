#include <iostream>
#include "data.h"
using namespace std;


// 变量本身作为函数的参数
// 变量指针作为函数的参数
// 变量引用作为函数的参数
void func(int a, int* p, int& r) {
	a = a + 1;
	*p = *p + 1;
	r = r + 1;
	//cout << " func :: i = " << a << endl;
	//cout << " func :: j = " << *p << endl;
	//cout << " func :: k = " << r << endl;
}

void objfunc(Data t, Data* p, Data& r) {
	// 1. 传值
	t.setYear(2022);
	t.setMonth(11);
	t.setDay(18);

	// 2. 传址 - 小猫钓鱼
	p->setYear(2022);
	p->setMonth(11);
	p->setDay(18);

	// 3. 传引用 - 多快好省
	r.setYear(2022);
	r.setMonth(11);
	r.setDay(18);
}

int main() {

	// 1. 变量相关
	int i = 100, j = 200, k = 300;
	// 输出变量
	cout << "调用func函数前:" << endl;
	cout << " i = " << i << endl;
	cout << " j = " << j << endl;
	cout << " k = " << k << endl;
	// 调用函数
	func(i, &j, k); // 上下平衡 一一对应
	// 重新输出 i j k
	cout << "调用func函数后: " << endl;
	cout << " i = " << i << endl;
	cout << " j = " << j << endl;
	cout << " k = " << k << endl;


	// 2. 传对象相关的量
	Data A(2002, 12, 21); // 对象的本质是变量
	Data B(2022, 11, 19);
	Data C(2022, 12, 8);

	cout << "调用objfunc函数前:" << endl;
	A.show();
	B.show();
	C.show();
	objfunc(A, &B, C);
	// 传值不改初衷
	// 传址远程操控
	// 传引用多快好省
	cout << "调用objfunc函数后:" << endl;
	A.show();
	B.show();
	C.show();

	system("pause");
	return 0;
}