#include <iostream>
using namespace std;
int main()
{
	int n;
	float s = 0;
	cout << "Nhap n:";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		s = s + (float)1 / (2 * i);
	}
	cout << "Tong la: " << s;
	return 1;
}