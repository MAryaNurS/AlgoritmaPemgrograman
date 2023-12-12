//Implementasi Fungsi Umum
#include <iostream>
using namespace std

void garis() {
	cout << "\n----------------------\n";
}
//* Program Utama */
int main() {
	garis();
	cout << "\nIBI Kesatuan Bogor" << endl;
	garis();
	getchar();
}

#include <iostream>
using namespace std;

int kali (int a, int b)
{
	int hasil;
	hasil = a * b;
	return hasil;
}
int main()
{
	int hasil, a, b;
	cout << "Masukan nilai a = ";
	cin >> a;
	cout << "Masukan nilai b = ";
	cin >> b;
	hasil = (a*b);
	cout << "Hasil perkalian = " << hasil << endl;
	getchar();
}
