#include <iostream>
#include "rectangle.h"
#include "student.h"

using namespace std;

/*
	��ı������ļ�, ����һ������ǰ
	��ͨ����������, �򷨹���������
*/

void func(Rectangle v, Rectangle* p, Rectangle& r) {
	v.set(10, 20);
	cout << "�޸ĺ�ľ���v�ı߳�Ϊ: a = " << v.get_a()
		<< ", b = " << v.get_b() << endl;
	p->set(10, 20);
	cout << "�޸ĺ��ָ��pָ��ľ��εı߳�Ϊ: a = " << p->get_a()
		<< ", b = " << p->get_b() << endl;
	r.set(10, 20);
	cout << "�޸ĺ�����õľ���r�ı߳�Ϊ: a = " << r.get_a()
		<< ", b = " << r.get_b() << endl;
}

int main() {

	/***** ����һ: �����������ʵ�� *****/
	cout << "--------------------------------------" << endl;
	cout << "      ����һ: �����������ʵ��      " << endl;
	cout << "--------------------------------------" << endl;
	Student stu;
	stu.set();
	stu.PringInformation();
	stu.set_P(99);
	stu.set_M(99);
	stu.set_L(100);
	stu.PringInformation();
	cout << "����һִ�����!" << endl;
	system("pause");
	system("cls");


	/***** �����: ���ڹ��캯�����ʵ�� ******/
	cout << "--------------------------------------" << endl;
	cout << "     �����: ���ڹ��캯�����ʵ��    " << endl;
	cout << "--------------------------------------" << endl;
	Rectangle rec1(5, 5), rec2(rec1), rec3;
	// ��ʼ�������
	rec3.Init(10, 12);
	// ������εı߳�
	cout << "����rec1�ı߳�Ϊ: a = " << rec1.get_a() 
		<< ", b = " << rec1.get_b() << endl;
	cout << "����rec2�ı߳�Ϊ: a = " << rec2.get_a() 
		<< ", b = " << rec2.get_b() << endl;
	cout << "����rec3�ı߳�Ϊ: a = " << rec3.get_a() 
		<< ", b = " << rec3.get_b() << endl;
	// �޸ľ��εı߳�
	cout << "����Ծ���rec2�ı߳������޸�: a = 5, b = 9" << endl;
	rec2.set(5, 9);
	// �жϾ����Ƿ�Ϊ������
	cout << "����rec1";
	rec1.isSquare() ? cout << "��" : cout << "����";
	cout << "������" << endl;
	cout << "����rec2";
	rec2.isSquare() ? cout << "��" : cout << "����";
	cout << "������" << endl;
	cout << "����rec3";
	rec3.isSquare() ? cout << "��" : cout << "����";
	cout << "������" << endl;
	// ������ε��ܳ�
	cout << "����rec1���ܳ�Ϊ: " << rec1.length() << endl;
	cout << "����rec2���ܳ�Ϊ: " << rec2.length() << endl;
	cout << "����rec3���ܳ�Ϊ: " << rec3.length() << endl;
	// ������ε����
	cout << "����rec1�����Ϊ: " << rec1.area() << endl;
	cout << "����rec2�����Ϊ: " << rec2.area() << endl;
	cout << "����rec3�����Ϊ: " << rec3.area() << endl;
	// ͨ��sizeof������������洢������
	cout << "����rec1������ռ�洢�ռ��СΪ: " << sizeof(rec1) << endl;
	cout << "����rec2������ռ�洢�ռ��СΪ: " << sizeof(rec2) << endl;
	cout << "����rec3������ռ�洢�ռ��СΪ: " << sizeof(rec3) << endl;
	// ̽��������Ϊ����ʱ���÷�
	func(rec1, &rec2, rec3);
	// �����ǰ���εı߳�
	cout << "��ǰ���εı߳�:" << endl;
	cout << ">> ����rec1�ı߳�Ϊ: a = " << rec1.get_a()
		<< ", b = " << rec1.get_b() << endl;
	cout << ">> ����rec2�ı߳�Ϊ: a = " << rec2.get_a()
		<< ", b = " << rec2.get_b() << endl;
	cout << ">> ����rec3�ı߳�Ϊ: a = " << rec3.get_a()
		<< ", b = " << rec3.get_b() << endl;

	cout << "�����ִ�����!" << endl;
	system("pause");
	system("cls");
	cout << "��������ִ��: " << endl;
	return 0;
}