#include<iostream>
using namespace std;

class Complex {
public:
	double real, imag;
public:
	Complex() {}
	Complex(double a, double b) {
		real = a;
		imag = b;
	}
	Complex(const Complex& r) {
		this->real = r.real;
		this->imag = r.imag;
	}
	~Complex() {}
	// ��ͨ����
	void show() {
		cout << "�ø���Ϊ: " << real << " + " << imag << "i" << endl;
	}
	// ���ؼӷ�+�����  ˫Ŀ�����  ��Ա����
	Complex operator+(Complex& r1) {
		Complex temp;
		temp.real = this->real + r1.real;
		temp.imag = this->imag + r1.imag;
		return temp;
	}

	friend Complex operator-(Complex& r1, Complex& r2);
};

// ��Ԫ����
Complex operator-(Complex& r1, Complex& r2) {
	Complex temp;
	temp.real = r1.real - r2.real;
	temp.imag = r1.imag - r2.imag;
	return temp;
}

int main() {
	int a = 1, b = 2;

	int c = a + b;

	Complex A(2, 3);
	Complex B(1, -2);
	
	Complex C = A + B;
	Complex D = A - B;

	C.show();
	D.show();

	system("pause");
	return 0;
}