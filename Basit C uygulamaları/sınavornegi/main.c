#include <stdio.h>
#include <time.h>

int main()
{
    int i,j;
    int dizi[3][3];
    int dizi2[3][3];
    srand(time(NULL));
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            dizi[i][j]=1+rand()%10;
            printf("%d\t",dizi[i][j]);
        }
        printf("\n\n");
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            dizi2[i][j]=dizi[j][i];
        }
    }
    printf("\n\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",dizi2[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
