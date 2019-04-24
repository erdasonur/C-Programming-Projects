#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100];
    FILE *dosya;
    int i,j;
    dosya=fopen("main.c","r");
    while(!feof(dosya))
    {
        fgets(dizi,100,dosya);
        for(i=0;i<100;i++)
        {
            if(dizi[i]=='d')
            {
                for(j=i;j<strlen(dizi);j++)
                printf("%c",dizi[j]);
                printf("\n");
            }
        }
    }
    fclose(dosya);
    return 0;
}
