#include <iostream>

class Point {
private:
    int x;
    int y;

public:
   
    Point() : x(60), y(80) {}

    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    void display() {
        std::cout << "坐标值: (" << x << ", " << y << ")" << std::endl;
    }
};

int main() {

    Point myPoint;


    std::cout << "初始坐标值：";
    myPoint.display();

    myPoint.setPoint(11, 26);

    std::cout << "修改后坐标值： ";
    myPoint.display();

    return 0;
}
