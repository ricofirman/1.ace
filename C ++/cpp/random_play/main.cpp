#include <iostream>
#include <string>

using namespace std;

// Fungsi Algoritma 1: Kalkulator
void kalkulator() {
    int pil, angka1, angka2;
    cout << "Pilih operasi (1: +, 2: -, 3: * , 4: /): ";
    cin >> pil;
    cout << "Masukkan angka 1: ";
    cin >> angka1;
    cout << "Masukkan angka 2: ";
    cin >> angka2;

    switch (pil) {
        case 1:
            cout << "Hasil: " << angka1 + angka2 << endl;
            break;
        case 2:
            cout << "Hasil: " << angka1 - angka2 << endl;
            break;
        case 3:
            cout << "Hasil: " << angka1 * angka2 << endl;
            break;
        case 4:
            if (angka2 != 0)
                cout << "Hasil: " << angka1 / angka2 << endl;
            else
                cout << "Error: Pembagian dengan nol!" << endl;
            break;
        default:
            cout << "Error: Pilihan salah!" << endl;
    }
}

// Fungsi Algoritma 2: Perbandingan Bahan
void perbandinganBahan() {
    string bahan;
    cout << "Masukkan jenis bahan (ranting, kayu, beton): ";
    cin >> bahan;

    if (bahan == "ranting")
        cout << "Bahan tidak kuat!" << endl;
    else if (bahan == "kayu")
        cout << "Bahan sedikit kuat!" << endl;
    else if (bahan == "beton")
        cout << "Bahan sangat kuat!" << endl;
    else
        cout << "Error: Bahan tidak dikenal!" << endl;
}

// Fungsi Algoritma 3: Nilai Mahasiswa
void nilaiMahasiswa() {
    string nama;
    string kelas;
    int nilai;
    cout << "Masukkan nama mahasiswa: ";
    cin >> nama;
    cout << "Masukkan kelas: ";
    cin >> kelas;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 75)
        cout << nama << " (" << kelas << ") LULUS dengan nilai " << nilai << endl;
    else
        cout << nama << " (" << kelas << ") TIDAK LULUS dengan nilai " << nilai << endl;
}

int main() {
    string pilihan;
    do {
        cout << "Pilih Algoritma (1: Kalkulator, 2: Perbandingan Bahan, 3: Nilai Mahasiswa, logout/keluar): ";
        cin >> pilihan;

        if (pilihan == "1")
            kalkulator();
        else if (pilihan == "2")
            perbandinganBahan();
        else if (pilihan == "3")
            nilaiMahasiswa();
        else if (pilihan != "logout" && pilihan != "keluar")
            cout << "Error: Pilihan salah!" << endl;
    } while (pilihan != "logout" && pilihan != "keluar");

    return 0;
}
