#include <stdio.h>
#include <stdlib.h>
void fonk(int *pointer);
int main()
{
    int dizi[6]={4,1,14,0,5,7};
    int *ptr;
    int i;
    ptr=dizi;
    for(i=0;i<6;i++)
    printf("%d \t",dizi[i]);
    fonk(dizi);
    printf("\n");
    for(i=0;i<6;i++)
    printf("%d \t",dizi[i]);

    return 0;
}
void fonk(int *pointer){
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(*(pointer+j)>*(pointer+j+1))
            {
                int temp=*(pointer+j);
                *(pointer+j)=*(pointer+j+1);
                *(pointer+j+1)=temp;
            }
        }
    }
}
