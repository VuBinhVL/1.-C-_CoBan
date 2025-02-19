#include <iostream>
using namespace std;
struct Diem
{
	float x, y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
float KhoangCach(DIEM, DIEM);
float NuaChuVi(DIEM, DIEM, DIEM);
float DienTich(DIEM, DIEM, DIEM);

int main()
{
	DIEM A, B, C;
	cout << "Nhap toa do diem A";
	Nhap(A);
	cout << "Nhap toa do diem B";
	Nhap(B);
	cout << "Nhap toa do diem C";
	Nhap(C);
	float dt = DienTich(A, B, C);
	cout << "Dien tich tam giac la: " << dt;
	return 1;
}

void Nhap(DIEM& p)
{
	cout << "\nNhap toa x: ";
	cin >> p.x;
	cout << "Nhap toa y: ";
	cin >> p.y;
}

float KhoangCach(DIEM A, DIEM B)
{
	float kc = sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
	return kc;
}

float NuaChuVi(DIEM A, DIEM B, DIEM C)
{
	return (KhoangCach(A, B) + KhoangCach(A, C) + KhoangCach(C, B)) / 2;
}

float DienTich(DIEM A, DIEM B, DIEM C)
{
	float a = KhoangCach(A, B);
	float b = KhoangCach(A, C);
	float c = KhoangCach(C, B);
	float p = NuaChuVi(A, B, C);
	float dt = sqrt(p * (p - a) * (p - b) * (p - c));
	return dt;
}