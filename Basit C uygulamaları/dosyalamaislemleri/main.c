#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya1,*dosya2,*dosya3;
    int a=0,toprak=0;
    char isim[20],sifre[20];
    int numara,d2no,d2not;
    char disim[20],dsisim[20],dsifre[20];
    dosya1=fopen("dosya.txt","r");
    dosya2=fopen("dosya2.txt","r");
    dosya3=fopen("dosya3.txt","w");
    printf("Isminizi giriniz"); scanf("%s",&isim);
    printf("Sifrenizi giriniz"); scanf("%s",&sifre);
    int bayrak=0,i;
    while(!feof(dosya1))
    {
        fscanf(dosya1,"%d %s %s %s",&numara,&disim,&dsisim,&dsifre);
        for(i=0;disim[i]!='\0' && isim[i]!='\0';i++)
        {
            if(disim[i]!=isim[i])
            {
                bayrak=1;
            }
            else bayrak=0;
        }
        for(i=0;dsifre[i]!='\0' && sifre[i]!='\0';i++)
        {
            if(dsifre[i]!=sifre[i])
            {
                toprak=1;
            }
            else toprak=0;
        }
        if(bayrak==0 && toprak==0){
            fprintf(dosya3,"<zxHosgeldiniz sayin %s %s\n",disim,dsisim);
            while(!feof(dosya2))
            {
                fscanf(dosya2,"%d %d",&d2no,&d2not);
                if(d2no==numara)
                {
                    fprintf(dosya3,"\n C sinavindan almis oldugunuz not : %d",d2not);
                    a=1;
                }
            }
        }
    }fclose(dosya1);
        fclose(dosya2);
    if(a==0)
    {
        printf("Yanlis kullanici adi ya da sifre");

    }
    return 0;
}
