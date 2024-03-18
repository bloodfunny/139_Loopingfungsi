#include <iostream>
using namespace std;

int main(){

    int x;
    srand(time(0));

    do
    {
        cout << "Perulangan dengan Do..While" << endl;
        x = rand () % 10;
        cout << "Nilai x = " << x << endl;

    }While(x > 4);


    char pilihan;

    do {
        string nama;

        cout << "masukan nama = ";
        cin >> nama;

       
        cout << "apakah anda ingin mengulangi lagi? (y/n)";
        cin >> pilihan;

    }while( pilihan == 'y' || pilihan == 'y');



}
