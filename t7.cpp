#include <iostream>
using namespace std;
int main() {
    double x, y;

    cout << "������ x ֵ: ";// ��ʾ���� x ֵ
    cin >> x;

    if (x > 0 && x < 1) {
        y = 3 - 2 * x;
    }
    else if (x >= 1 && x < 5) {
        y = 2 / (4 * x) + 1;
    }
    else if (x >= 5 && x < 10) {
        y = x * x;
    }
    
    cout << "����ʽ��ֵΪ: " << y << endl;// ������

    return 0;
}