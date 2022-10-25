/*
    Course: Oriented Object Programming
    Created by Zehao Zhang on 2022-10-23.
*/
#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;


int& function(int v, int* p, int& r)
{
    v = (*p)++;

    *p = 100;

    p = new int;

    *p = 1000;

    r = v + (*p)++;

    delete p;

    return v;
}


void swap(int x, int y)
{
    int temp;
    temp = x; x = y; y = temp;

}
void swap(int* x, int* y)
{
    int temp;
    temp = *x; *x = *y; *y = temp;
}

/*
    ���������صĹ���:
        �������Ʊ�����ͬ��
        �����б���벻ͬ��������ͬ�����Ͳ�ͬ����������˳��ͬ�ȣ���
        �����ķ������Ϳ�����ͬҲ���Բ���ͬ��
        �����������Ͳ�ͬ�����Գ�Ϊ���������ء�
 */

 //void swap(int &x, int &y)  ����2 ���������溯�����ɺ�������
 //{
 //    int temp;
 //    temp = x; x = y; y = temp;
 //}

 /******************** ������ ********************/

int main()
{

    cout << "---------------------------" << endl;

    //1. ��ֵ����ַ�ʹ����÷���
    int a = 1, b = 2, c = 3;
    cout << "---------------------------" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    //function(a, b, c); ����1 Ӧ�ô�b�ĵ�ַ
    function(a, &b, c);
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;


    //2. ���ù��ɷ���
    int& r = a;
    r = a + b + c;
    a = r + a + b + c;
    //cout << "r = " << endl; ����3 û���r
    cout << "r = " << r << endl;
    cout << "a = " << a << endl;

    cout << "&r = " << &r << endl;
    cout << "&a = " << &a << endl;



    cout << "---------------------------" << endl;

    //3. �ֲ������洢����
    int i = 10, j = 20, k = 30;

    cout << "����i�ĵ�ַ��" << &i << endl;
    cout << "����j�ĵ�ַ��" << &j << endl;
    cout << "����k�ĵ�ַ��" << &k << endl;


    //4. ��̬�ڴ��������
    //int *p1 = new int[10](10);
    //int *p2 = new int[10](10,20,30); ����4 ��ʼ���������
    int* p1 = new int[10] {10};
    int* p2 = new int[10] {10, 20, 30};

    cout << "����p1��ַ��" << &p1 << endl;
    cout << "����p2��ַ��" << &p2 << endl;

    cout << "����p1ָ��ĵ�ַ��" << p1 << endl;
    cout << "����p2ָ��ĵ�ַ��" << p2 << endl;


    system("pause");

    // ����5 ȱ�ٶ������ڴ�ռ���ͷŲ���
    delete[] p1;
    delete[] p2;

    return 0;
}