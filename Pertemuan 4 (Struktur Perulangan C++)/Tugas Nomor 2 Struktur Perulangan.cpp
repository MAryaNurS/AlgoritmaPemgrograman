#include <iostream>
using namespace std;
int main()
{
	cout << " SOAL NOMOR 2 " << endl;
	int w, x, y, z;
	cout << " ## Program Perulangan Bilangan Naik ## " << endl;
	cout << " ====================================== " << endl;
	for(w=1; w<=10; w++) {
		cout << w << endl;
	}
	cout << " ## Program Perulangan Bilangan Menurun ## " << endl;
	cout << " ========================================= " << endl;
	for(x=10; x>=1; x--) {
		cout << x << endl;
	}
	cout << " ## Program Perulangan Bilangan Ganjil ## " << endl;
	cout << " ======================================== " << endl;
	for(y=1; y<=5; y++) {
		cout << (y*2)-1 << endl;
	}
	cout << " ## Program Perulangan Bilangan Genap ## " << endl;
	cout << " ======================================= " << endl;
	for(z=1; z<=5; z++) {
		cout << z * 2 << endl;
	}
	return 0;
}

