/*
    Course: Oriented Object Programming
    Created by Zehao Zhang on 2022-10-25.
*/
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

double maxS = 0;
double maxC = 0;

bool isTrangle(double a, double b, double c) {
    if (a + b > c && a + c > b && b + c > a) {
        return true;
    }
    else {
        return false;
    }
}

double quadrature(double a, double b, double c) {
    double p = (a + b + c) * 0.5;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool maxS_C(double a, double b, double c) {
    if (a + b + c > maxC && quadrature(a, b, c) > maxS) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    double a = 0;
    double b = 0;
    double c = 0;
    int m;
    cout << "������ľ������Ŀ: m = ";
    cin >> m;
    cout << "������" << m << "��ľ���ĳ���: ";
    vector<double> length(m);
    for (int i = 0; i < m; ++i) {
        cin >> length[i];
    }
/**************************************************************************/
// ���Ӷ�̫�� n^3
//    for (int i = 0; i < m; ++i) {
//        for (int j = i + 1; j < m; ++j) {
//            for (int k = j + 1; k < m; ++k) {
//                if (isTrangle(length[i],length[j],length[k])) {
//                    if (maxS_C(length[i],length[j],length[k])) {
//                        maxS = quadrature(length[i],length[j],length[k]);
//                        maxC = length[i] + length[j] + length[k];
//                        a = length[i];
//                        b = length[j];
//                        c = length[k];
//                    }
//                }
//            }
//        }
//    }
/**************************************************************************/
    // �Ż�
    sort(length.begin(), length.end());
    for (int i = m - 1; i > 1; --i) {
        if (isTrangle(length[i], length[i - 1], length[i - 2]) && maxS_C(length[i], length[i - 1], length[i - 2])) {
            maxS = quadrature(length[i], length[i - 1], length[i - 2]);
            maxC = length[i] + length[i - 1] + length[i - 2];
            c = length[i];
            b = length[i - 1];
            a = length[i - 2];
            break;
        }
    }
    if (maxS == 0.0 && maxC == 0.0) {
        cout << 0 << endl;
    }
    else {
        cout << "���ɵ�����������ܳ�Ϊ: " << maxC << "\t(ѡ��" << a << "," << b << "," << c << ")" << endl;
        cout << "���ɵ�������������Ϊ: " << maxS << "\t(ѡ��" << a << "," << b << "," << c << ")" << endl;
    }
    system("pause");
    return 0;
}