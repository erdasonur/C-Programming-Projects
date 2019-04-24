#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
int rastgelesayi(int ustsinir);
int main()
{
    int sayi,yaz;
    printf("Ust siniri giriniz");
    scanf("%d",&sayi);
    yaz=rastgelesayi(sayi);
    return 0;
}
int rastgelesayi(int ustsinir)
{
    int rastgele;
    rastgele=1+rand()%ustsinir;
    return rastgele;
}
