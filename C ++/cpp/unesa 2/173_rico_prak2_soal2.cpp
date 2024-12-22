#include <iostream>
using namespace std;

int main() {

   double nilai1, nilai2, nilai3, nilai4, nilai5;
   double rata_rata;
    
  
    cout << "Masukkan nilai pertama (0 - 100): ";
    cin >> nilai1;
    cout << "Masukkan nilai kedua (0 - 100): ";
    cin >> nilai2;
    cout << "Masukkan nilai ketiga (0 - 100): ";
    cin >> nilai3;
    cout << "Masukkan nilai keempat (0 - 100): ";
    cin >> nilai4;
    cout << "Masukkan nilai kelima (0 - 100): ";
    cin >> nilai5;

    
    if ((nilai1 < 0 || nilai1 > 100) || (nilai2 < 0 || nilai2 > 100) ||
        (nilai3 < 0 || nilai3 > 100) || (nilai4 < 0 || nilai4 > 100) ||
        (nilai5 < 0 || nilai5 > 100)) {
        cout << "Salah satu nilai tidak valid. Masukkan nilai antara 0 hingga 100." << endl;
    } else {
        
        double rata_rata = (nilai1 + nilai2 + nilai3 + nilai4 + nilai5) / 5;

       
        cout << "Rata-rata nilai: " << rata_rata << endl;
    }
   

    
    char grade;
    switch (static_cast <int> (rata_rata) / 10) { 
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'E';
            break;
            return 0;
    }

  if (rata_rata > 78) {
          cout << "Status: Lulus" <<endl;
        } else {
          cout << "Status: Tidak Lulus" <<endl;
        }


    
    cout << "Tier nilai mahasiswa: " << grade << endl;

    return 0;
}