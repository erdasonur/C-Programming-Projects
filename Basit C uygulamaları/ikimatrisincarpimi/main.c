#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a;
    printf("Matrisin boyutunu belirleyiniz");
    scanf("%d",&a);
    int dizi[a][a],dizim[a][a],dizi2[a][a];
    int i,j,k;
    srand(time(NULL));
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            dizi2[i][j]=0;
            printf("% d ",dizi2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            dizi[i][j]=1+rand()%5;
            printf("% d ",dizi[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            dizim[i][j]=1+rand()%5;
            printf("% d ",dizim[i][j]);
        }
        printf("\n");
    }
      printf("\n\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            for(k=0;k<a;k++)
            {
                dizi2[i][j]=dizi2[i][j]+(dizi[i][k]*dizim[k][j]);
            }
            printf(" %d ",dizi2[i][j]);
        }
        printf("\n");
    }
     printf("\n\n");

    return 0;
}
