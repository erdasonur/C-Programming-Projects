#include <stdio.h>
#include <stdlib.h>

struct
{
    int d1no;
    float d1ort;
    char dad[20],dsad[20];
} ogr[4];
int main()
{
    FILE *dosya1,*dosya2;
    dosya1=fopen("dosya1.txt","r");
    dosya2=fopen("dosya2.txt","r");
    int girilen,i=0,j=0;
    printf("Secim yapin 1-2-3");
    scanf("%d",&girilen);
    int d2no,d2not;
    switch(girilen)
    {
    case 1:
        while(!feof(dosya1))
        {
            fscanf(dosya1,"%d %s %s %f",&ogr[i].d1no,ogr[i].dad,ogr[i].dsad,&ogr[i].d1ort);
          /*  while(!feof(dosya2))
            {
                fscanf(dosya2,"%d %d",&d2no,&d2not);
                if(ogr[j].d1no==d2no)
                {
                    printf("%d\t %s\t %s\t %.2f\t %d \n",ogr[j].d1no,ogr[j].dad,ogr[j].dsad,ogr[j].d1ort,d2not);
                }
                j++;
            }*/
            i++;
           // rewind(dosya2);

        }
        for(j=0;j<4;j++)
            printf("%d\t %s\t %s\t %.2f \n",ogr[j].d1no,ogr[j].dad,ogr[j].dsad,ogr[j].d1ort);
        break;
    case 2:
        break;

    }

    fclose(dosya1);
    fclose(dosya2);

    return 0;
}
