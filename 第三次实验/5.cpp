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
        std::cout << "����ֵ: (" << x << ", " << y << ")" << std::endl;
    }
};

int main() {

    Point myPoint;


    std::cout << "��ʼ����ֵ��";
    myPoint.display();

    myPoint.setPoint(11, 26);

    std::cout << "�޸ĺ�����ֵ�� ";
    myPoint.display();

    return 0;
}
