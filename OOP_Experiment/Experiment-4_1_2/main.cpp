#include<iostream>
#include<cmath>
using namespace std;
#include"point.h"

double distance(Point& A, Point& B) {
	double ans = (A.x - B.x)*(A.x - B.x) + (A.y - B.y) * (A.y - B.y);
	return sqrt(ans);
}

int main() {
	Point M(2, 3), N(5, 7);
	cout << "�� M �͵� N ֮��ľ���Ϊ: " << distance(M, N) << endl;
	system("pause");
	return 0;
}