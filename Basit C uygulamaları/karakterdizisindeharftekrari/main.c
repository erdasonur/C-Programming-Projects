#include <stdio.h>
#include <stdlib.h>
void fn(char *dizim,char *harf);
int main()
{
    char dizi[8];
    char a[2];
    printf("dizi gir");
    scanf("%s",dizi);
    printf("harf giriniz");
    scanf("%s",a);
    fn(dizi,a);
    return 0;
}
void fn(char *dizim,char *harf)
{
    int i,j=0;
    for(i=0;i<8;i++)
    {
        if(dizim[i]==harf[0] && dizim[i+1]==harf[1])
        {
        	j++;
        }
       // dizim++;
    }
    printf("\n%d tane",j);
}
