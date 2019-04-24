#include <stdio.h>
#include <stdlib.h>

int fonksiyon(int s);
int main()
{
    int sayi,yazdir;
    printf("Sayi giriniz");
    scanf("%d",&sayi);
    yazdir=fonksiyon(sayi);
    if(yazdir==1) printf("Asal");
    else printf("Degil");
    return 0;
}
int fonksiyon(int s)
{
    int i;
    for(i=s-1;i>1;i--)
    {
        if(s%i==0)
        {
            return 0;
        }
    }
        return 1;

}
//en buyuk ortak boleni bulma
