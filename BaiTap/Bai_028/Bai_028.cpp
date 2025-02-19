#include <iostream>
using namespace std;
int main()
{
	int n;
	int s = 0;
	int i = 1;
	cout << "Nhap n: ";
	cin >> n;
	for (i; i <= n; i++)
	{
		s = s + i * i;
	}
	cout << "Tong la: " << s;
	return 1;
}