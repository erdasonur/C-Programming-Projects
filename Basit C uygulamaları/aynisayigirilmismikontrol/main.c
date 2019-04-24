#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10];
    int i,j,a=1;
    printf("Sayi gir\n");
    scanf("%d",&dizi[0]);
    for(i=1;i<10;i++)
    {
        printf("Sayi gir\n");
        scanf("%d",&dizi[i]);
        j=i-1;
        while(j>=0){
        if(dizi[i]==dizi[j])
        {
            a++;
            j--;
        }

        else
            j--;


        }
        if(a!=1)
        printf("%d kez ayni sayi girilmistir\n",a);
        a=1;
    }
    return 0;
}
