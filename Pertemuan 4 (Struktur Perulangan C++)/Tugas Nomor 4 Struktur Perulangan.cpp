#include <iostream>
using namespace std;
int main()
{
	int w, x, y, z;
	cout << " Masukkan Jumlah Kolom : ";
	cin >> w;
	x = w / 2;
	
	for(y=1; y<=x; y++) {
		for(z=1; z<=x; z++) {
			if(z-1 <= x-y) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		for(z=1; z<=x; z++) {
			if(z>=y) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	for(y=1; y<=x; y++) {
		for(z=1; z<=x; z++) {
			if(z >= y + 1) {
				cout << "  ";
			}
			else {
				cout << "* ";
			}
		}
		for(z=1; z<=x; z++) {
			if(z <= x - y) {
				cout << "  ";
			}
			else {
				cout << "* ";
			}
		}
		cout << endl;
	}
	
	return 0;
}
