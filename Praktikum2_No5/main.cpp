#include <iostream>

using namespace std;

int main()
{
    int jariJari, tinggiTabung;
    float kelilingAlas, luasAlas, volumeTabung, phi = 3.14;

    jariJari = 7;
    tinggiTabung = 7;
    luasAlas = 2 * phi * jariJari * jariJari;
    kelilingAlas = 2 * phi * jariJari;
    volumeTabung = luasAlas * tinggiTabung;

    cout << "Program Mencari Keliling Alas, Luas Alas, dan Volume Tabung" << endl;
    cout << "============================================================" << endl;
    cout << "Jari-jari alas = " <<jariJari<< endl;
    cout << "Tinggi tabung = " <<tinggiTabung<< endl;
    cout << "Konstanta pi = " <<phi<< endl;
    cout << ""<<endl;
    cout << "Luas alas = " <<luasAlas<< endl;
    cout << "Keliling alas = " <<kelilingAlas<< endl;
    cout << "Volume tabung = " <<volumeTabung<< endl;
    return 0;
}
