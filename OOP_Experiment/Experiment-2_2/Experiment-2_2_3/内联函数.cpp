/*
    Course: Oriented Object Programming
    Created by Zehao Zhang on 2022-10-23.
*/
/*
    建立VS项目, 设计实现两个功能相同的简短函数（无递归和循环操作），将其中一个设置为内联函数。
    要求在主函数内调用各函数10000次，计算比较两种函数各自的执行时间，基于实验结果分析内联函数和普通函数的区别。
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
    cout << "内联函数的运行时间为: " << (t2 - t1) / CLK_TCK << endl;
    t1 = (double)clock();
    for (int i = 0; i < 100000000; ++i) {
        test02();
    }
    t2 = (double)clock();
    cout << "普通函数的运行时间为: " << (t2 - t1) / CLK_TCK << endl;
    system("pause");
    return 0;
}