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
    函数的重载的规则:
        函数名称必须相同。
        参数列表必须不同（个数不同、类型不同、参数排列顺序不同等）。
        函数的返回类型可以相同也可以不相同。
        仅仅返回类型不同不足以成为函数的重载。
 */

 //void swap(int &x, int &y)  错误2 不能与上面函数构成函数重载
 //{
 //    int temp;
 //    temp = x; x = y; y = temp;
 //}

 /******************** 主函数 ********************/

int main()
{

    cout << "---------------------------" << endl;

    //1. 传值，传址和传引用分析
    int a = 1, b = 2, c = 3;
    cout << "---------------------------" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    //function(a, b, c); 错误1 应该传b的地址
    function(a, &b, c);
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;


    //2. 引用规律分析
    int& r = a;
    r = a + b + c;
    a = r + a + b + c;
    //cout << "r = " << endl; 错误3 没输出r
    cout << "r = " << r << endl;
    cout << "a = " << a << endl;

    cout << "&r = " << &r << endl;
    cout << "&a = " << &a << endl;



    cout << "---------------------------" << endl;

    //3. 局部变量存储分析
    int i = 10, j = 20, k = 30;

    cout << "变量i的地址：" << &i << endl;
    cout << "变量j的地址：" << &j << endl;
    cout << "变量k的地址：" << &k << endl;


    //4. 动态内存申请分析
    //int *p1 = new int[10](10);
    //int *p2 = new int[10](10,20,30); 错误4 初始化数组错误
    int* p1 = new int[10] {10};
    int* p2 = new int[10] {10, 20, 30};

    cout << "变量p1地址：" << &p1 << endl;
    cout << "变量p2地址：" << &p2 << endl;

    cout << "变量p1指向的地址：" << p1 << endl;
    cout << "变量p2指向的地址：" << p2 << endl;


    system("pause");

    // 错误5 缺少对申请内存空间的释放操作
    delete[] p1;
    delete[] p2;

    return 0;
}