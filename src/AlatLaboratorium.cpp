#include <iostream>
#include <string>
using namespace std;

class AlatLaboratorium{
    public:
    string nama;
    string kategori;
    int jumlah;

    void tampilkaninfo(){
        cout << nama << " dengan kategori " << kategori << " memiliki jumlah " << jumlah << endl;
    }
    void tambahjumlah(int n){
        jumlah+=n;
        cout << "Jumlah " << nama << " telah ditambah sebanyak " << n << endl; 
    }
    void kurangijumlah(int n){
        jumlah-=n;
        cout << "Jumlah " << nama << " telah dikurangi sebanyak " << n << endl;
    }
};
