#include <stdio.h>
#include <string.h>

struct data_tanggal{
    int tahun;
    int bulan;
    int tanggal;
};

struct data_pegawai{
    int nip;
    char nama[25];
    data_tanggal lahir;
};

int main(){
    data_pegawai karyawan;
    karyawan.lahir.tahun = 1983;
    karyawan.lahir.bulan = 7;
    karyawan.lahir.tanggal = 23;
    printf("Masukkan nama: ");

    
    scanf("%d",&karyawan.nama);
    printf("Masukkan NIP: ");
    scanf("%d", &karyawan.nip);
    // system("cls");
    printf("%s\n", karyawan.nama);
    printf("%d\n", karyawan.nip);

    printf("%d/%d/%d\n", karyawan.lahir.tahun, karyawan.lahir.bulan, karyawan.lahir.tanggal);
    // system("pause");
    return 0;
}