#include <iostream>
using namespace std;

int main (){
    // cout << "HELLO WORLD" << endl;
    // cout << "baru belajar, ngodingnya pakek cpp" <<endl;
    // cout << "waw" << endl;
    // cout << "baru belajar, ngodingnya pakek cpp" <<endl;
    // cout << "heloooow my code" << "code" <<endl;

    // int y=0;
    // const int v=100;
    // int h=50;
    // cout << "masukan angka=" ;
    // cin >> y>> h;

    // cout <<y << "="<<h;

int count;
int &b = count;
// b adalah variabel yang sama seperti count

count = 1;
cout << "b is "<< b << endl;
b++;
cout << "count is" << count << endl;

     return 0;
}
