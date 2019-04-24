#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10
void fonk(int dizi[], int boyut);
float ortalama(int dizi[], int boyut);
float ortal(int dizi[], int boyut);
int main()
{
    int sayi,toplam=0,i;
    int sayilar[BOYUT];
    fonk(sayilar, BOYUT);
    float min=ortalama(sayilar,BOYUT);
    float max=ortal(sayilar,BOYUT);
    printf("max deger %f \nmin deger %f",max,min);
    return 0;
}
void fonk(int dizi[], int boyut)
{
    int i;
    for(i=0;i<boyut;i++)
    {
        printf("Sayi giriniz");
        scanf("%d",&dizi[i]);
    }
}
float ortalama(int dizi[],int boyut)
{
    float min;
    int j;
    for(j=0;j<boyut;j++)
    {
        if(j==0)
           {
              min=dizi[j];
           }
        if(dizi[j]<min)
        {
           min=dizi[j];
        }
    }

    return min;
}
float ortal(int dizi[],int boyut)
{
    float max;
    int j;
    for(j=0;j<boyut;j++)
    {
        if(j==0)
           {
              max=dizi[j];
           }
        if(dizi[j]>max)
        {
            max=dizi[j];
        }
    }

    return max;
}
