/*
    Course: Oriented Object Programming
    Created by Zehao Zhang on 2022-10-23.
*/
/*
    任务四: 带有默认参数值的函数
    建立VS项目, 设计多功能排序函数double sortArray(double *parray, int flag), 其中parray为指向浮点型数组的指针变量，flag为标志位。
    要求该函数默认实现对数组元素从小到大排序（flag默认为0），如果flag数值为1，则实现对数组元素从大到小排序方式。
 */

#include <iostream>
#include <cstring>
using namespace std;

const int Count = 9;

double sortArray(double* parray, int flag = 0) {
    int n = Count;
    if (flag == 0) {
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < n - i; ++j) {
                if (parray[j] < parray[j - 1]) {
                    swap(parray[j], parray[j - 1]);
                }
            }
        }
    }
    else if (flag == 1) {
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < n - i; ++j) {
                if (parray[j] > parray[j - 1]) {
                    swap(parray[j], parray[j - 1]);
                }
            }
        }
    }
    return 0;
}

int main() {
    auto* parray = new double[Count];
    cout << "请输入数组元素: ";
    for (int i = 0; i < Count; ++i) {
        cin >> parray[i];
    }
    sortArray(parray);
    cout << "*该数组从小到大排序结果: ";
    for (int i = 0; i < Count; ++i) {
        cout << parray[i] << "\t";
    }
    cout << endl;
    sortArray(parray, 1);
    cout << "*该数组从大到小排序结果: ";
    for (int i = 0; i < Count; ++i) {
        cout << parray[i] << "\t";
    }
    cout << endl;
    system("pause");
    return 0;
}