#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cout << "Masukkan jumlah angka :  ";
    cin >> n;

    int angka[n]; 
    int ganjil , genap=0 ;

    cout << "Masukkan " << n << " angka:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> angka[i]; 

        if (angka[i] % 2 == 0) {
            genap++;  
        } else {
            ganjil++; 
        }
    }

   
    cout << "Ganjil: " << ganjil << endl;
    cout << "Genap: " << genap << endl;

    return 0;
}
