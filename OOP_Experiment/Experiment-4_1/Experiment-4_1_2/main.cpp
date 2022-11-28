#include<iostream>
#include<cmath>
using namespace std;
#include"point.h"

double distance(Point& A, Point& B) {
	double ans = (A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y);
	return sqrt(ans);
}

int main() {
	Point M(2, 3), N(5, 7);
	Point A(0, 0), B(1, 1);
	cout << "点 M 和点 N 之间的距离为: " << distance(M, N) << endl;
	cout << "点 A 和点 B 之间的距离为: " << distance(A, B) << endl;
	system("pause");
	return 0;
}