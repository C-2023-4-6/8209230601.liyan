#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double f, c;

    cout << "请输入华氏温度: ";// 提示输入华氏温度
    
    cin >> f;

    c = (f - 32.0) * 5.0 / 9.0;// 用公式将华氏温度转换为摄氏温度

    cout << "摄氏温度为: " << fixed << setprecision(2) << c << " 度" << endl;// 输出摄氏温度，保留两位小数

    return 0;
}