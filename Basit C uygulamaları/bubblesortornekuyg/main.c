#include <stdio.h>
#include <stdlib.h>
void fonk(int *array,int boyut);
int main()
{
    int boyut=9,i;
    int dizi[]={4,5,3,2,7,0,9,4,6};
    fonk(dizi,boyut);
     for(i=0;i<boyut-1;i++)
   {
       printf("%d",dizi[i]);
   }
    return 0;
}
void fonk(int *array,int boyut)
{
   int i,j;
   for(i=0;i<boyut-1;i++)
   {
       for(j=0;j<boyut-1;j++)
       {
           if(*(array+j)>*(array+j+1))
           {
               int temp=*(array+j);
               *(array+j)=*(array+j+1);
               *(array+j+1)=temp;
           }
       }
   }
}
