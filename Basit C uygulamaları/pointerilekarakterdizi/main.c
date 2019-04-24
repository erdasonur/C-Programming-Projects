#include <stdio.h>
#include <stdlib.h>
void fn(char *dizim,int a);
int main()
{
    char dizi[7];
    printf("6 harfli bir kelime");
    scanf("%s",dizi);
    int sayi=3;
    int i=0;
    fn(dizi,sayi);
    return 0;
}
void fn(char *dizim,int a)
{
    int i=0;
    while(*dizim!='\0')
    {
        if(i<a)
        {
            i++;
            dizim++;
        }
        else{
        printf("%c",*dizim);
        dizim++;
        i++;
        }
    }
    printf("%d",sizeof(dizim)*6);
}
