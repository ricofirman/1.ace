#include <iostream>
using namespace std;

int main() {
    int angka, sisa, angkaBalik = 0;
    
    cout << "Masukkan angka: ";
    cin >> angka;
    
    while (angka != 0) {
        sisa = angka % 10;          // Ambil digit terakhir
        angkaBalik = angkaBalik * 10 + sisa;  // Tambahkan digit ke hasil balik
        angka /= 10;                // Hilangkan digit terakhir dari angka asli
    }
    
    cout << "Angka yang dibalik: " << angkaBalik << endl;

    return 0;
}
