#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
    FILE *dosya1;
    FILE *dosya2;
    char isim[20];
    char disim[20];
    int girilen;
    char soyisim[20];
    char dsoyisim[20];
    int dhesapno;
    float dhesapbakiyesi;
    dosya1=fopen("dosya1.txt","r");
    dosya2=fopen("dosya2.txt","r");
    printf("Hesap bilgileri getirilecek kiþinin ismini giriniz");
    scanf("%s",isim);
    printf("Soyismini giriniz");
    scanf("%s",soyisim);
    /*printf("Isme gore islem icin 1' e \n Hesap bakiyesi 50'nin altýndakileri goruntulemek icin 2'ye \n Programý bitirmek icin 3'e basýnýz");
    scanf("%d",girilen);

    switch(girilen)
    {
    case 1 :
    case 2 :
    case 3 :
    }*/
    int d2hesapno;
    float d2hesapbakiyesi;
    while(!feof(dosya1))
    {
        fscanf(dosya1,"%d %s %s %f ",&dhesapno,disim,dsoyisim,&dhesapbakiyesi);
        if(strcmp(isim,disim)==0 && strcmp(soyisim,dsoyisim)==0)
        {
            printf("Hosgeldiniz %d hesap numarali %s %s",dhesapno,disim,dsoyisim);
            while(!feof(dosya2))
                  {
                      fscanf(dosya2,"%d %f",&d2hesapno,&d2hesapbakiyesi);
                      if(dhesapno==d2hesapno && d2hesapbakiyesi>50)
                      {
                          printf("\nHesap bakiyeniz%f",d2hesapbakiyesi);
                      }
                  }
        }
    }
    fclose(dosya1);
    fclose(dosya2);
    return 0;
}
