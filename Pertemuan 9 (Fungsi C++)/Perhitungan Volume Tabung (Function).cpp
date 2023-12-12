#include <iostream>
using namespace std;

const float phi = 3.14; 

float HasilVolumeTabung(int r, int t) {
    float Volume;
    Volume = phi * r * r * t;
    return Volume;
}

void VolumeTabung(int r, int t) {
    float Volume = HasilVolumeTabung(r, t);
    cout << "Volume tabung = " << Volume;
}

int main() {
    int r, t;
    char lagi;
    do {
    	cout << " ## MENGHITUNG VOLUME TABUNG ## " << endl;
        cout << " ============================== " << endl;
        cout << " Masukan Jari-Jari : "; cin >> r;
        cout << " Masukan Tinggi : "; cin >> t;
        VolumeTabung(r, t);
        cout << endl;
        
        cout << "Ulang Lagi (y/n) : ";
        cin >> lagi;
        cout << endl;
    } while (lagi == 'Y' || lagi == 'y');

    return 0;
}
