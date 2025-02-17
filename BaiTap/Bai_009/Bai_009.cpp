#include <iostream>
using namespace std;
int main()
{
	int n;
	float r;
	cout << "Nhap so canh cua da giac noi tiep duong tron: ";
	cin >> n;
	cout << "Nhap ban kinh:";
	cin >> r;
	float s = float(1) * n * r * r * sin(2 * 3.14 / n) / 2;
	cout << "Dien tich cua da giac noi tiep duong tron la: " << s;
	return 1;
}