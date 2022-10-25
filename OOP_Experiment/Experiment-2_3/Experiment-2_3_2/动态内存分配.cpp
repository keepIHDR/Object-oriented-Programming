/*
    Course: Oriented Object Programming
    Created by Zehao Zhang on 2022-10-25.
*/
/*
    ����C++��Ŀ��ͳ������[100,999]��ˮ�ɻ����ĸ���N��Ȼ����N������������ʽ�洢�ڶ�̬�ڴ�ռ䣬Ȼ���մ�С�����˳��������е�ˮ�ɻ�����
    ��ʾ��ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵������������磺1^3 + 5^3+ 3^3 = 153��
 */
#include <iostream>
using namespace std;

typedef struct sxhnums {
    int nums;
    sxhnums* next;
}SXH;

int main() {
    SXH* head = new SXH;
    int length = 0;
    SXH* p = head;
    for (int i = 100; i < 1000; ++i) {
        int n = i % 10;
        int m = i / 10 % 10;
        int l = i / 100 % 10;
        if (n * n * n + m * m * m + l * l * l == i) {
            if (length == 0) {
                p->nums = i;
                length++;
            }
            else {
                SXH* q = new SXH;
                p->next = q;
                q->nums = i;
                length++;
                p = q;
            }
        }
    }
    p = head;
    for (int i = 0; i < length; ++i) {
        cout << p->nums << "\t";
        p = p->next;
    }
    cout << endl;
    system("pause");
    return 0;
}