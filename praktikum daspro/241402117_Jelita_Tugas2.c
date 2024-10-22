#include <stdio.h>

int main(){
    int nilai;
    printf("Masukkan Nilai Anda : ");
    scanf("%d",&nilai);

    if (nilai >= 80 && nilai <= 100)
    { 
        printf("nilai anda : A", nilai);
    } else if (nilai >= 75 && nilai <= 79)
    {
        printf("nilai anda : B+", nilai);
    } else if (nilai >= 70 && nilai <= 74)
    {
        printf("nilai anda : B", nilai);
    } else if (nilai >= 65 && nilai <= 69)
    {
        printf("nilai anda : C+", nilai);
    } else if (nilai >= 60 && nilai <= 64)
    {
        printf("nilai anda : C", nilai);
    } else if (nilai >= 50 && nilai <= 59)
    {
        printf("nilai anda : D", nilai);
    } else if (nilai < 50 && nilai >= 0)
    {
        printf("nilai anda : E", nilai);
    } else {
        printf("nilai input tidak sesuai", nilai);
    }
    
    return 0;

}