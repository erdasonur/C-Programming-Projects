#include <stdio.h>
#include <stdlib.h>

int parametre(int sayi1, int sayi2, int sayi3);
int main()
{
    int say1,say2,say3,ekucuk=0;
    printf("Sayi giriniz");
    scanf("%d",&say1);
    printf("Sayi giriniz");
    scanf("%d",&say2);
    printf("Sayi giriniz");
    scanf("%d",&say3);
    ekucuk=parametre(say1,say2,say3);
    printf("en kucuk sayi %d",ekucuk);
    return 0;
}
    int parametre(int sayi1, int sayi2, int sayi3)
    {
        int ek;
      if(sayi1<sayi2 && sayi1<sayi3)
      {
          ek=sayi1;
      }
      if(sayi2<sayi1 && sayi2<sayi3)
      {
          ek=sayi2;
      }
      if(sayi3<sayi2 && sayi3<sayi1)
      {
          ek=sayi3;
      }
      return ek;
    }
