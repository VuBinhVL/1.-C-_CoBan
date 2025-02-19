#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a = " << a << " b = " << b;
	return 1;
}