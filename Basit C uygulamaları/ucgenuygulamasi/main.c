#include <stdio.h>
#include <math.h>

float param(float kk,float uk);
int main()
{
    float kisakenar,uzunkenar,hipotenus;
    printf("Kisa kenari giriniz");
    scanf("%f",&kisakenar);
    printf("Uzun kenari giriniz");
    scanf("%f",&uzunkenar);
    hipotenus=param(kisakenar,uzunkenar);
    printf("%f",hipotenus);
    return 0;
}
float param(float kk,float uk)
{
    float sonuc;
    sonuc=sqrt(pow(kk,2)+pow(uk,2));
    return sonuc;
}
