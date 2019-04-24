#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j=0,say,k,boyut=7;
    int dizi[7]={0,8,4,6,7,2,5};
    for(i=0;i<7;i++)
    {
        k=i;
        if(i==0)
        {
            dizi[j]=dizi[i];
        }
        else{
        for(j=i-1;j>=0;j--)
        {
            if(dizi[i]<dizi[j])
            {
                say=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=say;
                i--;
            }
        }
        i=k;
        }

    }
    for(j=0;j<7;j++)
    {
    	printf("%d",dizi[j]);
	}
	if(boyut%2==0)
	{
		int medyan1,medyan2;
		medyan1=dizi[(boyut/2)-1];
		medyan2=dizi[(boyut/2)];
		printf("Medyanlar %d ve %d dir",medyan1,medyan2);
	}
	else
	{
		int medyan;
		medyan=dizi[(boyut+1)/2-1];
		printf("Medyaniniz %d",medyan);
	}
    return 0;
}
