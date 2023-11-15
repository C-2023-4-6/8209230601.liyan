#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 5; ++i) {// 使用嵌套循环输出图形

        for (int j = 1; j <= i; ++j) {// 内层循环控制每一行中的星号数量
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

    