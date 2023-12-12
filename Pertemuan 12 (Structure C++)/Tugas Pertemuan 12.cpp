#include <iostream>
using namespace std;

struct mahasiswa {
	char nama[20], nim[10], matkul[15];
	int sks; 	
};
mahasiswa bayar[2];
int main() {
	int var, tetap;
	for(int i=0; i<2; i++) {
		cout << " Masukan Nama Mahasiswa        : "; cin >> bayar[i].nama;
		cout << " Masukan NIM Mahasiswa         : "; cin >> bayar[i].nim;
		cout << " Masukan Mata Kuliah Mahasiswa : "; cin >> bayar[i].matkul;
		cout << " Masukan Jumlah SKS Mahasiswa  : "; cin >> bayar[i].sks;
		cout << endl;
		if(bayar[i].sks==0) {
		tetap = 250000;
		var = bayar[i].sks*250000;
	} else if(bayar[i].sks==2) {
		tetap = 300000;
		var = bayar[i].sks*300000;
	}
	}
	for(int i=0; i<2; i++) {
	cout << " ====================================== " << endl;
	cout << "             DATA MAHASISWA             " << endl;
	cout << " ====================================== " << endl;
	cout << "  Nama Mahasiswa : " << bayar[i].nama << endl;
	cout << "  NIM            : " << bayar[i].nim << endl;
	cout << "  Mata Kuliah    : " << bayar[i].matkul << endl;
	cout << "  Jumlah SKS     : " << bayar[i].sks << endl;
	cout << "  SPP Tetap      : " << tetap << endl;
	cout << "  SPP Variabel   : " << var << endl;
	}
	
	return 0;
}
