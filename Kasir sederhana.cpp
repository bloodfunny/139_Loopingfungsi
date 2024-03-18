#include <iostream>
using namespace std;

int nTelor, nMie, nAir,jumlah;
int nTelor = 2000, nMie = 2800, nAir = 3000;
string nama;

void input()
{
    cout << "Masukan nama = ";
    cin >> nama;
    cout << "Masukan jumlah telor = ";
    cin >> nTelor;
    cout << "Masukan jumlah mie = ";
    cin >> nMie;
    cout << "Masukan jumlah air = ";
    cin >> nAir;
} 

int hitungHarga() {
    return (nTelor * nTelor) + (nMie * nMie) + (nAir * nAir);
}

void display(){
    cout << "nama = " << nama <<endl;
    cout << "Jumlah telor = " << nTelor << endl;
    cout << "Jumlah mie = " << nMie << endl;
    cout << "Jumlah air = " << nAir <<endl;
    cout << "Total Harga Rp." << hitungHarga() <<endl;

}

int main() {

    char pilihan;

    do {
        input();
        display();

        cout << "apakah anda ingin mengulangi (y/n) ? ";
        cin >> pilihan;

        system("cls");
    }while(pilihan == 'y' || pilihan == 'y');
}


