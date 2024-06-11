// #include <stdio.h>
// using namespace std;
// int main() {
//     int x;
//     int *y;

//     y = &x;
//     x = 5;

//     printf("Nilai x = %d\n", x);
//     printf("Alamat Memori x = %p\n", &x);
//     printf("Nilai y = %d\n", *y);
//     printf("Alamat Memori y = %p\n", y);
//     getchar();
//     return 0;
// }

#include <iostream>
using namespace std;

// main (){
//     int x, *y;
//     y = new int;
//     x =5;
//     *y= 10;
//     cout << " Nilai x = " <<x;
//     cout << " \nAlamat memori x = "<<&x;
//     cout << " \n\nNilai y = " << *y;
//     cout << " \nAlamat memori y = "<<y;
//     delete y;
//     cout << " \n\n Setelah di delete ";
//     cout << " \nNilai y = "<< *y;
//     cout << " \nAlamat memori y = "<< y;
//     system("pause");
// }

main(){
    int num[10],i;
    int *start, *end;
    start = &num[0];
    end = &num[9];
    i = 1;
    while(start != end){
        cout << "Masukan bilangan ke "<<i<<": ";
        cin >> *start;
        i++;
        start++;
    }
    system("pause");
}