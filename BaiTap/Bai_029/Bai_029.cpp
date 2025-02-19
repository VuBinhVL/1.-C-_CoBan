#include <iostream>
using namespace std;
int main()
{
	int n;
	float s = 0;
	int i = 1;
	cout << "Nhap n: ";
	cin >> n;
	for (i; i <= n; i++)
	{
		s = s + (float)1 / i;
	}
	cout << "Tong la: " << s;
	return 1;
}