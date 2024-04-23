#include <iostream>
using namespace std;

class bangundatar {

    private: //akses modifier
        float panjang, Lebar;
    public:
        float Luas;

    void input() { // methode input persegi panjang
        cout << "Masukan Panjangnya = ";
        cin >> panjang;
        cout << "Masukan Lebarnya = ";
        cin >> Lebar;
    }

    float hitungLuas() {
        return panjang * Lebar;
    }


};