#include <iostream>


using namespace std;

int main() {
    int n; 
    cout << "Masukkan jumlah tempat makan: ";
    cin >> n;

    string bestPlace; 
    int maxChicken = 0; 
    int maxTaste = 0; 

    for (int i = 0; i < n; i++) {
        string name;
        int chicken, taste;

        cout << "Masukkan nama tempat makan: ";
        cin.ignore();
        getline(cin, name);
        cout << "Masukkan jumlah ayam goreng dan tingkat kelezatan: ";
        cin >> chicken >> taste;

        
        if (chicken > maxChicken || (chicken == maxChicken && taste > maxTaste)) {
            bestPlace = name;
            maxChicken = chicken;
            maxTaste = taste;
        }
    }

    
    cout << "Tempat terbaik adalah: " << bestPlace << endl;
    cout << "Jumlah ayam goreng: " << maxChicken << endl;
    cout << "Tingkat kelezatan: " << maxTaste << endl;

    return 0;
}
