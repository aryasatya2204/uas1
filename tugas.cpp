#include <iostream>
#include <string>
using namespace std;

// Mendefinisikan struct untuk alamat
struct Alamat {
    string jalan;
    string kota;
    string provinsi;
};

// Mendefinisikan class Mahasiswa
class Mahasiswa {
private:
    string nama;
    int umur;
    Alamat alamat;

public:
    // Constructor
    Mahasiswa(string nama, int umur, Alamat alamat) {
        this->nama = nama;
        this->umur = umur;
        this->alamat = alamat;
    }

    // Setter dan Getter untuk nama
    void setNama(string nama) {
        this->nama = nama;
    }
    string getNama() {
        return nama;
    }

    // Setter dan Getter untuk umur
    void setUmur(int umur) {
        this->umur = umur;
    }
    int getUmur() {
        return umur;
    }

    // Fungsi untuk menampilkan data mahasiswa
    void tampilkanData() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << " tahun" << endl;
        cout << "Alamat: " << alamat.jalan << ", " << alamat.kota << ", " << alamat.provinsi << endl;
    }
};

int main() {
    Alamat alamat1 = {"Jalan Raya", "Bandung", "Jawa Barat"};
    Mahasiswa mahasiswa1("John Doe", 20, alamat1);
    mahasiswa1.tampilkanData();


    return 0;
}
