//PROGRAM TAHUN KABISAT
#include <iostream>
using namespace std;
//Syarat tahun kabisat : Tahun harus habis dibagi 400 , Tahun harus tidak habis dibagi 100 dan harus habis dibagi 4
int main(){
  int tahun;
  cout<< "=======PROGRAM MEMASTIKAN KABISAT ATAU TIDAKNYA SUATU TAHUN=======\n";
  cout<< "==================================================================\n";
  cout << "Masukkan tahun: ";
  cin >> tahun;
  if (tahun%400 == 0){
    cout << tahun << " Merupakan Tahun Kabisat\n";
  } else if(tahun%100 == 0){
    cout << tahun << " Bukan Tahun Kabisat\n";
  } else if(tahun%4 == 0){
    cout << tahun << "  Merupakan Tahun Kabisat\n";
  } else {
    cout << tahun << "  Bukanlah Tahun kabisat\n";
  }
  return 0;
}
