#include <iostream>
#include <iomanip> // untuk mengatur presisi output desimal

int main() {
    double kecepatan_monyet, kecepatan_kura;
    const double jarak_lintasan = 15.0;
    const double monyet_ngepoor = -10.0; // Monyet mulai 10 meter di belakang garis start

    // Input kecepatan monyet dan kura-kura
    std::cout << "Masukkan kecepatan monyet (m/s): ";
    std::cin >> kecepatan_monyet;
    std::cout << "Masukkan kecepatan kura-kura (m/s): ";
    std::cin >> kecepatan_kura;

    // Jika kura-kura lebih cepat dari monyet, mereka tidak akan bertemu
    if (kecepatan_kura > kecepatan_monyet) {
        std::cout << "Kura-kura sangat cepat, mereka tidak akan bertemu, kura-kura menang" << std::endl;
        return 0;
    }

    // Menghitung waktu pertemuan
    double waktu_bertemu = -monyet_ngepoor / (kecepatan_monyet - kecepatan_kura);

    // Jika waktu bertemu negatif atau lebih besar dari waktu lintasan, mereka tidak akan bertemu
    if (waktu_bertemu < 0 || waktu_bertemu * kecepatan_kura > jarak_lintasan) {
        std::cout << "Kura-kura sangat cepat, mereka tidak akan bertemu, kura-kura menang" << std::endl;
    } else {
        // Menghitung jarak bertemu dari titik start
        double jarak_bertemu = waktu_bertemu * kecepatan_kura;

        // Tentukan siapa yang menang
        std::string pemenang;
        if (jarak_bertemu <= jarak_lintasan) {
            pemenang = "Monyet menang";
        } else {
            pemenang = "Kura-kura menang";
        }

        // Output hasil
        std::cout << std::fixed << std::setprecision(5);
        std::cout << "Jarak bertemu dari titik start " << jarak_bertemu << ", " << pemenang << std::endl;
    }

    return 0;
}
