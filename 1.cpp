#include <stdio.h>

int main(){
    long nilai, hasil;
    printf("Masukan nilai yang akan di hitung?");
    scanf("%d",&nilai);
    hasil = faktorial(nilai);
    printf("%d! = %d\n" nilai, hasil);
    
    return 0;
}
