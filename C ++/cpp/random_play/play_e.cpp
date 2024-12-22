#include <iostream>
using namespace std;

int main(){
    int var = 5;
    cout << &var << endl;
    int* pointvar = &var ;
    cout << *pointvar << endl;
    cout <<  &pointvar << endl;
   

    
    return 0;
}