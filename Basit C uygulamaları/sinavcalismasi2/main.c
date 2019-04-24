#include <stdio.h>
#include <stdlib.h>
#define boyut 6
void bubblesort(int *dizi);
void swap(int *dizim,int *dizim2);
int binarysearch(int *dizi,int number);
int main()
{
    int dizimm[boyut]={4,7,1,2,6,8};
    int sayi;
    printf("Bulunmasý istenen sayiyi giriniz"); scanf("%d",&sayi);
    printf("\nDizinin siralanmamis hali : \n");
    int i;
    for(i=0;i<boyut;i++)
        printf("%d   ",dizimm[i]);
        bubblesort(dizimm);
        printf("\nDizinin siralanmis hali : \n");
    for(i=0;i<boyut;i++)
        printf("%d   ",dizimm[i]);
        if(binarysearch(dizimm,sayi)==1)
            printf("\nGot it!!");
        else
            printf("\n404 Not Found !!");

    return 0;
}
void bubblesort(int *dizi)
{
    int i=0,j=0;
    for(i=0;i<boyut-1;i++)
    {
        for(j=0;j<boyut-1;j++)
        {
            if(dizi[j]>dizi[j+1])
            swap(&dizi[j],&dizi[j+1]);
        }
    }
}
void swap(int *dizim,int *dizim2)
{
    int temp=*dizim;
    *dizim=*dizim2;
    *dizim2=temp;
}
int binarysearch(int *dizi,int number)
{
    int min,max;
    min=0;max=boyut;
    int orta;
    while(max-min>=0)
    {
        orta=(max+min)/2;
        if(dizi[orta]<number)
        {
            min=orta+1;
        }
        else if(dizi[orta]>number)
        {
            max=orta-1;
        }
        else
            return 1;
    }
    return 0;
}
