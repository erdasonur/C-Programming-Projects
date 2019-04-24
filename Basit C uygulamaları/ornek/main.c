#include <stdio.h>
#include <stdlib.h>
int main()
{
    char dizi[10];
    int sayi,a=0,b=0;
    printf("Kelime gir");
    scanf("%s",dizi);
    printf("sayi gir");
    scanf("%d",&sayi);
    char dizim[10];
    while(dizi[a]!='\0')
    {
        if(sayi==a)
        {
            dizim[b]=dizi[a];
            b++;
            sayi++;
        }
        a++;
    }
    printf("%s",dizim);
    return 0;
}
