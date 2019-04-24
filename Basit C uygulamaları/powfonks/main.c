#include <stdio.h>
#include <stdlib.h>

double powfonksiyon(double s1, double s2);
int main()
{
    double sayi1,sayi2,sonuc;
    printf("1. sayiyi giriniz");
    scanf("%lf",&sayi1);
    printf("2. sayiyi giriniz");
    scanf("%lf",&sayi2);
    sonuc=powfonksiyon(sayi1,sayi2);
    printf("%.2lf",sonuc);
    return 0;
}
double powfonksiyon(double s1, double s2)
{
    double fonksiyon=1;
    while(s2!=0)
    {
        fonksiyon=fonksiyon*s1;
        s2--;
    }
    return fonksiyon;
}
