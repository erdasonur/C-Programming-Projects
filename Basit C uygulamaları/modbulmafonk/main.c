#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10
int sayma(int dizi1[],int boyut,int sayac[]);
int modbulma(int sayac[],int boyut);
int main()
{
    int dizi[BOYUT]={1,1,4,5,7,8,5,5,7,7};
    int sayac[BOYUT]={0};
    int yazdir;
    sayma(dizi,BOYUT,sayac);
    yazdir= modbulma(sayac,BOYUT);
    printf("%d",yazdir);
    return 0;
}
int sayma(int dizi1[],int boyut,int sayac[])
{
    int a,i;
    for(i=0;i<boyut;i++)
    {
        a=dizi1[i];
        sayac[a-1]++;
    }
}
int modbulma(int sayac[],int boyut)
{
    int mod=sayac[0];
    int i,max=0;
    for(i=1;i<boyut;i++)
    {
        if(mod<sayac[i])
        {
            mod=sayac[i];
            max=i;
        }
    }
    return max+1;
}
