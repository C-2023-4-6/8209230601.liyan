#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double num;
	cout << "����һ����";
	cin >> num;
	if (a < 0) {
		std::cout << "������������ǷǸ�����" << std::endl;
		return 1;  // �˳�����
	}
	double xn = num;
	double precision = 1e-5;//���þ���
	while (true) {
		double xn1 = (xn + num / xn) / 2;
			if (abs(xn1 - xn) < precision) {
				cout << "ƽ����Ϊ" << xn1 << endl;
				break;
			}
			xn = xn1;
	}
	return 0;
}