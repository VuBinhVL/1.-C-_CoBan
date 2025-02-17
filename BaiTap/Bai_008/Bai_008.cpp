#include <iostream>
using namespace std;
int main()
{
	int n;
	float r;
	cout << "Nhap so canh: ";
	cin >> n;
	cout << "Nhap ban kinh:";
	cin >> r;
	float p = 2 * n * r * sin(3.14 / n);
	cout << "Chu vi da giap noi tiep duong tron:" << p;
	return 1;
}