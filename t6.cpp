#include <iostream>
using namespace std;
int main() {
    char lowercase;
    int next;
   
    cout << "������һ���ַ�: "; // ��ʾ�����ַ�
    cin >> lowercase;

    if (lowercase >= 'a' && lowercase <= 'z') {// ��������ַ��Ƿ�ΪСд��ĸ,�����Сд��ĸ����ת��Ϊ��д�����
        
        char capital = lowercase - 32; // ��ASCII���У�Сд���д�Ĳ�ֵΪ32
        cout << "��д�ַ�Ϊ: " << capital << endl;
    }
    else {// �������Сд��ĸ������������ַ���ASCII��ֵ
        
        next = static_cast<int>(lowercase) + 1; // ��ȡ��һ���ַ���ASCII��ֵ
        cout << "�����ַ�����һ��ASCII��ֵΪ: " << next << endl;
    }

    return 0;
}
