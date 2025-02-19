#include <iostream>
using namespace std;
int main()
{
	float n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + pow(i, 3);
	}
	cout << "Tong la: " << s;
	return 1;
}