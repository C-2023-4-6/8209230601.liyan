#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double a = 0.8; // 定义单价
    double i = 1.0; // 天数的浮点数版本
    double b = 2, x = 2;
    while (b*2<= 100) {
        i++;
        b = b * 2; // 更新每天购买的苹果数量为前一天的两倍
        x = x + b; //总苹果数量
    }
    
    double w = a * x;
    double p = w / i;

    cout << "每天平均花费为: " << p << endl;

    return 0;
}
