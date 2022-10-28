#include <iostream>
using namespace std;
//program menentukan bilangan ganjil dan genap
int main() {
    int bilangan;
    cout << "Masukkanlah Bilangan: ";
    cin >> bilangan;
    if (bilangan%2==0) {
        cout << "Anda memasukkan bilangan Genap: " << bilangan << endl;
    }else{
        cout << "Anda memasukkan bilangan Ganjil: " << bilangan << endl;
}
return 0;
}
