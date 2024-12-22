#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Supermarket {
    string nama;
};


int belanjaLagi(int total, int* itemCount) {
    string pilihan;
    cout << "Apakah ingin membeli lagi? (ya/tidak): ";
    cin >> pilihan;

    if (pilihan == "ya") {
        return total;
    } else if (pilihan == "tidak") {
        cout << "Total belanja keseluruhan: " << total << endl;
        return 0;
    } else {
        cout << "Pilihan tidak valid. Mohon ulangi.\n";
        return belanjaLagi(total, itemCount);
    }
}

int main() {
    int n;
    cout << "jumlah banyak data supermarket yang bisa ditemukan: ";
    cin >> n;

    Supermarket superm[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nama supermarket " << i + 1 << ": ";
        cin >> superm[i].nama;
    }

    cout << "\nHalo, selamat datang di vending machine! Silakan memilih supermarket:\n";

    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << superm[i].nama << endl;
    }

    int pilihanSupermarket;
    cout << "Kamu memilih supermarket nomor: ";
    cin >> pilihanSupermarket;

    if (pilihanSupermarket < 1 || pilihanSupermarket > n) {
        cout << "Pilihan tidak valid. Program berhenti.\n";
        return 1;
    }

    cout << "\nKamu memilih supermarket \"" << superm[pilihanSupermarket - 1].nama << "\".";

    cout << "\n Silakan memilih barang untuk dibeli:\n";

    ifstream file("toko.txt");

    string barang[3];
    int harga[3];
    int i = 0;

    while (file >> barang[i] >> harga[i] && i < 3) {
        i++;
    }

    file.close();

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << barang[i] << " = " << harga[i] << endl;
    }

    int total = 0;
    int pilihanBarang;
    int itemCount = 0;

    do {
        cout << "Masukkan nomor barang yang ingin dibeli (1-3): ";
        cin >> pilihanBarang;

        if (pilihanBarang < 1 || pilihanBarang > 3) {
            cout << "Pilihan tidak valid. Mohon ulangi.\n";
        } else {
            total += harga[pilihanBarang - 1];
            itemCount++;
        }
    } while (belanjaLagi(total, &itemCount));

    cout << "\nWah nampaknya sudah semua. Total belanja akhir kamu: " << total << endl;

    return 0;
}