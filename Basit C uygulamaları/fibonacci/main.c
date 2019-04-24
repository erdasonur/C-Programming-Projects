#include <stdio.h>
#include <stdlib.h>
int fonk(int say);
int main()
{
    int sayi,yazdir;
    printf("Lutfen 0'dan buyuk bir sayi giriniz \nGireceginiz sayinin fibonacci degeri verilecektir..\nsayi= ");
    scanf("%d",&sayi);
    yazdir=fonk(sayi);
    printf("%d'ninci sayinin fibonacci sayisi olarak karsiligi = %d 'dir",sayi,yazdir);
    return 0;
}
int fonk(int say)
{
    int i=0,j=1,toplam=0;
    if(say==1)
    {
        return toplam;
    }
    else if(say==2)
    {
        toplam=1;
        return toplam;
    }
    else{/*{
    while(say>2)
    {
        toplam=i+j;
        i=j;
        j=toplam;
        say--;
    }*/
    return fonk(say-1)+fonk(say-2);
    }
}
