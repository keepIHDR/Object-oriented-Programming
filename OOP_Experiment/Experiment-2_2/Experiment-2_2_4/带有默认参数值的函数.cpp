/*
    Course: Oriented Object Programming
    Created by Zehao Zhang on 2022-10-23.
*/
/*
    ������: ����Ĭ�ϲ���ֵ�ĺ���
    ����VS��Ŀ, ��ƶ๦��������double sortArray(double *parray, int flag), ����parrayΪָ�򸡵��������ָ�������flagΪ��־λ��
    Ҫ��ú���Ĭ��ʵ�ֶ�����Ԫ�ش�С��������flagĬ��Ϊ0�������flag��ֵΪ1����ʵ�ֶ�����Ԫ�شӴ�С����ʽ��
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
    cout << "����������Ԫ��: ";
    for (int i = 0; i < Count; ++i) {
        cin >> parray[i];
    }
    sortArray(parray);
    cout << "*�������С����������: ";
    for (int i = 0; i < Count; ++i) {
        cout << parray[i] << "\t";
    }
    cout << endl;
    sortArray(parray, 1);
    cout << "*������Ӵ�С������: ";
    for (int i = 0; i < Count; ++i) {
        cout << parray[i] << "\t";
    }
    cout << endl;
    system("pause");
    return 0;
}