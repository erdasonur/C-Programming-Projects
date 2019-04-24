#include <stdio.h>
#include <stdlib.h>
int fonk(const char *ad1,const char *ad2);
int main()
{
    char *isim1="Emre";
    char *isim2="Emre";
    if(fonk(isim1,isim2)==0)
        printf("Same");
    else
        printf("Not same");
    return 0;
}
int fonk(const char *ad1,const char *ad2)
{
    while(*ad1!='\0' && *ad2!='\0')
    {
        if(*ad1==*ad2)
        {
            ad1++;
            ad2++;
        }
        else return 1;
    }
    return 0;
}
