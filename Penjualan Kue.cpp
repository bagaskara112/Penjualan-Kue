#include <iostream>
using namespace std;



int main() {
	int jkue, tot, tbay, hargakue = 0;
	char nama[30];
	char kode;
	string nk;
	double diskon;
	
	cout << "                                   " << endl;
	cout << "     DAFTAR MENU TOKO KUE ALFIA    " << endl;
	cout << " ______ ___________________ _______" << endl;
	cout << "| Kode |    Daftar Kue     | Harga |" << endl;
	cout << "|  1   | Bolu Black Forest | 60000 |" << endl;
	cout << "|  2   | Chesse Cake       | 45000 |" << endl;
	cout << "|  3   | Banana Cake       | 25500 |" << endl;
	cout << "|  4   | strawberry Cake   | 35000 |" << endl;
	cout << "|______|___________________|_______|" << endl;
	
	
	cout << endl;
	cout << "Nama Pembeli     :"; cin >> nama;
	cout << "Kode Kue(1/2/3/4):"; cin >> kode;
	cout << "Jumlah Kue       :"; cin >> jkue;
	cout << "-----------------------------------------" << endl;

	cout << endl;
	cout << "=====STRUK PEMBAYARAN TOKO KUE ALFIA=====" << endl;
	cout << endl;

	if (kode == '1') {
		hargakue = 60000;
		nk = "Bolu Black Fores";
	}
	else if (kode == '2') {
		hargakue = 45000;
		nk = "Chesse Cake";
	}
	else if (kode == '3') {
		hargakue = 25500;
		nk = "Banana Cake";
	}
	else if (kode == '4') {
		hargakue = 35000;
		nk = "Strawberry Cake";
	}
	else {
		cout << "Menu" << kode << "tidak ada di daftar menu";
		cout << endl;
	}

	tot = jkue * hargakue;
	if (jkue >= 20)(diskon = tot * 0.2);
	if (jkue >= 10)(diskon = tot * 0.05);
	else(diskon = tot * 0);
	tbay = tot - diskon;

	cout << "Nama Pembeli  :" << nama << endl;
	cout << "Kode Kue      :" << kode << endl;
	cout << "Nama Kue      :" << nk << endl;
	cout << "Harga Kue     :" << hargakue << endl;
	cout << "Jumlah Kue    :" << jkue << endl;
	cout << "Total Harga   : Rp." << tot << ",-" << endl;
	cout << "_________________________________________" << endl;
	cout << "Diskon        :Rp." << diskon << ",-" << endl;
	cout << "_________________________________________" << endl;
	cout << "Total Bayar   : Rp." << tbay << ",-" << endl;

	return 0;

}