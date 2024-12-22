#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("data.txt"); 
    if (!file.is_open()) {
        cerr << "Error: File tidak ditemukan atau tidak bisa dibuka." << endl;
        return 1;
    }

    int total = 0, number;

    
    while (file >> number) {
        total += number;
    }

    file.close(); 

    cout << "Jumlah total angka: " << total << endl;
    return 0;
}