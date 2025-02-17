#include <iostream>
using namespace std;
int main()
{
	float r;
	cout << "Nhap R:";
	cin >> r;
	float v = float(4 * 3.14 * r * r * r / 3);
	cout << "The tich khoi cau la:" << v;
	return 1;
}