#include <iostream>
using namespace std;
int main() {
    double x, y;

    cout << "请输入 x 值: ";// 提示输入 x 值
    cin >> x;

    if (x > 0 && x < 1) {
        y = 3 - 2 * x;
    }
    else if (x >= 1 && x < 5) {
        y = 2 / (4 * x) + 1;
    }
    else if (x >= 5 && x < 10) {
        y = x * x;
    }
    
    cout << "表达式的值为: " << y << endl;// 输出结果

    return 0;
}