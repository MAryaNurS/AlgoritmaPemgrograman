#include <iostream>
using namespace std;
int main(){

	int rata, x, y, z; string nama;
	cout << " Tugas 4 " << endl;
	cout << " Program Hitung Rata-Rata " << endl;
	cout << " Nama Siswa : "; cin >> nama;
	cout << " Nilai Pertandingan I : "; cin >> x;
	cout << " Nilai Pertandingan II : "; cin >> y;
	cout << " Nilai Pertandingan III : "; cin >> z;
	rata = ( x + y + z ) / 3;  
	cout << " Siswa yang bernama " << nama << endl;
	cout << " Memperoleh nilai rata-rata " << rata << " dari hasil perlombaan yang diikutinya " << endl;
	cout << " Hadiah yang di dapat adalah ";
	
	switch ( rata ) {
		case 85 ... 100 :
		cout << " Komputer Core i5 ";
		break;
		case 70 ... 84 :
		cout << " Uang Sebesar Rp. 2.500,000 ";
		break;
		default :
		cout << " Hiburan ";
		
		return 0;
	}
}
