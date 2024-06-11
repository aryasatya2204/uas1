#include <iostream>
#include <vector>
using namespace std;

main(){
    int jlh_siswa;
    system("cls");
    vector<double>nilai;
    cout<<"Jumlah siswa: "; cin >> jlh_siswa;
    nilai.resize(jlh_siswa);
    for(int i=0;i<(int) nilai.size();i++){
        cout<< "Nilai "<< i+1<<": ";
        cin>> nilai[i];
    }
}