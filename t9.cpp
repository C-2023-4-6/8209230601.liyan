#include <iostream>
using namespace std;
int main() {
    char con;  
    double num1, num2, result;

    cout << "请输入运算符和两个操作数: "; // 提示先后输入运算符和两个操作数
    cin >> con >> num1 >> num2;

    switch (con) { // 根据运算符执行相应的操作
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
        if (num2 != 0) {// 检查除数是否为零
            result = num1 / num2;
        }
        else {
            cout << "错误：除数不能为零" << endl;
            return 1;  // 退出程序
        }
        break;
    case '%':
        if (num1 == static_cast<int>(num1) && num2 == static_cast<int>(num2)) {// 检查取余运算的数是否为整数
            if (num2 != 0) {// 检查除数是否为零
                result = static_cast<int>(num1) % static_cast<int>(num2);
            }
            else {
                cout << "错误：除数不能为零" << endl;
                return 1;  // 退出程序
            }
        }
        else {
            cout << "错误：取余运算的数必须是整数" << endl;
            return 1;  // 退出程序
        }
        break;
    default:
        cout << "错误：运算符非法" << endl;
        return 1;  // 退出程序
    }

    cout << "结果: " << result << endl;// 输出结果

    return 0;

}
