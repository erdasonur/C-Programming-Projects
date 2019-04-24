#include <stdio.h>
#include <stdlib.h>

int f(int x,int y);
int main()
{
    int sayi1,sayi2,yaz;
    printf("Ussu alinacak sayiyi gir");
    scanf("%d",&sayi1);
    printf("Ussunu gir");
    scanf("%d",&sayi2);
    yaz=f(sayi1,sayi2);
    printf("%d",yaz);
    return 0;
}
int f(int x,int y)
{
    if(y==1) return x;
    else
    return x*f(x,y-1);
}
