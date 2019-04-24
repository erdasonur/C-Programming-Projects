#include <stdio.h>
#include <stdlib.h>

void pointerfonk(int *pointer,int *pointerr);
int main()
{
    int *pointer1, *pointer2;
    int sayi1,sayi2;
    printf("Birinci sayiyi giriniz");
    scanf("%d",&sayi1);
    printf("Ikinci sayiyi giriniz");
    scanf("%d",&sayi2);
    pointer1=&sayi1;
    pointer2=&sayi2;
    pointerfonk(pointer1,pointer2);
    return 0;
}
void pointerfonk(int *pointer,int *pointerr)
{
    int toplam=0;
    toplam=(*pointer) + (*pointerr);
    printf("Iki sayinin toplami ==> %d",toplam);
}
