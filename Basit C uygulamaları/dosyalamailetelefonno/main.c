#include <stdio.h>
#include <stdlib.h>
//rewind
int main()
{
    FILE *dosya;
    int i=0,j;
    char dizi[20];
    int dosyasayi;
    char ilkharf,ikinciharf,ucuncuharf;
    dosya=fopen("dosya.txt","r");
    printf("Numarayi simgeleyen harfleri giriniz");
    scanf("%s",dizi);
    for(i=0;i<strlen(dizi);i++)
    {
        while(!feof(dosya))
        {
            fscanf(dosya,"%d %c %c %c",&dosyasayi,&ilkharf,&ikinciharf,&ucuncuharf);
            if(dizi[i]==ilkharf || dizi[i]==ikinciharf || dizi[i]==ucuncuharf)
            {
                printf("%d",dosyasayi);
            }

        }rewind(dosya);
    }

    fclose(dosya);
    return 0;
}
