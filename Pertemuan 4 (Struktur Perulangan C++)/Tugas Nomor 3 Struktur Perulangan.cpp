#include <iostream>
using namespace std;
int main()
{
	cout << " SOAL NOMOR 3 " << endl;
	cout << " ## Program Menentukan Bilangan Prima ## " << endl;
	cout << " ======================================= " << endl;
	int x, y, z = 1;
	cout << " Masukkan bilangan : ";
	cin >> x;
	
	if(x < 2) {
		z = 0;
	}
	else {
		for( y = 2; y * y <= x; y++) {
			if(x % y == 0) {
				z = 0;
				break;
			}
		}
	}
	
	if(z == 1) {
		cout << x << " Termasuk Bilangan Prima " << endl;
	}
	else {
		cout << x << " Bukan Termasuk Bilangan Prima " << endl;
	}
	
	return 0;
	}
