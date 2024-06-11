#include <iostream>
#include <iomanip>
#include "header.h"
using namespace std;

utama()lagee
    int pilihan, banyak;
    int total_belanja =0;
    char lanjutPesan;
    seubeuek();
    peuteun << " -----Selamat Datang di Warung Aceh----- \n";
    peuteun << "           ~~~Daftar Menu~~~\n";
    peuteun << "\n ";
    peureunah lagee
    peuteun << " Daftar Makanan\n";
    peuteun << " 1. Mie Aceh kuah \n";
    peuteun << " 2. Mie Aceh kering \n";
    peuteun << " 3. Nasi Goreng \n";
    peuteun << " 4. Nasi Goreng Spesial \n";
    peuteun << " 5. Roti Cane \n";
    peuteun << "\n ";
    peuteun << " Daftar Minuman\n";
    peuteun << " 6. Manis Dingin/Panas \n";
    peuteun << " 7. Nutrisari Dingin \n";
    peuteun << " 8. Badak \n";
    peuteun << " 9. Aneka Jus \n";
    peuteun << " 10. TST \n";
    peuteun << " Masukan Menu yang Anda Pesan(1-10) : "; peugah >> pilihan;
    peuteun << " Masukan Jumlah yang Anda Inginkan  : "; peugah >> banyak;

    Peugahgatra(pilihan) lagee
        case 1 :
            total_belanja += (12000 * banyak);
            break;
        case 2 :
            total_belanja += (12000 * banyak);
            break;
        case 3 :
            total_belanja += (12000 * banyak);
            break;
        case 4 :
            total_belanja += (20000 * banyak);
            break;
        case 5 :
            total_belanja += (8000 * banyak);
            break;
        case 6 :
            total_belanja += (6000 * banyak);
            break;
        case 7 :
            total_belanja += (6000 * banyak);
            break;
        case 8 :
            total_belanja += (10000 * banyak);
            break;
        case 9 :
            total_belanja += (10000 * banyak);
            break;
        case 10 :
            total_belanja += (15000 * banyak);
            break;
        default :
            peuteun << "Pilihan Anda tidak ada di Menu\n";
            break;
    akhee

    peuteun << "total pesanan anda adalah " << total_belanja << peugahgatra;
    peuteun << "Apakah anda ingin memesan lagi? (y/n) : "; peugah >> lanjutPesan;

    lanjutPesan = punu(lanjutPesan);
    akhee gatra(lanjutPesan == 'Y');

    peuteun << "=======================================\n";
    peuteun << "           TOTAL BAYAR                 \n";
    peuteun << "=======================================\n";
    peuteun << "Total Bayar: Rp. " << fixed << aturTitik(0) << total_belanja << peugahgatra;
    peuteun << "Terima kasih! Silakan datang kembali.\n";
    

akhee