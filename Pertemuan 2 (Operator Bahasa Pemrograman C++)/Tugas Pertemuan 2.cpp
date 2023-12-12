#include <iostream>
using namespace std;

int main() {
	float a; int b, c;
	cout << " PERHITUNGAN LUAS LINGKARAN " << endl;
	cout << " SOAL NOMOR 1 " << endl;
	cout << " Berapa luas lingkaran dengan jari-jari 10cm? " << endl;
	cout << " Penyelesaian : " << endl;
	cout << " Phi = "; cin >> a;
	cout << " r = "; cin >> b;
	cout << " L = Phi * r * r " << endl;
	cout << " L = 3.14 * 10 * 10 " << endl;
	cout << " L = " << a * b * b << endl;
	cout << " Jadi hasil perhitungan luas lingkaran tersebut adalah 314cm " << endl;
	
	cout << " SOAL NOMOR 2 " << endl;
	cout << " Berapa luas lingkaran dengan jari-jari 20cm? " << endl;
	cout << " Penyelesaian : " << endl;
	cout << " Phi = "; cin >> a;
	cout << " r = "; cin >> b;
	cout << " L = Phi * r * r " << endl;
	cout << " L = 3.14 * 20 * 20 " << endl;
	cout << " L = " << a * b * b << endl;
	cout << " Jadi hasil perhitungan luas lingkaran tersebut adalah 1.256cm " << endl;
	
	cout << " PERHITUNGAN VOLUME TABUNG " << endl;
	cout << " SOAL NOMOR 1 " << endl;
	cout << " Berapa volume tabung jika jari-jari 10cm dan tinggi 30cm? " << endl;
	cout << " Penyelesaian : " << endl;
	cout << " Phi = "; cin >> a; 
	cout << " r = "; cin >> b;
	cout << " t = "; cin >> c;
	cout << " V = Phi * r * r * t " << endl;
	cout << " V = 3.14 * 10 * 10 * 30 " << endl;
	cout << " V = " << a * b * b * c << endl; 
	cout << " Jadi, volume tabung adalah 9.420cm " << endl;
	
	cout << " SOAL NOMOR 2 " << endl;
	cout << " Sebuah benda berbentuk tabung memiliki luas alas 616cm. Jika tinggi benda adalah 20cm, berapakah volume benda tabung tersebut " << endl;
	cout << " Penyelesaian : " << endl;
	cout << " Luas alas = "; cin >> b;
	cout << " t = "; cin >> c;
	cout << " V = Luas alas * t " << endl;
	cout << " V = 616 * 20 " << endl;
	cout << " V = " << b * c << endl;
	cout << " Jadi, volume benda tabung tersebut adalah 12.320cm " << endl;
	
	return 0; 
}
