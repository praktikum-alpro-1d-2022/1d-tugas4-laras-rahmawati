#include <iostream>
using namespace std;
int main(){
    char menu ;
    cout<<"==========MENU RESTAURANT MC'YAHUD==========="<<endl;
    cout<<"============================================="<<endl;
    cout<<"1. Nasi Goreng Informatika \tRp.5.000,-"<<endl;
    cout<<"2. Nasi Soto Ayam Internet \tRp.7.000,-"<<endl;
    cout<<"3. Gado-gado Disket \t\tRp.4.500,-"<<endl;
    cout<<"4. Bubur Ayam LAN \t\tRp.4.000,-"<<endl;
    cout<<"============================================="<<endl;
    cout<<"Tolong Masukkanlah Pilihan Anda... : ";
    cin>>menu;
    switch(menu){
        case'1':
            cout<<"Pilihan No.1 Nasi Goreng Informatika Rp.5.000,-"<<endl;
            break;
        case'2':
            cout<<"Pilihan No.2 Nasi Soto Ayam Internet Rp.7.000,-"<<endl;
            break;
        case'3':
            cout<<"Pilihan No.3 Gado-gado Disket Rp.4.500,-"<<endl;
            break;
        case'4':
            cout<<"Pilihan No.4 Bubur Ayam LAN Rp.4.000,-"<<endl;
            break;
        default:
            cout<<"Anda Memasukkan Pilihan yang tidak sesuai"<<endl;

    }
    return 0;
}
