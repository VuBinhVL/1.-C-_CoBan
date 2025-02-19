#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float gt = 1;
	for (int i = 2; i <= n; i++)
	{
		gt = gt * i;
	}
	cout << "Giai thua cua " << n << " la: " << gt;
	return 1;
}