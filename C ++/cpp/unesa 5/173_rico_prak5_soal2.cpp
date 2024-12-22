#include <iostream>
using namespace std;


int hitungFaktorial(int n) {
    if (n == 0 || n == 1) 
        return 1;
    return n * hitungFaktorial(n - 1);
}


int hitungKombinasi(int n, int r) {
    int faktorialN = hitungFaktorial(n);
    int faktorialR = hitungFaktorial(r);
    int faktorialNR = hitungFaktorial(n - r);
    return faktorialN / (faktorialR * faktorialNR);
}

int main() {
    int n, r;
    
    cout << "Masukkan nilai n untuk faktorial: ";
    cin >> n;
    int nilaifaktorial = hitungFaktorial(n);
    cout << "Hasil: " << nilaifaktorial << " ini hasil faktorialmu." << endl;

    cout << "Masukkan nilai r untuk kombinasi: " << endl;
    cin >> r;
    if (r > n) {
        cout << "Nilai r tidak boleh lebih besar dari n." << endl;
        return 0;
    }
    int nrkombinasi = hitungKombinasi(n, r);
    cout << "Hasil kombinasi mu adalah: " << nrkombinasi << endl;

    return 0;
}