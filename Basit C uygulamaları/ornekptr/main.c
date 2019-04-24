#include <stdio.h>
#include <stdlib.h>

int ptrfnk(int *point1);
int main()
{
    int i;
    int *ptr1[5]={3,5,6,2,13};
    int *yaz;
    yaz=ptrfnk(ptr1);
    for(i=0;i<5;i++)
    {
        printf(" %d ",*yaz);
        yaz++;
    }

    return 0;
}
int ptrfnk(int *point1)
{
    int i,j,temp;
    for(i=1;i<5;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(point1[i]<point1[j])
            {
                temp=point1[i];
                point1[i]=point1[j];
                point1[j]=temp;
                i--;
            }
        }
    }
    return point1;
}
