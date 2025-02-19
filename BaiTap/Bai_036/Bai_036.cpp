#include <iostream>
using namespace std;
int main()
{
	float x;
	int n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
	}
	cout << x << "^" << n << " la: " << t;
	return 1;
}