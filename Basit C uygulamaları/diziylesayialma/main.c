#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10
int main()
{
    int dizi1[BOYUT],dizi2[BOYUT],i=0,j;
    printf("Sayi giriniz");
        scanf("%d",&dizi1[i]);
        dizi2[i]=dizi1[i];
        int sayac=1;

    for(i=1; i < BOYUT; i++)
    {
        printf("Sayi giriniz");
        scanf("%d",&dizi1[i]);
        dizi2[i]=dizi1[i];

        for(j=1 ; j<=i ; j++)
        {
        if(dizi2[i-j]==dizi1[i])
        {
            sayac += 1;
        }
        }
 		
        printf("Ayni sayi %d kez girilmistir \n",sayac-1);
        sayac=1;
    }
    return 0;
}
