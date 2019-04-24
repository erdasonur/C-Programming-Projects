#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *dosya;
    dosya=fopen("dosya.txt","r");
    int i=0;
    char *dizi;
    while(!feof(dosya))
    {
        *dizi=fgetc(dosya);
        printf("%c\n",*dizi);
        dizi++;
    }
    fclose(dosya);
    return 0;
}
