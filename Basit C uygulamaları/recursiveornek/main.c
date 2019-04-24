#include <stdio.h>
#include <stdlib.h>
int f(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*f(n-1);
}
int main()
{
    int sayi,yazdir;
    printf("Sayi gir");
    scanf("%d",&sayi);
    yazdir=f(sayi);
    printf("%d",yazdir);
    return 0;
}
