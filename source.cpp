#include <iostream>
using namespace std;

int tong(int a, int b) {
	return a+b;
};
int hieu(int a, int b) {
	return a-b;
};
// Da xoa tinh tong cua user2
<<<<<<< HEAD
=======
// tach thanh nhanh tich by:user1
int tich(int a, int b) {
	return a*b;
}
//Ktra chan le by: User2
void kiemTraChanLe(int n) {
	if(n%2==0) {
		cout << n <<"la so chan";
	} else {
		cout <<n <<"la so le ";
	}
}
//end Chan le
>>>>>>> eb12d4e4e4ed4d11436760c274f6caab8d1febb9
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
