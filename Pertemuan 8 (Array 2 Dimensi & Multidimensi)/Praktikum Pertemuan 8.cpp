#include <iostream>
using namespace std;

int tambahkanArray(int* arr, int ukuran) {
	int hasil = 0;
	for (int i=0; i<ukuran; i++) {
		hasil += *arr;
		arr++;
	}
	return hasil;
}

int main() {
	int ukuran;
	int arrayAngka[ukuran];
	cout << " Masukan elemen array : "; 
	cin >> ukuran;
	
	for (int i=1; i<ukuran; i++) {
		cout << " Elemen ke-" << i << ": "; cin >> arrayAngka[i];
	}
	int total = tambahkanArray(arrayAngka, ukuran);
	cout << " Hasil penjumlahan array : " << total << endl;
	
	return 0;
}
