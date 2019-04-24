#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fonksiyon1(int s1);
int fonksiyon2(int s1, int sayac);
int main()
{
    int sayi,sayac;
    printf("Sayi giriniz");
    scanf("%d",&sayi);
    sayac=fonksiyon1(sayi);
    fonksiyon2(sayi,sayac);
    return 0;
}
int fonksiyon1(int s1)
{
    int sayac=0;
    while(s1!=0)
    {
        sayac++;
        s1=s1/10;
    }
    return sayac;
}
int fonksiyon2(int s1, int sayac)
{
    int sonuc=0,a;
    a=pow(10,sayac-1);
    while(s1!=0)
    {
        printf("%d\n",sonuc);
        sonuc=s1/a;
        s1=s1%a;
        a/=10;

    }
}
