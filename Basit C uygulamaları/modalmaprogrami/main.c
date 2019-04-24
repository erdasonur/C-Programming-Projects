#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dizi[10],dizim[10]={0};
	int i,sayi,mod,modsayisi;
	for(i=0;i<10;i++)
	{
		printf("Sayi giriniz");
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<10;i++)
	{
		sayi=dizi[i];
		dizim[sayi-1]++;
	}
	mod=dizim[0];
	for(i=1;i<10;i++)
	{
		if(mod<dizim[i])
		{
			mod=dizim[i];
			modsayisi=i+1;
		}
	}
	printf("Mod sayisi %d sayisidir",modsayisi);
    return 0;
}
