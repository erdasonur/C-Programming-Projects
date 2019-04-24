#include <stdio.h>
#include <stdlib.h>
struct adres{
    char mahalle[29];
    char sokak[29];
    char cadde[29];
};


struct {
    char ad[50];
    char soyad[50];
    int numara;
    int not1;
    struct adres adr[2];
}ogr[2];

int main()
{

    int i;
    for(i=0;i<2;i++){
    printf("%d.Ogrenci adini giriniz: ",i+1); scanf("%s",&ogr[i].ad);
    printf("%d.Ogrenci soyadini giriniz: ",i+1); scanf("%s",&ogr[i].soyad);
    printf("%d.Ogrenci numara giriniz: ",i+1); scanf("%d",&ogr[i].numara);
    printf("%d.Ogrenci not giriniz: ",i+1); scanf("%d",&ogr[i].not1);
    printf("%d.Ogrenci Mahalle: ",i+1); scanf("%s",&ogr[i].adr[i].mahalle);
    printf("%d.Ogrenci Sokak: ",i+1); scanf("%s",&ogr[i].adr[i].sokak);
    printf("%d.Ogrenci Cadde: ",i+1); scanf("%s",&ogr[i].adr[i].cadde);

    }

    for(i=0;i<2;i++){
    printf("%s \t",ogr[i].ad);
    printf("%s \t",ogr[i].soyad);
    printf("%d \t",ogr[i].numara);
    printf("%d \t",ogr[i].not1);
    printf("%s \t",ogr[i].adr[i].mahalle);
    printf("%s \t",ogr[i].adr[i].sokak);
    printf("%s \n",ogr[i].adr[i].cadde);

    }
return 0;
}
