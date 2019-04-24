#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dno,no,d2no,maas,a=0;
    int i;
    int bayrak,bayrak2;
    char disim[20],dsisim[20],isim[20],sisim[20];
    FILE *dosya1,*dosya2;
    dosya1=fopen("oku.txt","r");
    dosya2=fopen("oku2.txt","r");
    printf("Gir");scanf("%d",&no);
    printf("Gir");scanf("%s",&isim);
    printf("Gir");scanf("%s",&sisim);
    if(dosya1==NULL || dosya2==NULL){
        printf("Dosya acma islemi hatali");
    }
    else{
        while(!feof(dosya1))
        {
            fscanf(dosya1,"%d %s %s",&dno,&disim,&dsisim);
            for(i=0;disim[i]!='\0' && isim[i]!='\0';i++)
            {
                if(disim[i]==isim[i])
                {
                    bayrak=1;
                }
                else bayrak=0;
            }
            for(i=0;dsisim[i]!='\0' && sisim[i]!='\0';i++)
            {
                if(dsisim[i]==sisim[i])
                {
                    bayrak2=1;
                }
                else bayrak2=0;
            }
            if(bayrak2==1&&bayrak==1 && dno==no)
            {
                while(!feof(dosya2))
                {
                    fscanf(dosya2,"%d %d",&d2no,&maas);
                    if(dno==d2no)
                    {
                        printf("%d nolu sayin %s %s maasiniz %d'dir ",dno,disim,dsisim,maas);
                        a=1;
                    }
                }
            }
        }
        fclose(dosya1);
        fclose(dosya2);
        if(a==0)
            printf("Yanlis isim , soyisim ya da numara");
    }
    return 0;
}
