#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    double d;
    bool isIsosceles = false;

    cout << "�����������ε�������: "; // ��ʾ����������
    cin >> a >> b >> c;

    d = a + b + c;// �����ܳ�
    
    if (a == b || a == c || b == c) {// �ж��Ƿ�Ϊ����������
        isIsosceles = true;
    }
    
     if (a + b > c && a + c > b && b + c > a) {// �ж��Ƿ�Ϊ������
        cout << "����һ��������" << endl;
        cout << "�ܳ�Ϊ: " << d << endl;
        if (isIsosceles) {
            cout << "����һ������������" << endl;
        }
        else {
            cout << "�ⲻ��һ������������" << endl;
        }
    }
    else {
        cout << "���������޷�����������" << endl;
    }
    

    return 0;
   
}
