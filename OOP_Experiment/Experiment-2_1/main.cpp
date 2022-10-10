#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

// 素数判别函数
bool isPrimeNumber(int m) {
	int top = sqrt(m);
	for (int i = 2; i <= top; i++) {
		if (m % i == 0) {
			return false;
		}
	}
	return true;
}

// 将字符串转化为数字
int s2i(string s) {
	return atoi(s.c_str());
}

// 判断是否为数字
bool isDigit(string s) {
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (s[i] - '0' >= 0 && s[i] - '0' <= 9) {
			continue;
		}
		return false;
	}
	return true;
}

// 哥德巴赫猜想验证输入函数
int cin_to_N() {
	string temp_str_N;
	int temp_N;
	cout << "--------------------------------" << endl;
	cout << "请输入一个整数N (N>6): ";
	cin >> temp_str_N;
	cout << "--------------------------------" << endl;
	temp_N = s2i(temp_str_N);
	if (temp_N > 6 && isDigit(temp_str_N)) {
		return temp_N;
	}
	else {
		cout << "请按要求输入数据!" << endl;
		return cin_to_N();
	}
}

// 验证哥德巴赫猜想
void DecodeEvenToPrime(int num) {
	for (int i = num; i > 5; i--) {
		if (i % 2 == 0) {
			for (int p = 2; p <= i / 2; p++) {
				if (isPrimeNumber(p)) {
					for (int q = i / 2; q <= i; q++) {
						if (isPrimeNumber(q) && p + q == i) {
							cout << "偶数" << i << "的素数分解结果: " << i << " = " << p << " + " << q << endl;
						}
					}
				}
			}
		}
	}
}

// 主函数
int main() {

	/******* 任务一: C++素数判断 *******/
	cout << "--------------------------------" << endl;
	cout << "----- 任务一: C++素数判断  -----" << endl;
	int m;
	cout << "--------------------------------" << endl;
	cout << "请输入任意一个整数: ";
	cin >> m;
	cout << "--------------------------------" << endl;
	if (isPrimeNumber(m)) {
		cout << "整数" << m << "是素数: " << "True" << endl;
	}
	else {
		cout << "整数" << m << "是素数: " << "False" << endl;
	}
	system("pause");
	/******* 任务二: C++验证哥德巴赫猜想 *******/
	cout << endl;
	cout << "--------------------------------" << endl;
	cout << "- 任务二: C++验证哥德巴赫猜想  -" << endl;
	int N = cin_to_N();
	DecodeEvenToPrime(N);
	cout << "--------------------------------" << endl;
	cout << "输出完毕! " << endl;
	system("pause");
	return 0;
}