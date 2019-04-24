#include <stdio.h>
#include <stdlib.h>
#define boyut 5
int main()

{
    int dizi[boyut],i,j,sayac=1,say,eb=0,a=0,b;
    for(i=0; i<boyut; i++)
    {
        printf("sayi gir");
        scanf("%d",&dizi[i]);
    }
    for(i=1; i<boyut; i++)
    {
        for(j=i-1;j>=0; j--)
        {
            if(dizi[i]==dizi[j])
            {
                sayac++;
            }
        }
        if(sayac>1)
        {
        //printf("%d kez girildi %d sayisi \n",sayac,dizi[i]);
        if(eb<sayac)
        {
            eb=sayac;
            say=dizi[i];
             b=sayac;
        }
        sayac=1;
        a++;
        }

    }
    if(a==0)
    {
        printf("mod yok");
    }
    else
    printf("%d kez %d sayisi vardir",b,say);

    return 0;
}
