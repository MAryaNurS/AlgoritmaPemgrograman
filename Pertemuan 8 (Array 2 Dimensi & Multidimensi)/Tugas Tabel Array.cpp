#include <iostream>
using namespace std;

struct emp {
	int hasil1, hasil2, hasil3;
	char nama[50];
}obj[3];

int main (){
	int i;
	string nama;
	
	for (i=0; i<3; i++) {
		cout << " Hasil Penjualan " << i+1 << endl << " Nama Barang, Hasil1, Hasil2, Hasil3 :\t\n";
		getline(cin, nama);
		cin >> obj[i].hasil1 >> obj[i].hasil2 >> obj[i].hasil3; 
	}
	
	cout << " ================================= " << endl;
	cout << " No\tNama Barang\t2001\t2002\t2003 " << endl;
	cout << " ================================= " << endl;
	
	for (i=0; i<3; i++) {
		cout << i+1 << "\t" << obj[i].nama << "\t\t" << obj[i].hasil1 << "\t\t" << obj[i].hasil2 << "\t" << obj[i].hasil3 << endl;
	} 
	cout << " ================================= " << endl;
}
