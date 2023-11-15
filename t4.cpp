#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int testUnint = 65534; // 0xfffe

    
    cout << "output in unsigned int type: " << testUnint << endl;// ����� unsigned int �����µ�ֵ

   
    cout << "output in char type: " << static_cast<char>(testUnint) << endl; // ����� char �����µ�ֵ

   
    cout << "output in short type: " << static_cast<short>(testUnint) << endl;  // ����� short �����µ�ֵ

    
    cout << "output in int type: " << static_cast<int>(testUnint) << endl;// ����� int �����µ�ֵ

    
    cout << "output in double type: " << static_cast<double>(testUnint) << endl; // ����� double �����µ�ֵ

   
    cout << "output in double type: " << setprecision(4) << static_cast<double>(testUnint) << endl; // ����� double �����µ�ֵ���޶�С��λ��Ϊ4

   
    cout << "output in Hex unsigned int type: " << hex << testUnint << endl; // ����� Hex unsigned int �����µ�ֵ����16������ʽ

    cout << "output in Octal unsigned int type: " << oct << testUnint << endl;// �� testUnint ���Ϊ8����

    double testDouble = 123.456;
    int convertedInt = static_cast<int>(testDouble);
    cout << "Converted double to int: " << convertedInt << endl;// ��һ��ʵ��ת��Ϊ int���۲���
    
    system("pause");
    return 0;
}