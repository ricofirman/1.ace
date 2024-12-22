#include <iostream>
using namespace std;

int main() {
    string jenis;
    
    // Meminta input nilai dari pengguna
    cout << "masukan jenis suku cadang jembatan: ";
    cin >> jenis;

    
    // Menentukan tier menggunakan switch
      if (jenis == "beton") {
     cout << "kuat" <<endl;
    } else if (jenis == "kayu") {
     cout << "kurang kuat" <<endl;
    } else if (jenis == "ranting") {
     cout << "tidak kuat" <<endl;
    }  else {
     cout << "Bahan tidak dikenali" <<endl;
     cout << "coba masukin kayu atau beton" <<endl;
    }

    return 0;
}