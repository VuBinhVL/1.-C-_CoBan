#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	float temp = a;
	cout << "a = " << a << " b = " << b;
	a = b;
	b = temp;
	cout << "\nSau khi hoan vi";
	cout << "\na = " << a << " b = " << b;

	return 1;
}