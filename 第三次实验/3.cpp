#include<iostream>
using namespace std;
class cuboid {
private:
	double length;
	double width;
	double heigth;
public:
	void volume() {
		cout << "�����볤����ĳ���";
		cin >> length;
		cout << "�����볤����Ŀ�";
		cin >> width;
		cout << "�����볤����ĸߣ�";
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
	cout << "��һ������������Ϊ��";
	cuboid1.calculate_volume();
	cout << "�ڶ�������������Ϊ��";
	cuboid2.calculate_volume();
	cout << "����������������Ϊ��";
	cuboid3.calculate_volume();
	return 0;
}
	
