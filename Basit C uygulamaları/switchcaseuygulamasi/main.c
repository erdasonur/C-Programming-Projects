#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim,girilen1,girilen2,girilen3,toplam;
    float uk,kk,kenar,uzunk,kisak;
    printf("Dikdörtgenin alani icin 1i ,Karenin alani icin 2yi ,Ücgenin alani icin 3ü seciniz..");
    scanf("%d",&secim);
    switch(secim)
    {
    case 1:
        printf("Alan hesaplatmak icin 1i Cevre hesaplatmak icin2 yi seciniz");
        scanf("%d",&girilen1);
        switch(girilen1)
        {
            case 1:
                printf("Uzun kenari giriniz");
                scanf("%f",&uk);
                printf("Kýsa kenari giriniz");
                scanf("%f",&kk);
                toplam=uk+kk;
                printf("%d",toplam);
                break;
        }
    case 2:
        printf("Kenari giriniz");
        scanf("%f",&kenar);
        printf("Alan hesaplatmak icin 1i Cevre hesaplatmak icin2 yi seciniz");
        scanf("%d",&girilen2);
        break;
        switch(girilen2)
        {
            case 1:printf("%f",kenar*kenar);break;
            case 2:printf("%f",kenar*4);break;
        }
            case 3:
        printf("Uzun kenari giriniz");
                scanf("%f",&uzunk);
                printf("Kýsa kenari giriniz");
                scanf("%f",&kisak);
        printf("Alan hesaplatmak icin 1i Cevre hesaplatmak icin2 yi seciniz");
        float hipo;
        hipo=sqrt(pow(uzunk,2)+pow(kisak,2));
        scanf("%d",&girilen3);
        switch(girilen3)
        {
            case 1:printf("%f",(uzunk*kisak)/2);
            case 2:printf("%f",uk+kk+hipo);
        }
        }
    return 0;
}
