#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:
    int hour;
	int minute;
	int sec;
public: 
	void settime() {
		cout << "����ʱ��";
		cin >> hour;
		cout << "����֣�";
		cin >> minute;
		cout << "�����룺";
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
