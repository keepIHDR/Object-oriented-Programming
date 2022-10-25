/*
    Course: Oriented Object Programming
    Created by Zehao Zhang on 2022-10-23.
*/
/*
    ����һ��const��ָ��
    ����VS��Ŀ, ��ƴ���const����ָ��ĺ���double triangleArea(const double *parray)�� ͨ���ú���������������ε������
    Ҫ��������ͨ�����鷽ʽ���������α߳�������ʵ��������const�ڸú����е����á�
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
    cout << "���������������߳�: ";
    cin >> parray[0] >> parray[1] >> parray[2];
    if (!isTriangle(parray[0], parray[1], parray[2])) {
        cout << "��������߱߳����ܹ���������! " << endl;
        return 1;
    }
    cout << "�߳�Ϊ" << parray[0] << ", " << parray[1] << ", " << parray[2] << "�����������: " << triangleArea(parray) << endl;
    system("pause");
    return 0;
}