#include<iostream>
using namespace std;
int main(){
	int p, q;
	cout << "输入两个正整数";
	cin >> p >> q;
	int a = p, b = q;
	
	while (b != 0) {//辗转相除法
		int c = b;
		b = a % b;
		a = c;
    }
	int r = a;//最大公约数
	int d = (p * q) / r;//最小公倍数
	cout << "最大公约数为" << r << endl;
	cout << "最小公倍数为" << d << endl;
    return 0;
}