#include <iostream>
using namespace std;


void kalkulator() {
    int pilihan;
    double angka1, angka2, hasil;

    cout << "=== Kalkulator Sederhana ===" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Pilih Operasi (1/2/3/4): ";
    cin >> pilihan;

    
    if (pilihan < 1 || pilihan > 4) {
        cout << "Pilihan tidak valid! Silakan coba lagi.\n" << endl;
        kalkulator(); 
        return;
    }

    cout << "Masukkan Angka Pertama: ";
    cin >> angka1;
    cout << "Masukkan Angka Kedua: ";
    cin >> angka2;

    switch (pilihan) {
        case 1:
            hasil = angka1 + angka2;
            cout << "Hasil Penjumlahan: " << hasil << endl;
            break;
        case 2:
            hasil = angka1 - angka2;
            cout << "Hasil Pengurangan: " << hasil << endl;
            break;
        case 3:
            hasil = angka1 * angka2;
            cout << "Hasil Perkalian: " << hasil << endl;
            break;
        case 4:
            if (angka2 == 0) {
                cout << "Error! Tidak dapat dibagi dengan 0" << endl;
            } else {
                hasil = angka1 / angka2;
                cout << "Hasil Pembagian: " << hasil << endl;
            }
            break;
    }
}

int main() {
    kalkulator(); 
    return 0;
}
