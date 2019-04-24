#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[3][2]={4,5,7,1,3,9,8,0};
    int dizim[6];
    int i=0,j=0,k=0;
    while(i<=4)
    {
        if(i-j==2)
        {
            i--;
            j=i;
        }
        dizim[k]=dizi[j][i];
        i++;
        k++;

    }
    for(i=0;i<6;i++)
    {
        printf("%d",dizim[i]);
    }
    return 0;
}
