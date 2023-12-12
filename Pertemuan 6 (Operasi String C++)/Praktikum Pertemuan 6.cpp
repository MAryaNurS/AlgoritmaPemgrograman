#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int data[10][10];
	string barang;
	int x, y, baris, kolom;
	cout << " ## HASIL PENJUALAN BARANG ## " << endl;
	cout << " ============================ " << endl;
	for (x=0; x<3; x++) {
	cout << " Input nama barang : "; cin >> barang;
		for (y=0; y<3; y++) {
		cout << " Baris " << x+1 << ", kolom " << y+1 << " = "; cin >> data[x][y];
		}
	cout << endl;	
	}
	cout << "     Hasil Penjualan Barang      " << endl;
	cout << " =============================== " << endl;
	cout << " No Nama Barang 2001 2002 2003 " << endl;
	cout << " =============================== " << endl;
	for (x=0; x<3; x++) {
	cout << x << barang;
		for (y=0; y<3; y++) {
		cout << setw(3) << data[x][y] << "\t";	
		}
	cout << endl;		
	}
	
	return 0;
}
