#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double a = 0.8; // ���嵥��
    double i = 1.0; // �����ĸ������汾
    double b = 2, x = 2;
    while (b*2<= 100) {
        i++;
        b = b * 2; // ����ÿ�칺���ƻ������Ϊǰһ�������
        x = x + b; //��ƻ������
    }
    
    double w = a * x;
    double p = w / i;

    cout << "ÿ��ƽ������Ϊ: " << p << endl;

    return 0;
}
