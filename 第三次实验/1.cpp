#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:
    int hour;
	int minute;
	int sec;
public: 
	void settime() {
		cout << "输入时：";
		cin >> hour;
		cout << "输入分：";
		cin >> minute;
		cout << "输入秒：";
		cin >> sec;
	}
	void outputtime() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
	
};
int main()
{
	Time t1;
	t1.settime();
	t1.outputtime();
	return 0;
}
