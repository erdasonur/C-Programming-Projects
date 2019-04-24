#include <stdio.h>
#include <stdlib.h>
void fonk(char *array);
int main()
{
    char *dizi="arabayok";
    fonk(dizi);
    return 0;
}
void fonk(char *array)
{
    int a=0,boyut=0;
    int b=3;
    printf("%p\n",array);
    printf("%p\n",&array[0]);
    while(array[a]!='\0')
    {
        a++;
        boyut++;
    }
    a=0;

    printf("%p",array);
    printf("%d",boyut);
    while(*array!='\0')
    {
        if(a<boyut-b)
        {
            printf("%c\n",*array);
            a++;
        }
        else
        {
            break;
        }
        array++;
    }
}
//2 string fonksiyona gönder int return var const char pointer 2 tane
