#include<iostream>
using namespace std;
class cuboid {
private:
	double length;
	double width;
	double heigth;
public:
	void volume() {
		cout << "请输入长方体的长：";
		cin >> length;
		cout << "请输入长方体的宽：";
		cin >> width;
		cout << "请输入长方体的高：";
		cin >> heigth;
	}
	void calculate_volume() {
		double v = length * width * heigth;
		cout << v << endl;
	}
};
int main() {
	cuboid cuboid1, cuboid2, cuboid3;
	cuboid1.volume();
	cuboid2.volume();
	cuboid3.volume();
	cout << "第一个长方体的体积为：";
	cuboid1.calculate_volume();
	cout << "第二个长方体的体积为：";
	cuboid2.calculate_volume();
	cout << "第三个长方体的体积为：";
	cuboid3.calculate_volume();
	return 0;
}
	
