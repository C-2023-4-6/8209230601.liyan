#include <iostream>
using namespace std;
int main() {
    char a;
    int w = 0, s = 0, n = 0, t = 0;

    cout << "������һ���ַ�: ";

    while ((a = cin.get()) != '\n') {// ��ȡ�ַ�
        if (isalpha(a)) { // �ж��ַ����Ͳ�����
            w++;
        }
        else if (isspace(a)) {
            s++;
        }
        else if (isdigit(a)) {
            n++;
        }
        else {
            t++;
        }
    }
    cout << "Ӣ����ĸ: " << w << "��" << endl;// ���ͳ�ƽ��
    cout << "�ո�: " << s << "��" << endl;
    cout << "�����ַ�: " << n << "��" << endl;
    cout << "�����ַ�: " << t << "��" << endl;

    return 0;
}

    
    