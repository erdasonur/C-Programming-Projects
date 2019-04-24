#include <stdio.h>
#include <stdlib.h>
int fonk(char dizi[10],char dizi2[10])
{
    int a=0;
    while(dizi[a]!='\0' || dizi2[a]!='\0')
        {
            if(dizi[a]==dizi2[a])
            {
                a++;
            }
            else return 1;
        }
        return 0;
}
int main()
{
    char dizi[10],dizi2[10];
    int yazdir;
    printf("Kelime giriniz max 10");
        scanf("%s",dizi);
        printf("2. kelimeyi giriniz max 10");
        scanf("%s",dizi2);
        yazdir=fonk(dizi,dizi2);
        if(yazdir==0)
        printf("Ayni ");
        else printf("degil");
    return 0;
}
