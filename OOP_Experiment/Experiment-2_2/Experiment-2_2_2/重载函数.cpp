/*
    Course: Oriented Object Programming
    Created by Zehao Zhang on 2022-10-23.
*/
/*
    �����:  ���غ���
    ����VS��Ŀ, ���غ���int commonDivisor(int x1, int x2,...), �������2��, 3��, 4�����������Լ����
    ����ʵ�����������غ������ص���÷���
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
        cout << "��������Ҫ�ж����Լ�������ĸ���(2,3,4): ";
        cin >> select;
        switch (select) {
        case 2:
            cout << "������ " << select << " ������: ";
            cin >> x1 >> x2;
            cout << "����" << x1 << "," << x2 << "�����Լ��Ϊ: " << commonDivisor(x1, x2) << endl;
            break;
        case 3:
            cout << "������ " << select << " ������: ";
            cin >> x1 >> x2 >> x3;
            cout << "����" << x1 << "," << x2 << "," << x3 << "�����Լ��Ϊ: " << commonDivisor(x1, x2, x3) << endl;
            break;
        case 4:
            cout << "������ " << select << " ������: ";
            cin >> x1 >> x2 >> x3 >> x4;
            cout << "����" << x1 << "," << x2 << "," << x3 << "," << x4 << "�����Լ��Ϊ: " << commonDivisor(x1, x2, x3, x4) << endl;
            break;
        default:
            cout << "�������ݴ���! " << endl;
            return 0;
        }
        cout << "�����Ƿ�Ҫ�����ж�?(1.���� 0.�˳�����)" << endl;
        int temp;
        cin >> temp;
        if (temp == 0) {
            system("pause");
            return 0;
        }
    }
}