#include <iostream>

using namespace std;

struct AlamatDetail
{
    char desa[20];
    char kota[20];
};

struct Mahasiswa {
    char nim[12];
    char nama[20];
    AlamatDetail alamat;
    int umur;
};


int main()
{
    Mahasiswa mhs;

    cout << "Masukkan nim: ";
    cin >> mhs.nim;
    cout << "Masukkan nama: ";
    cin >> mhs.nama;
    cout << "Alamat: " << endl;
    cout << "\tNama Desa: ";
    cin >> mhs.alamat.desa;
    cout << "\tNama Kota: ";
    cin >> mhs.alamat.kota;
    cout << "Masukkan Umur: ";
    cin >> mhs.umur;

    cout << "\nNim : " << mhs.nim;
    cout << "\nNama : " << mhs.nama;
    cout << "\nNdesa : " << mhs.alamat.desa;
    cout << "\nKota : " << mhs.alamat.kota;
    cout << "\nUmur : " << mhs.umur;
}
