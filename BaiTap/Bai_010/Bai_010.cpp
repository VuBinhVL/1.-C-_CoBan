#include <iostream>
using namespace std;
int main()
{
	float x1, x2, x3, y1, y2, y3;
	cout << "Nhap toa do diem A\n";
	cout << "Nhap x1: ";
	cin >> x1;
	cout << "Nhap y1: ";
	cin >> y1;
	cout << "Nhap toa do diem B\n";
	cout << "Nhap x2: ";
	cin >> x2;
	cout << "Nhap y2: ";
	cin >> y2;
	cout << "Nhap toa do diem C\n";
	cout << "Nhap x3: ";
	cin >> x3;
	cout << "Nhap y3: ";
	cin >> y3;
	float a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	float p = a + b + c;
	cout << "Chu vi cua tam giac ABC la:" << p;
	return 1;
}