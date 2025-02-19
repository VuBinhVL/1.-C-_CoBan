#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0.5;
	for (int i = 1; i <= n; i++)
	{
		s = s + (float)(2 * i + 1) / (2 * i + 2);
	}
	cout << "Tong la: " << s;
	return 1;
}