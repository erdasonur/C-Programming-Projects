#include <stdio.h>
#include <math.h>

int main()
{
    float sayi,virgul;
	int tamsayi,j=1,i;
	printf("Sayi giriniz"); scanf("%f",&sayi);
	tamsayi=sayi;
	virgul=sayi-tamsayi;
	//printf("%f %f %d\n",sayi,virgul,tamsayi);
	for(;virgul!=0;)
	{
		virgul=virgul*10;
		j=virgul;
		virgul=virgul-j;
		if(j==0)
		{
			break;
		}
		else{
		printf("%d\n",j);
		}
	}
    return 0;
}
