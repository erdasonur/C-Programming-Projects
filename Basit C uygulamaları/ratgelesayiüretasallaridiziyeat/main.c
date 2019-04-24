#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10]={0};
    int i,sayi,a,c=0;
    for(i=0;i<10;i++)
    {
        printf("Sayi gir");
        scanf("%d",&sayi);
        a=sayi-1;
    while(a>1)
    {
        if(sayi%a==0)
        {
            break;
        }
        else{
            a--;
        }
    }
    if(a==1)
    {
        dizi[c]=sayi;
        c++;
    }
    }
    for(i=0;i<10;i++){
            if(dizi[i]==0)
            break;
    else
    printf("%d\n",dizi[i]);
    }
    return 0;
}
