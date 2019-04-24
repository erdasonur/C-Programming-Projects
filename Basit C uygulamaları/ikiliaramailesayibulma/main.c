#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void f1(int dizim[10]){
    int i;
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        dizim[i]=1+rand()%20;
    }
}
void f2(int dizi2[10])
{
    int i,j,tut;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(dizi2[i]>dizi2[j])
            {
                tut=dizi2[i];
                dizi2[i]=dizi2[j];
                dizi2[j]=tut;
            }
        }
    }
}
void f3(int say2,int dizi3[10])
{
    int max=10,min=0,sayac=0,a;
    while(max-min>1)
    {
        a=(max+min)/2;
        if(say2>dizi3[a])
        {
            min=a+1;
        }
        else if(say2<dizi3[a])
        {
            max=a-1;
        }
        else if(say2==dizi3[a])
        {
            sayac++;
            break;
        }
    }
    if(sayac==0) printf("Sayi bulunamamistir\n");
    else
    {
        printf("%d sayisi uretilmistir \n",say2);
    }
}
void f4(int dizi4[10])
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d\n",dizi4[i]);
    }
}
int main()
{
    int sayi;
    int dizi[10];
    printf("Sayi giriniz\n\n");
    scanf("%d",&sayi);
    f1(dizi);
    f2(dizi);
    f3(sayi,dizi);
    f4(dizi);
    return 0;
}
