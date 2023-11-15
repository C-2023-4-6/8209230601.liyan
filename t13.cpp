#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double num;
	cout << "输入一个数";
	cin >> num;
	if (a < 0) {
		std::cout << "输入的数必须是非负数。" << std::endl;
		return 1;  // 退出程序
	}
	double xn = num;
	double precision = 1e-5;//设置精度
	while (true) {
		double xn1 = (xn + num / xn) / 2;
			if (abs(xn1 - xn) < precision) {
				cout << "平方根为" << xn1 << endl;
				break;
			}
			xn = xn1;
	}
	return 0;
}