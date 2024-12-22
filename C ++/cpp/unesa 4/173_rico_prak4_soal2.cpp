#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah angka: ";
    cin >> n;

    int data[n];
    vector<int> angkaUnik;

    cout << "Masukkan " << n << " angka: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> data[i];

        bool sudahAda = false;
        for (int num : angkaUnik) {
            if (num == data[i]) {
                sudahAda = true;
                break;
            }
        }
        
        if (!sudahAda) {
            angkaUnik.push_back(data[i]);
        }
    }

    int total = 0;
    for (int num : angkaUnik) {
        total += num;
    }

    double rataRata = static_cast<double>(total) / angkaUnik.size();
    cout << "Rata-rata angka unik: " << rataRata << endl;

    return 0;
}