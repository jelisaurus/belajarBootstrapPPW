#include <stdio.h>

int main(){
    //int a = 5;
    //int b = 10;
    //int c = a + b;
    //int d = a - b;
    //printf("c = %d\n", c);
    //printf("d = %d\n", d);

    int b = 1;
    int a = 2;
    a = b++; a = 1,b = 2;
    printf("a = %d\n", a);


    a = ++b;
    printf("a = %d\n", a);

    int a = 25;
    int b =5;
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a < b : %d\n", a < b);
    printf("a > B : %d\n", a > b);

    int a = 25;
    int b = 5;
    printf("AND : %d\n", (a >= b) && (a == b));
    printf("AND : %d", (a > b) || (a == b));

    int a;
    int b;
    printf("Masukkan nilai pertama :");
    scanf("%d", &a);
    printf("Masukkan nilai kedua :");
    sscanf("%d", &b);
    a += b;
    printf("%d", a);

    return 0;
}