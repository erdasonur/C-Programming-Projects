#include <stdio.h>
#include <stdlib.h>
void f(int *ptr , const int a,const int b);
int main()
{
    int dizi[5][5];
    int index1,index2;
    f(&dizi[0][0],5,5);
    printf("guncellenmis dizi");
    for(index1=0;index1<5;index1++)
    {
        for(index2=0;index2<5;index2++)
        {
            printf("%d\t",dizi[index1][index2]);
        }
        printf("\n");
    }
    return 0;
}
void f(int *ptr , const int a,const int b)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            *ptr=i*j;
            ++ptr;
        }
    }
}
