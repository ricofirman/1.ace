#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct bagian {
    string rating;
};



void persegi_keliling() {
    double sisi;
    cout << "Masukkan panjang sisi persegi:\n";
    cout << " ____________  \n";
    cout << "|            | \n";
    cout << "|            | \n";
    cout << "|            |   sisi x 4\n";
    cout << "|     cm     | \n";
    cout << "|____________| \n\n";
    cout << " |----------| \n sisi==>  ";

    cin >> sisi;
    cout << "\n";
    double keliling = sisi * 4;
    cout << "Masukkan panjang sisi persegi:\n";
    cout << " ____________  \n";
    cout << "|            | \n";
    cout << "|            | \n";
    cout << "|            |   "<< sisi <<" x "<< 4<<"\n";
    cout << "|     cm     | \n";
    cout << "|____________| \n\n";
    cout << " |----------| \n\n ";
    cout << "keliling persegi: " << sisi <<" x " <<"4" << " = " <<keliling << "\n";
}
void persegi_luas() {
    double sisi;
    cout << "Masukkan panjang sisi persegi:\n";
    cout << " ____________  \n";
    cout << "|            | \n";
    cout << "|            | \n";
    cout << "|            |   sisi x sisi\n";
    cout << "|     cm     | \n";
    cout << "|____________| \n\n";
    cout << " |----------| \n sisi==>  ";

    cin >> sisi;
    cout << "\n";
    double luas = sisi * sisi;
    cout << "Masukkan panjang sisi persegi:\n";
    cout << " ____________  \n";
    cout << "|            | \n";
    cout << "|            | \n";
    cout << "|            |   "<< sisi <<" x "<< sisi<<"\n";
    cout << "|     cm     | \n";
    cout << "|____________| \n\n";
    cout << " |----------| \n\n ";
    cout << "luas persegi: " << sisi <<" x " <<sisi<< " = " <<luas << "\n";
}


void cel_ke_fah() {
    double celcius;
    cout << "               \n";
    cout << "        |  |   \n";
    cout << "        |==|   \n";
    cout << "        |  |   F = (C x 9 / 5) + 32 \n";
    cout << "        |  |   \n";
    cout << "        |__|   \n";
    cout << "Masukkan suhu Celcius: ";
    cin >> celcius ;
    cout << endl<< endl;
    double space = (celcius * 9 / 5) + 32;
    cout << "Hasil ==> \n";
    cout << "               \n";
    cout << "        |  |   \n";
    cout << "        |==|   \n";
    cout << "        |  |   F = ( "<<celcius<<" x 9 / 5) + 32 \n";
    cout << "        |  |   \n";
    cout << "        |__|   \n";
    cout << "               F = "<< space << endl << endl;
}
void fah_ke_cel() {
    double fahrenhit;
    cout << "               \n";
    cout << "        |  |   \n";
    cout << "        |==|   \n";
    cout << "        |  |   C = ( F - 32) * 5/9 \n";
    cout << "        |  |   \n";
    cout << "        |__|   \n";
    cout << "Masukkan suhu Fahrenheit: ";
    cin >> fahrenhit ;
    cout << endl<< endl;
    double space = (fahrenhit - 32) * 5/9;
    cout << "               \n";
    cout << "        |  |   \n";
    cout << "        |==|   \n";
    cout << "        |  |   C = ( "<<fahrenhit<<" - 32) * 5/9 \n";
    cout << "        |  |   \n";
    cout << "        |__|   \n";
    cout << "               C = " << space <<endl<< endl;
}


