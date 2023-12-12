#include <iostream>
using namespace std;

const float phi = 3.14;

int hasilLuasLingkaran(int r){
    int Luas;
    Luas = phi * r * r;
    return Luas;
}

void luasLingkaran(int r){
    int Luas = hasilLuasLingkaran(r);
    cout << " Luas lingkaran = " << Luas;
}

int main() {
    int r;
    char lagi;
    do {
    	cout << " ## MENGHITUNG LUAS LINGKARAN ## " << endl;
        cout << " =============================== " << endl;
        cout << " Masukan Jari-Jari : "; cin >> r;
        luasLingkaran(r);
        cout << endl;
        
        cout << "Ulang Lagi (y/t) : ";
        cin >> lagi;
        cout << endl;
    } while (lagi == 'Y' || lagi == 'y');

    return 0;
}
