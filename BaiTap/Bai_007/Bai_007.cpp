#include <iostream>
using namespace std;
int main()
{
	float f;
	cout << "Nhap do F:";
	cin >> f;
	float c = float(5) * (f - 32) / 9;
	cout << "Do C la:" << c;
	return 1;
}