#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int testUnint = 65534; // 0xfffe

    
    cout << "output in unsigned int type: " << testUnint << endl;// 输出在 unsigned int 类型下的值

   
    cout << "output in char type: " << static_cast<char>(testUnint) << endl; // 输出在 char 类型下的值

   
    cout << "output in short type: " << static_cast<short>(testUnint) << endl;  // 输出在 short 类型下的值

    
    cout << "output in int type: " << static_cast<int>(testUnint) << endl;// 输出在 int 类型下的值

    
    cout << "output in double type: " << static_cast<double>(testUnint) << endl; // 输出在 double 类型下的值

   
    cout << "output in double type: " << setprecision(4) << static_cast<double>(testUnint) << endl; // 输出在 double 类型下的值，限定小数位数为4

   
    cout << "output in Hex unsigned int type: " << hex << testUnint << endl; // 输出在 Hex unsigned int 类型下的值，以16进制形式

    cout << "output in Octal unsigned int type: " << oct << testUnint << endl;// 将 testUnint 输出为8进制

    double testDouble = 123.456;
    int convertedInt = static_cast<int>(testDouble);
    cout << "Converted double to int: " << convertedInt << endl;// 将一个实数转换为 int，观察结果
    
    system("pause");
    return 0;
}