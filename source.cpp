#include <iostream>
using namespace std;

int tong(int a, int b) {
	return a+b;
};
int hieu(int a, int b) {
	return a-b;
};
// Da xoa tinh tong cua user2

// tach thanh nhanh tich by:user1
int tich(int a, int b) {
	return a*b;
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	system("pause");
	return 0;
}
