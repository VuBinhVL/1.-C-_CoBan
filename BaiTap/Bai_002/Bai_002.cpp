#include <iostream>
using namespace std;
int main()
{
	float r;
	cout << "Nhap R:";
	cin >> r;
	while (r <= 0)
	{
		cout << "Ban kinh phai lon hon 0\n" << "Nhap lai R:";
		cin >> r;
	}
	float s = 3.14 * r * r;
	cout << "Dien tich hinh tron la:" << s;
	return 0;
}