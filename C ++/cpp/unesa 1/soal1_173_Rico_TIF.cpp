
#include <iostream>
using namespace std;

int main() {
    // X = Skala suhu pertama
    // X1 = Titik terendah skala suhu pertama
    // X2 = Titik tertinggi skala suhu pertama
    // Y1 = Titik terendah skala suhu kedua
    // Y2 = Titik tertinggi skala suhu kedua
    float X2, X1, Y2, Y1, suhu_X, suhu_Y;

    // Input titik-titik tertinggi dan terendah untuk kedua skala
    cout << "Masukkan titik tertinggi skala X: ";
    cin >> X2;
    cout << "Masukkan titik terendah skala X: ";
    cin >> X1;
    cout << "Masukkan titik tertinggi skala Y: ";
    cin >> Y2;
    cout << "Masukkan titik terendah skala Y: ";
    cin >> Y1;

    // Input suhu yang ingin dikonversi dari skala X
    cout << "Masukkan suhu dalam skala X: ";
    cin >> suhu_X;

    // Hitung suhu dalam skala Y menggunakan rumus
    suhu_Y = ((Y2 - Y1) / (X2 - X1)) * (suhu_X - X1) + Y1;

    // Tampilkan hasil konversi
    cout << "Suhu dalam skala Y adalah: " << suhu_Y << endl;

    return 0;
}