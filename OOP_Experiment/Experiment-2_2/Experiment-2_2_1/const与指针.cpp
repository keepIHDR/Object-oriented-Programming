/*
    Course: Oriented Object Programming
    Created by Zehao Zhang on 2022-10-23.
*/
/*
    任务一：const与指针
    建立VS项目, 设计带有const常量指针的函数double triangleArea(const double *parray)， 通过该函数计算输出三角形的面积。
    要求主函数通过数组方式传递三角形边长，基于实验结果分析const在该函数中的作用。
 */
#include <iostream>
#include <cmath>
using namespace std;

bool isTriangle(double x, double y, double z) {
    if (x + y > z && x + z > y && z + y > x) return true;
    else return false;
}

double triangleArea(const double* parray) {
    double p = 0.5 * (parray[0] + parray[1] + parray[2]);
    return sqrt(p * (p - parray[0]) * (p - parray[1]) * (p - parray[2]));
}

int main() {
    double parray[3];
    cout << "请依次输入三条边长: ";
    cin >> parray[0] >> parray[1] >> parray[2];
    if (!isTriangle(parray[0], parray[1], parray[2])) {
        cout << "输入的三边边长不能构成三角形! " << endl;
        return 1;
    }
    cout << "边长为" << parray[0] << ", " << parray[1] << ", " << parray[2] << "的三角形面积: " << triangleArea(parray) << endl;
    system("pause");
    return 0;
}