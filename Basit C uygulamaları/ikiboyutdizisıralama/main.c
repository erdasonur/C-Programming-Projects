#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[2][2]={7,1,8,3,4,9,2,0,6};
    int i,j,sayi,k,say;
    for(k=0;k<=2;k++)
    {
         for(i=0;i<3;i++)
    {
        for(j=i+1;j<=3;j++)
        {

            if(dizi[k][i]>dizi[k][j])
            {
                say=j;
                sayi=dizi[k][say];
                dizi[k][say]=dizi[k][i];
                dizi[k][i]=sayi;
            }
        }
    }
    }
int a,b;
    for(a=0;a<=2;a++)
    {
        for(b=0;b<=2;b++)
        {
            printf("%d",dizi[a][b]);
        }
printf("\n");
    }
    return 0;
}
