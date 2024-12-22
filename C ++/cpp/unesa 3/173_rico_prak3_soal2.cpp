#include <iostream>
using namespace std;


int faktorial(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}

int main() {
    int N, M;

  
    cout << "Masukkan N: ";
    cin >> N;
    cout << "Masukkan M: ";
    cin >> M;

   
    if (M >= N) {
        cout << "Bilangan M harus kurang dari N" << endl;
        return 0;
    }

    
    int faktor = 1;  
    for (int i = 1; i <= N; i++) {
        faktor *= i;  
        
        
        if (i != M) {
            cout << faktor << endl; 
        }
    }

    return 0;
}
