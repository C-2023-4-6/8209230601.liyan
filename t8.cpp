#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    double d;
    bool isIsosceles = false;

    cout << "请输入三角形的三条边: "; // 提示输入三条边
    cin >> a >> b >> c;

    d = a + b + c;// 计算周长
    
    if (a == b || a == c || b == c) {// 判断是否为等腰三角形
        isIsosceles = true;
    }
    
     if (a + b > c && a + c > b && b + c > a) {// 判断是否为三角形
        cout << "这是一个三角形" << endl;
        cout << "周长为: " << d << endl;
        if (isIsosceles) {
            cout << "这是一个等腰三角形" << endl;
        }
        else {
            cout << "这不是一个等腰三角形" << endl;
        }
    }
    else {
        cout << "这三条边无法构成三角形" << endl;
    }
    

    return 0;
   
}
