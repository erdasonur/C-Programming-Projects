#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fonk(char *ad,char *isim){
    int i;
    for(i=0;i<strlen(isim);i++)
    {
        if(ad[i]==isim[i])
        {
        }
        else return 1;
    }
    return 0;
}
int main()
{
    FILE *dosya,*ndosya;
    char isim[10],soyisim[10];
    char *ad="Yusuf";
    int no,not;
    dosya=fopen("dosya.txt","r");
    while(!feof(dosya))
    {
        fscanf(dosya,"%d %s %s %d",&no,isim,soyisim,&not);
        int cagri=fonk(ad,isim);
        if(cagri==0)
        {
            ndosya=fopen("dosya.txt","a");
            fprintf(ndosya,"%d %s %s %d",no,isim,soyisim,not);
        }
    }
    fclose(dosya);
    fclose(ndosya);
    return 0;
}
