#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

// �����б���
bool isPrimeNumber(int m) {
	int top = sqrt(m);
	for (int i = 2; i <= top; i++) {
		if (m % i == 0) {
			return false;
		}
	}
	return true;
}

// ���ַ���ת��Ϊ����
int s2i(string s) {
	return atoi(s.c_str());
}

// �ж��Ƿ�Ϊ����
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

// ��°ͺղ�����֤���뺯��
int cin_to_N() {
	string temp_str_N;
	int temp_N;
	cout << "--------------------------------" << endl;
	cout << "������һ������N (N>6): ";
	cin >> temp_str_N;
	cout << "--------------------------------" << endl;
	temp_N = s2i(temp_str_N);
	if (temp_N > 6 && isDigit(temp_str_N)) {
		return temp_N;
	}
	else {
		cout << "�밴Ҫ����������!" << endl;
		return cin_to_N();
	}
}

// ��֤��°ͺղ���
void DecodeEvenToPrime(int num) {
	for (int i = num; i > 5; i--) {
		if (i % 2 == 0) {
			for (int p = 2; p <= i / 2; p++) {
				if (isPrimeNumber(p)) {
					for (int q = i / 2; q <= i; q++) {
						if (isPrimeNumber(q) && p + q == i) {
							cout << "ż��" << i << "�������ֽ���: " << i << " = " << p << " + " << q << endl;
						}
					}
				}
			}
		}
	}
}

// ������
int main() {

	/******* ����һ: C++�����ж� *******/
	cout << "--------------------------------" << endl;
	cout << "----- ����һ: C++�����ж�  -----" << endl;
	int m;
	cout << "--------------------------------" << endl;
	cout << "����������һ������: ";
	cin >> m;
	cout << "--------------------------------" << endl;
	if (isPrimeNumber(m)) {
		cout << "����" << m << "������: " << "True" << endl;
	}
	else {
		cout << "����" << m << "������: " << "False" << endl;
	}
	system("pause");
	/******* �����: C++��֤��°ͺղ��� *******/
	cout << endl;
	cout << "--------------------------------" << endl;
	cout << "- �����: C++��֤��°ͺղ���  -" << endl;
	int N = cin_to_N();
	DecodeEvenToPrime(N);
	cout << "--------------------------------" << endl;
	cout << "������! " << endl;
	system("pause");
	return 0;
}