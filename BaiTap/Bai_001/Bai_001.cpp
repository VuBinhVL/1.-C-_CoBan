#include <iostream>
using namespace std;

int main()
{
	float x1, x2, y1, y2;
	cout << "Nhap x1: ";
	cin >> x1;
	cout << "Nhap y1: ";
	cin >> y1;
	cout << "Nhap x2: ";
	cin >> x2;
	cout << "Nhap y2: ";
	cin >> y2;
	float kc = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	cout << "Khoang cach giua 2 diem la: " << kc;
	return 0;
}