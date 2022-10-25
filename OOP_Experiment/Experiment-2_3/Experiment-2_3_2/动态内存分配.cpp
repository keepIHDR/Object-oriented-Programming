/*
    Course: Oriented Object Programming
    Created by Zehao Zhang on 2022-10-25.
*/
/*
    建立C++项目，统计区间[100,999]内水仙花数的个数N，然后将这N个数以数组形式存储在动态内存空间，然后按照从小到大的顺序输出所有的水仙花数。
    提示：水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身。例如：1^3 + 5^3+ 3^3 = 153。
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