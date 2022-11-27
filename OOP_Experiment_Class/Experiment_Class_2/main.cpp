#include <iostream>
#include "data.h"
using namespace std;


// ����������Ϊ�����Ĳ���
// ����ָ����Ϊ�����Ĳ���
// ����������Ϊ�����Ĳ���
void func(int a, int* p, int& r) {
	a = a + 1;
	*p = *p + 1;
	r = r + 1;
	//cout << " func :: i = " << a << endl;
	//cout << " func :: j = " << *p << endl;
	//cout << " func :: k = " << r << endl;
}

void objfunc(Data t, Data* p, Data& r) {
	// 1. ��ֵ
	t.setYear(2022);
	t.setMonth(11);
	t.setDay(18);

	// 2. ��ַ - Сè����
	p->setYear(2022);
	p->setMonth(11);
	p->setDay(18);

	// 3. ������ - ����ʡ
	r.setYear(2022);
	r.setMonth(11);
	r.setDay(18);
}

int main() {

	// 1. �������
	int i = 100, j = 200, k = 300;
	// �������
	cout << "����func����ǰ:" << endl;
	cout << " i = " << i << endl;
	cout << " j = " << j << endl;
	cout << " k = " << k << endl;
	// ���ú���
	func(i, &j, k); // ����ƽ�� һһ��Ӧ
	// ������� i j k
	cout << "����func������: " << endl;
	cout << " i = " << i << endl;
	cout << " j = " << j << endl;
	cout << " k = " << k << endl;


	// 2. ��������ص���
	Data A(2002, 12, 21); // ����ı����Ǳ���
	Data B(2022, 11, 19);
	Data C(2022, 12, 8);

	cout << "����objfunc����ǰ:" << endl;
	A.show();
	B.show();
	C.show();
	objfunc(A, &B, C);
	// ��ֵ���ĳ���
	// ��ַԶ�̲ٿ�
	// �����ö���ʡ
	cout << "����objfunc������:" << endl;
	A.show();
	B.show();
	C.show();

	system("pause");
	return 0;
}