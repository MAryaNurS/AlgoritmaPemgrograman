#include <iostream>
using namespace std;
int main(){
	int r, x, y, z; string nama;
	cout << " Tugas 4 " << endl;
	cout << " Program Hitung Rata-Rata " << endl;
	cout << " Nama Siswa : "; cin >> nama;
	cout << " Nilai Pertandingan I : "; cin >> x;
	cout << " Nilai Pertandingan II : "; cin >> y;
	cout << " Nilai Pertandingan III : "; cin >> z;
	r = ( x + y + z ) / 3;  
	cout << " Siswa yang bernama " << nama << endl;
	cout << " Memperoleh nilai rata-rata " << r << " dari hasil perlombaan yang diikutinya " << endl;
	cout << " Hadiah yang di dapat adalah ";
	
	if ( r >= 85 ) {
		cout << " Komputer Core i5 ";
	}
	else if ( r >= 70 ) {
		cout << " Uang Sebesar Rp. 2.500,000 ";
	}
	else {
		cout << " Hiburan ";
	}
			
	return 0;
}
