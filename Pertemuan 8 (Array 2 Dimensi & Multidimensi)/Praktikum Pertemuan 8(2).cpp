#include <iostream>
using namespace std;

int tambahkanArray(const int* arr, int ukuran) {
	int hasil = 0;
	for (int i=0; i<ukuran; ++i) {
		hasil += *arr;
		arr++;
	}
	return hasil;
}

int main() {
	int ukuran;
	cout << " Masukan ukuran array : ";
	cin >> ukuran;
	
	int arrayAngka[ukuran];
	
	for (int i=0; i<ukuran; i++) {
		cout << " Elemen ke-" << i + 1 << ": "; cin >> arrayAngka[i];
	}
	int total = tambahkanArray(arrayAngka, ukuran);
	cout << " Hasil penjumlahan array : " << total << endl;
	
	return 0;
}
