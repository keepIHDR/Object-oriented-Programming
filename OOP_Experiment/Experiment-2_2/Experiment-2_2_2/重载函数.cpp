/*
    Course: Oriented Object Programming
    Created by Zehao Zhang on 2022-10-23.
*/
/*
    任务二:  重载函数
    建立VS项目, 重载函数int commonDivisor(int x1, int x2,...), 计算输出2个, 3个, 4个整数的最大公约数。
    基于实验结果分析重载函数的特点和用法。
 */
#include <iostream>
using namespace std;

int commonDivisor(int x1, int x2) {
    while (x1 * x2 != 0) {
        if (x1 > x2) {
            x1 %= x2;
        }
        else {
            x2 %= x1;
        }
    }
    return x1 + x2;
}

int commonDivisor(int x1, int x2, int x3) {
    return commonDivisor(x1, commonDivisor(x2, x2));
}

int commonDivisor(int x1, int x2, int x3, int x4) {
    return commonDivisor(x1, commonDivisor(x2, x3, x4));
}

int main() {
    int select = 0;
    int x1, x2, x3, x4;
    while (1) {
        cout << "请输入您要判断最大公约数的数的个数(2,3,4): ";
        cin >> select;
        switch (select) {
        case 2:
            cout << "请输入 " << select << " 个整数: ";
            cin >> x1 >> x2;
            cout << "整数" << x1 << "," << x2 << "的最大公约数为: " << commonDivisor(x1, x2) << endl;
            break;
        case 3:
            cout << "请输入 " << select << " 个整数: ";
            cin >> x1 >> x2 >> x3;
            cout << "整数" << x1 << "," << x2 << "," << x3 << "的最大公约数为: " << commonDivisor(x1, x2, x3) << endl;
            break;
        case 4:
            cout << "请输入 " << select << " 个整数: ";
            cin >> x1 >> x2 >> x3 >> x4;
            cout << "整数" << x1 << "," << x2 << "," << x3 << "," << x4 << "的最大公约数为: " << commonDivisor(x1, x2, x3, x4) << endl;
            break;
        default:
            cout << "输入数据错误! " << endl;
            return 0;
        }
        cout << "请问是否要继续判断?(1.继续 0.退出程序)" << endl;
        int temp;
        cin >> temp;
        if (temp == 0) {
            system("pause");
            return 0;
        }
    }
}