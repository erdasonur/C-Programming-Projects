#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fonk(char *array,char *emptyarray);
int main()
{
    int i,sayi;
    char *dizi="HelloWorld!";
    char dizi2[100]={ };
    printf("kacinci indisten sonra");
    scanf("%d",&sayi);
    fonk(dizi,dizi2);
    for(i=0;i<strlen(dizi2);i++)
    {
        printf("%c\n",dizi2[i]);
    }
    printf("%d",fon(dizi));
    return 0;
}
void fonk(char *array,char *emptyarray)
{
    int a=0;
    while(*array!='\0')
    {
        if(a<4)
        {
            array++;
            a++;
        }
        else{
        *emptyarray=*array;
        array++;
        emptyarray++;
        }
    }
}
int fon(char *array)
{int a=0;
    while(*array!='\0')
    {
        array++;
        a++;
    }
    return a;
}
