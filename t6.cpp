#include <iostream>
using namespace std;
int main() {
    char lowercase;
    int next;
   
    cout << "请输入一个字符: "; // 提示输入字符
    cin >> lowercase;

    if (lowercase >= 'a' && lowercase <= 'z') {// 检查输入字符是否为小写字母,如果是小写字母，则转换为大写并输出
        
        char capital = lowercase - 32; // 在ASCII码中，小写与大写的差值为32
        cout << "大写字符为: " << capital << endl;
    }
    else {// 如果不是小写字母，则输出其后继字符的ASCII码值
        
        next = static_cast<int>(lowercase) + 1; // 获取下一个字符的ASCII码值
        cout << "输入字符的下一个ASCII码值为: " << next << endl;
    }

    return 0;
}
