#include <stdio.h>
int main(){
    // for (int i = 0; i < 10; i++) {
    //     printf("Iterasi ke-%d berisi nilai %d\n", i + 1, i);
    // }
    // printf("loop berhasil dijalankan!\n");

    // int i = 0;
    // while (i < 10)
    // {
    //     printf("iterasi ke-%d berisi nilai %d\n", i + 1, i);
    //     i++;
    // }

    // char pilihan;
    // printf("masukkan pilihan (y/t) : ");
    // pilihan = getchar();
    // getchar();
    // while (pilihan == 'y') {
    //     printf("Halo, loop berjalan!\n");
    //     printf("apakah ingin lanjut? (y/t) : ");
    //     pilihan = getchar();
    //     getchar();
    // }

    // int i = 0;
    // do
    // {
    //   printf("hello world!\n");
    //   i++;
    // } while (i < 5);

    // for (int i = 0; i < 5; i++){
    //     if (i == 3)
    //     {
    //         break;
    //     }
    //     printf("iterasi %d bernilai %d\n", i + 1,i);
    // }
    // printf("\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     if (i == 3)
    //     {
    //         continue;
    //     }
    //     printf("iterasi %d bernilai %d\n", i + 1, i);
    // }

    // for (int baris = 1; baris <= 3; baris++)
    // {
    //     for (int kolom = 1; kolom <= 3; kolom++)
    //     {
    //         printf("baris %d kolom %d\n", baris, kolom);
    //     }
    //     printf("\n");
    // }
    // return 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
