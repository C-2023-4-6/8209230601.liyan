#include <iostream>
using namespace std;
int main() {
    char con;  
    double num1, num2, result;

    cout << "�����������������������: "; // ��ʾ�Ⱥ����������������������
    cin >> con >> num1 >> num2;

    switch (con) { // ���������ִ����Ӧ�Ĳ���
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {// �������Ƿ�Ϊ��
            result = num1 / num2;
        }
        else {
            cout << "���󣺳�������Ϊ��" << endl;
            return 1;  // �˳�����
        }
        break;
    case '%':
        if (num1 == static_cast<int>(num1) && num2 == static_cast<int>(num2)) {// ���ȡ����������Ƿ�Ϊ����
            if (num2 != 0) {// �������Ƿ�Ϊ��
                result = static_cast<int>(num1) % static_cast<int>(num2);
            }
            else {
                cout << "���󣺳�������Ϊ��" << endl;
                return 1;  // �˳�����
            }
        }
        else {
            cout << "����ȡ�������������������" << endl;
            return 1;  // �˳�����
        }
        break;
    default:
        cout << "����������Ƿ�" << endl;
        return 1;  // �˳�����
    }

    cout << "���: " << result << endl;// ������

    return 0;

}
