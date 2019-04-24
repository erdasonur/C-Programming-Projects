#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10
float fonk(int *ptr);
int main()
{
    int i,x;
    int *dizi[BOYUT]={7,5,8,6,1,2,15,4,3,8};
    float yazdir;
    for(i=0;i<BOYUT;i++)
    {
        x=dizi[i];
        printf("dizinin %d. elemani = %d\n",i+1,x);
    }
    yazdir=fonk(dizi);
    printf("\n\nOrtalamaniz ==> %f\n\n",yazdir);
    return 0;
}
float fonk(int *ptr)
{
    float toplam=0,ortalama,i,x;
    for(i=0;i<BOYUT;i++)
    {
        toplam=toplam+(*ptr);

        ++ptr;
    }
    ortalama=toplam/BOYUT;
    return ortalama;
}
