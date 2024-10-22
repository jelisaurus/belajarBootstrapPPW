#include <stdio.h>

int main(){

    //int a = 5;
    // printf("%d/n", a % 2 == 0);

    //if(a % 2 == 0) {
        //printf("nilai A adalah angka genap");
    //} else
    //{
            //printf("nilai A adalah ganjil");
    //}

    // int x;
    // printf("Masukkan x : ");
    // scanf("%d",&x);

//     if (x % 2 == 0 && x % 3 == 0)
//   {
//    printf("%d habis dibagi 2 dan 3", x);
//   } else if (x % 2 == 0)
//   {
//     printf("%d habis dibagi 2", x);
    //  } else if (x % 3 == 0)
    //  {
    //      printf("%d habis dibagi 3", x);
    //  } else {
    //      printf("%d tidak habis dibagi 2 atau 3", x);
    //  }

    int pilihan;
    printf("pilihan menu\n");
    printf("1, gocar\n");
    printf("2, goride\n");
    printf("3, gofood\n");
    printf("masukkan pilihan menu (1-3) : ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1:
        printf("gocar");
        break;

    case 2:
        printf("goride");
        break;

    case 3:
        printf("gofood");
        break;
    
    default:
        break;
    }

    return 0;


}

