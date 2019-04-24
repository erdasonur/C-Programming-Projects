#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,u,k,alan,cevre;
    printf("1 dikdortgen 2 kare 3 ucgen ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("1 alan 2 cevre");
        scanf("%d",&b);
        switch(b)
        {
        case 1:
            printf("Uzun");
            scanf("%d",&u);
            printf("Kisa");
            scanf("%d",&k);
            alan=u*k;
            printf("%d",alan);
            break;
        case 2:
            printf("Uzun");
            scanf("%d",&u);
            printf("Kisa");
            scanf("%d",&k);
            cevre=(u+k)*2;
            printf("%d",cevre);
            break;
        default: printf("Ýstenilen secimi yapýnýz");
        }
    case 2:
        printf("1 alan 2 cevre");
        scanf("%d",&b);
        switch(b)
        {
        case 1:
            printf("Kenar");
            scanf("%d",&u);
            alan=u*u;
            printf("%d",alan);
            break;
        case 2:
            printf("Kenar");
            scanf("%d",&u);
            cevre=4*u;
            printf("%d",cevre);
            break;
            default: printf("Ýstenilen secimi yapýnýz");
            break;
        }
    case 3:
        printf("1 alan 2 cevre");
        scanf("%d",&b);
        switch(b)
        {
        case 1:
            printf("Uzun");
            scanf("%d",&u);
            printf("Kisa");
            scanf("%d",&k);
            alan=(u*k)/2;
            printf("%d",alan);
            break;
        case 2:
            printf("Uzun");
            scanf("%d",&u);
            printf("Kisa");
            scanf("%d",&k);
            cevre=sqrt(pow(u,2)+pow(k,2));
            printf("%d",cevre);
            break;
            default: printf("Ýstenilen secimi yapýnýz");
        break;
        }
		default: printf("Ýstenilen secimi yapýnýz");
    }
    return 0;
}
