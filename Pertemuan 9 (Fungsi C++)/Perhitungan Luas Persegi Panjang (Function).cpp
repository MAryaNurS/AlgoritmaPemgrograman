#include <iostream>
using namespace std;

int HasilLuasPersegi(int sisi) {
    int Luas;
    Luas = sisi * sisi;
    return Luas;
}

void LuasPersegi(int sisi) {
    int Luas = HasilLuasPersegi(sisi);
    cout << " Luas Persegi = " << Luas;
}

int main() {
    int sisi;
    char lagi;
    do {
    	cout << " ## MENGHITUNG LUAS PERSEGI ## " << endl;
        cout << " ============================= " << endl;
        cout << " Masukan Sisi : ";
        cin >> sisi;
        LuasPersegi(sisi);
        cout << endl;

        cout << "Ulang Lagi (y/t) : ";
        cin >> lagi;
        cout << endl;
    } while (lagi == 'Y' || lagi == 'y');
    
    return 0;
}
