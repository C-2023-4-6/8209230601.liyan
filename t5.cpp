#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double f, c;

    cout << "�����뻪���¶�: ";// ��ʾ���뻪���¶�
    
    cin >> f;

    c = (f - 32.0) * 5.0 / 9.0;// �ù�ʽ�������¶�ת��Ϊ�����¶�

    cout << "�����¶�Ϊ: " << fixed << setprecision(2) << c << " ��" << endl;// ��������¶ȣ�������λС��

    return 0;
}