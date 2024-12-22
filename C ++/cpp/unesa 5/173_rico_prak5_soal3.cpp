#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Fungsi rekursif untuk membalikkan string tanpa tanda baca
void reverseRecursive(string &str, int left, int right) {
    // Base case: jika posisi sudah melampaui
    if (left >= right)
        return;

    // Lewati karakter non-alfanumerik di kiri
    if (!isalnum(str[left])) {
        reverseRecursive(str, left + 1, right);
    }
    // Lewati karakter non-alfanumerik di kanan
    else if (!isalnum(str[right])) {
        reverseRecursive(str, left, right - 1);
    }
    // Tukar karakter alfanumerik
    else {
        swap(str[left], str[right]);
        reverseRecursive(str, left + 1, right - 1);
    }
}

int main() {
    // Masukan kalimat
    string input;
    cout << "Masukkan kalimat: ";
    getline(cin, input);

    // Proses pembalikan
    reverseRecursive(input, 0, input.size() - 1);

    // Hasil keluaran
    cout << "Hasil pembalikan: " << input << endl;

    return 0;
}
