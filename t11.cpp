#include<iostream>
using namespace std;
int main(){
	int p, q;
	cout << "��������������";
	cin >> p >> q;
	int a = p, b = q;
	
	while (b != 0) {//շת�����
		int c = b;
		b = a % b;
		a = c;
    }
	int r = a;//���Լ��
	int d = (p * q) / r;//��С������
	cout << "���Լ��Ϊ" << r << endl;
	cout << "��С������Ϊ" << d << endl;
    return 0;
}