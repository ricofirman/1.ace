#include <iostream>
using namespace std;
 
int main() {
    int bilangan;
    int total ;

    cout << "Masukkan bilangan bulat (Ctrl + Z untuk stop, atau selain angka):" << endl;

    while (cin >> bilangan) {
        total += bilangan;  
    }

    cout << "Total jumlah bilangan: " << total << endl;

    return 0;
} 