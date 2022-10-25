/*
    Course: Oriented Object Programming
    Created by Zehao Zhang on 2022-10-23.
*/
/*
    ����VS��Ŀ, ���ʵ������������ͬ�ļ�̺������޵ݹ��ѭ����������������һ������Ϊ����������
    Ҫ�����������ڵ��ø�����10000�Σ�����Ƚ����ֺ������Ե�ִ��ʱ�䣬����ʵ��������������������ͨ����������
 */
#include <iostream>
#include <ctime>

using namespace std;

inline void test01() {
    int a = 1;
    int b = 2;
    int temp = a;
    a = b;
    b = temp;
}

void test02() {
    int a = 1;
    int b = 2;
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    double t1, t2;
    t1 = (double)clock();
    for (int i = 0; i < 100000000; ++i) {
        test01();
    }
    t2 = (double)clock();
    cout << "��������������ʱ��Ϊ: " << (t2 - t1) / CLK_TCK << endl;
    t1 = (double)clock();
    for (int i = 0; i < 100000000; ++i) {
        test02();
    }
    t2 = (double)clock();
    cout << "��ͨ����������ʱ��Ϊ: " << (t2 - t1) / CLK_TCK << endl;
    system("pause");
    return 0;
}