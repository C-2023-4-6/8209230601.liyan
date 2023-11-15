#include <iostream>
using namespace std;
const double OC= 3.14159265358;// 使用标识符常量定义圆周率

int main()
{
    cout << "请输入圆锥底面的半径： "; // 输入圆锥底的半径
    double r;
    cin >> r;

    cout << "请输入圆锥的高： ";// 输入圆锥的高度
    double h;
    cin >> h;
    
    double v = (1.0 / 3) * OC * r * r * h; // 圆锥的体积公式：V = (1/3) * π * r^2 * h
    cout << "圆锥的体积为： " << v << endl; // 输出圆锥的体积

    return 0;
}
