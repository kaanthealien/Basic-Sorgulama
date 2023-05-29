#include <iostream>
using namespace std;

int main() {

	string sys_name = "deneme1999";
	string sys_password = "123";

	string kullanici, sifre;

	cout << "Lutfen kullanici adinizi giriniz: ";
	cin >> kullanici;
	cout << "Lutfen sifrenizi giriniz: ";
	cin >> sifre;

	if (sys_name != kullanici && sys_password==sifre) {
		cout << "Kullanici adiniz hatali !";
	}
	else if (sys_password != sifre && sys_name==kullanici) {
		cout << "Parolaniz hatali !";
	}
	else if (sys_password == sifre && sys_name == kullanici) {
		cout << "Giris basarili !";
	}
	else
		cout << "Adiniz ve sifreniz hatali !";

	return 0;
}