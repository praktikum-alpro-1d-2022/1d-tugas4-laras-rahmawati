#include <iostream>
using namespace std;
int main(){
    char kode,ukuran;
    int jumlah,harga;
    string namasusu;
    cout<<"============================================PERUSAHAAN SUSU ABC========================================================\n";
    cout<<"Terdiri dari ; Dancow (1)|| Indomilk(2) || Sustacal(3)\n ";
    cout<<"==================Ketentuan harga dan nama susu hanya akan berlaku jika semua input benar============================\n";
    cout<<"Tolong Perhatikan Input kode, jumlah, atau ukuran dan perhatikan juga kapitalisasi huruf\n";
    cout<<"========================================================================================================================\n\n";
    cout<<"    Silahkan Masukkan Kode Susu (1-3) : ";
    cin>>kode;
    cout<<"    Silahkan Masukkan Jumlah Pembelian susu : \n";
    cin>>jumlah;
    cout<<"    Silahkan Masukkan ukuran susu (B/S/K) : \n";
    cin>>ukuran;

    if((kode=='1' || kode=='2' || kode =='3')&&(ukuran =='B' || ukuran=='S' || ukuran=='K') && (jumlah>0)){
    switch(kode){
    case('1'):
        namasusu="Dancow";
        switch(ukuran){
            case'B':
                harga=10000;
                break;
            case'S':
                harga=4250;
                break;
            default:
                harga=2100;
                break;
            }
            break;

    case('2'):
        namasusu ="Indomilk";
            switch(ukuran){
                case'B':
                    harga=8500;
                    break;
                case'S':
                    harga=4000;
                    break;
                default :
                    harga=2025;
                    break;
            }
            break;
    default:
        namasusu ="Sustacal";
         switch(ukuran){
                case'B':
                    harga=17000;
                    break;
                case'S':
                    harga=14500;
                    break;
                default:
                    harga=8300;
                    break;
            }
            break;
        }

        cout<<"Susu\n "<<namasusu<<endl;
        cout<<"Harga Susu Rp.\t"<<harga<<".00"<<endl;
        cout<<"Jumlah Pembelian Rp.\t"<<harga*jumlah<<".00"<<endl;
    }else
    cout<<"Input kode, jumlah, atau ukuran salah, silahkan perhatikan lagi\n perhatikan juga kapitalisasi huruf"<<endl;

    return 0;
    }
