#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "---------------------------------------------------\n";
    cout << "=========SELAMAT DATANG INFORMATIC'S 2022==========\n";
    cout << "---------------------------------------------------\n\n";
    string user, pass, userName, passWord;
    user = "laras123";
    pass = "jenolee";

    cout << "Masukkan Username: ";
    cin >> userName;
    cout << "Masukkan Password: ";
    cin >> passWord;

    if(userName == user){
        if(passWord == pass){
           cout << "\n----------------------------------------------------------------------------------\n";
           cout << "Username, dan password yang anda masukkan benar! Selamat Anda Berhasil Login" << endl;
           cout << "------------------------------------------------------------------------------------\n\n";
        }else{
            if(userName == user){
                cout << "\n------------------------------------------------------\n";
                cout << " USERNAME Sesuai, PASSWORD Yang Anda Masukkan Tidak Sesuai!" << endl;
                cout << "--------------------------------------------------------\n\n";
            }else{
                cout << "\n------------------------------------------------------\n";
                cout<<"USERNAME Tidak Sesuai, PASSWORD Yang Anda Masukkan Sesuai!"<<endl;
                cout << "---------------------------------------------------------\n\n";
            }
        }
    }else{
        if(passWord == pass){
            cout << "\n------------------------------------------------------\n";
            cout<<"USERNAME Tidak Sesuai, PASSWORD Yang Anda Masukkan Sesuai!"<<endl;
            cout << "---------------------------------------------------------\n\n";

        }else{
            cout << "\n------------------------------------------------------\n";
            cout<<"Username dan Password Yang Anda Masukkan Tidak Sesuai!"<<endl;
            cout << "---------------------------------------------------------\n\n";
        }
    }

    return 0;
}

