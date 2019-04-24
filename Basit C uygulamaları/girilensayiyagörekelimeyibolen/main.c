#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[10];
    int sayi,a=0;
    printf("Kelime gir");
    scanf("%s",dizi);
    printf("Sayi gir");
    scanf("%d",&sayi);
    while(dizi[a]!='\0')
    {
        if(sayi<=a)
        {
            printf("%c",dizi[a]);
        }
        a++;
    }
    return 0;
}