void cari_s() {
    double velocity, time;
    cout << "Masukkan kecepatan (m/s): ";
    cin >> velocity;
    cout << "Masukkan waktu (s): ";
    cin >> time;
    double  space = velocity * time;
    cout << "jarak = kecepatan x waktu = ";
    cout << "jarak = "<< velocity << " x "<< time <<" = ";
    cout << space << endl;
}
void cari_v() {
    double space, time;
    cout << "Masukkan jarak (m): ";
    cin >> space;
    cout << "Masukkan waktu (s): ";
    cin >> time;
    double velocity = space / time;
    cout << "kecepatan = jarak / waktu = ";
    cout << "kecepatan = "<< space << " / "<< time <<" = ";
    cout << velocity << endl;
}
void cari_t() {
    double velocity, space;
    cout << "Masukkan kecepatan (m/s): ";
    cin >> velocity;
    cout << "Masukkan jarak (m): ";
    cin >> space;
    double time = space / velocity;
    cout << "waktu = jarak / kecepatan = ";
    cout << "waktu = "<< space << " / "<< velocity <<" = ";
    cout << time << endl;
}


void matematika() {
    cout << "Pilih jenis perhitungan:\n";
    cout << "1. Menghitung keliling persegi\n";
    cout << "2. Menghitung luas persegi\n";
    
    int pilihanmatematika;
    cin >> pilihanmatematika;

    switch (pilihanmatematika) {
        
        case 1:
            persegi_keliling();
            break;
        case 2:
            persegi_luas();
            break;
        
        default:
            cout << "Pilihan tidak valid.\n";
    }
}



bool tanyalagi() {
    string jawaban;
    cout << "muat ulang lagi? (ya/tidak): ";
    cin >> jawaban;
    if (jawaban == "ya") {
        return true;
    } else if (jawaban == "tidak") {
        return false;
    } else {
        cout << "Input tidak valid, coba lagi.\n";
        return tanyalagi();
    }
}

void fisika() {
    cout << "Pilih jenis perhitungan:\n";
    cout << "1. perhitungan convert suhu celcius ke fahrenheit \n";
    cout << "2. perhitungan convert suhu  fahrenheit ke celcius\n";
    cout << "3. perhitungan jarak gerak benda \n";
    cout << "4. perhitungan kecepatan gerak benda \n";
    cout << "5. perhitungan waktu gerak benda \n";
    int pilihanfisika;
    cin >> pilihanfisika;

    switch (pilihanfisika) {

        case 1:
            cel_ke_fah();
            break;
            
        case 2:
            fah_ke_cel();
            break;
        case 3: 
            cari_s();
            break;
        case 4:
            cari_v();
            break;
        case 5:
            cari_t();
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            break;
    }
}



string tampilkanSapaan() {
    ifstream file("sapaan.txt");
    string line, sapaan;
    while (getline(file, line)) {
        sapaan += line + "\n";
    }
    file.close();
        return sapaan;

}




int main() {
    cout << tampilkanSapaan();
    int version =3;
    int *point ;
    point = &version;
    cout << "Version ===> "<< *point<< ".3"<< endl<< endl;
    
    char userName [50];
    cout << "Masukkan nama Anda: ";
    cin.getline(userName,50);
    cout << "Halo, " << userName << "! Apa ada yang bisa aku bantu?\n";

    bool running = true;

    while (running) {
        int choice;
        cout << "Pilih kategori:\n";
        cout << ">> 1 << Matematika\n";
        cout << ">> 2 << Fisika\n";
        cout << "Masukkan pilihan Anda: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                matematika();
                break;
            case 2:
                fisika();
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }

        if (running = true) 
            running =tanyalagi();
            
        
    }

    cout << "\nPenutup!\n";
    int n = 3;
    bagian pujian[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukkan 1 kata pujian untuk kami = " << i + 1 << ": ";
        cin >> pujian[i].rating;
    }

    cout << "\nTerimakasih atas 3 pendapat anda:\n";
    cout << "dari 3 pujian mana yang paling penting? :\n";

    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << pujian[i].rating << endl;
    }

    int pilihpujian;
    cout << "kamu memilih pujian ke: ";
    cin >> pilihpujian;

    if (pilihpujian < 1 || pilihpujian > n) {
        cout << "Pilihan tidak valid, Program berhenti, Senang membantu anda.\n";
        return pilihpujian;
    }
    
    cout << "\njadi kami akan meningkatkan hal " << pujian[pilihpujian - 1].rating << " di algoritma ini."<< "\".";
    return 0;
}