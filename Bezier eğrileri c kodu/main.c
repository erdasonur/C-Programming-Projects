#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,pcounter;
    double t=0,bin;
    double s1=1,s2=1,s3=1;
    int i,j,k,l,m,o,px[n],py[n];
    double Xsonuc=0,Ysonuc=0,us=1,us2=1;
    printf("n degeriniz giriniz: ");
    scanf("%d",&n);
    for(pcounter=0;pcounter<=n;pcounter++){
    	printf("Px(%d)= ",pcounter);
    	scanf("%d",&px[pcounter]);
    	printf("Py(%d)= ",pcounter);
    	scanf("%d",&py[pcounter]);
	}
    for(j=1;j<=n;j++){
            s1=s1*j;
    	}
    while(t<=1){
        for(i=0;i<=n;i++){
            for(k=1;k<=n-i;k++){
                s2=s2*k;
            }

            for(l=1;l<=i;l++){
                s3=s3*l;
            }
            bin=s1/(s2*s3);
            for(m=0;m<n-i;m++){
            	us=us*(1-t);
			}
			for(o=0;o<i;o++){
            	us2=us2*t;
			}
			Xsonuc+=bin*us*us2*px[i];
            Ysonuc+=bin*us*us2*py[i];
            s2=1;
        	s3=1;
        	us=1;
        	us2=1;
        }
        printf("t:%f icin Xsonuc: %f\n",t,Xsonuc);
        printf("t:%f icin Ysonuc: %f\n",t,Ysonuc);
        t=t+0.1;
        Xsonuc=0,Ysonuc=0;
    }
    return 0;
}
