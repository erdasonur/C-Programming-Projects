#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
//hanoinin kuleleri
int main()
{
    int sayi,tahmin;
    printf("Sayi giriniz");
    scanf("%d",&sayi);
    srand(time(NULL));
    tahmin=1+rand()%100;
    while(sayi!=tahmin)
    {
        if(sayi<tahmin)
    {
        printf("buyuk\n");
        printf("Sayi giriniz");
        scanf("%d",&sayi);
    }
    else if(sayi>tahmin)
    {
        printf("kucuk\n");
        printf("Sayi giriniz");
        scanf("%d",&sayi);
    }
    }

            printf("Buldun!!");
            printf("%d",tahmin);
    return 0;
}
