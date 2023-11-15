#include <iostream>
using namespace std;
int main() {
    char a;
    int w = 0, s = 0, n = 0, t = 0;

    cout << "请输入一行字符: ";

    while ((a = cin.get()) != '\n') {// 读取字符
        if (isalpha(a)) { // 判断字符类型并计数
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
    cout << "英文字母: " << w << "个" << endl;// 输出统计结果
    cout << "空格: " << s << "个" << endl;
    cout << "数字字符: " << n << "个" << endl;
    cout << "其他字符: " << t << "个" << endl;

    return 0;
}

    
    