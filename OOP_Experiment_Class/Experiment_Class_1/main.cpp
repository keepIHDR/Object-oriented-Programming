/*
* ʱ��: 2022-10-07
* ���ߣ�Zehao Zhang
* ��Ŀ���������������
*/

#include <iostream>
#include "triangle2.h"
using namespace std;

// �ж��Ƿ�Ϊ������  abc�ֱ�Ϊ���߱߳�
bool isTriangle(float a, float b, float c) {
	if (a + b > c && a + c > b && b + c > a) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	// 1. ��ݸ���
	cout << "Hello Word!" << endl;
	// ���ĳһ�� ����ѡ��Ctrl+C ���Ը�������
	cout << "Hello Word!" << endl;
	cout << "Hello Word!" << endl;
	// 2. �ж��Ƿ�Ϊ������
	int a, b, c;
	// ��������
	cout << "�����������ε������߳�: ";
	cin >> a >> b >> c;
	cout << "a = " << a << "\tb = " << b << "\tc = " << c << endl;
	// �ж��Ƿ�Ϊ������
	if (isTriangle(a, b, c)) {
		cout << "�ܹ��������Σ�ͨ��ͷ�ļ����ã�" << endl;
	}
	else {
		cout << "���ܹ��������Σ�ͨ��ͷ�ļ����ã�" << endl;
	}
	// 3. �Ķ�����ر� ��λ��ݼ�
		// F12 ��ת������ 
		// Ctrl+F12 ��ת��ͷ�ļ�
		// Shift+F12 ***��֪��***
	if (isTriangle2(a, b, c)) {
		cout << "�ܹ���������" << endl;
	}
	else {
		cout << "���ܹ���������" << endl;
	}
	// 4. ��ֹ�ڶ��ͷ�ļ�������ͬһ������
		// �ڶ���ͷ�ļ�ʱ �����·�����
		// #ifndef _ͷ�ļ�����ͨ����д��_
		// #define _��ͬ��ͷ�ļ���_
		// �����
		// #endif
	// 5. �������п�ݼ� F11
	// 6. ���ٴ����ʽ�� Ctrl+K+F
	// 7. ����ļ�˵��
		// �������Ŀ¼�� 
			// .sln �򿪺���Ǹó���
			// x64 �� Debug �� �� .exe �ļ� �Ǵ���������ɵ��ļ�
	system("pause");
	return 0;
}