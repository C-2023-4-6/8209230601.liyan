#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 5; ++i) {// ʹ��Ƕ��ѭ�����ͼ��

        for (int j = 1; j <= i; ++j) {// �ڲ�ѭ������ÿһ���е��Ǻ�����
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

    