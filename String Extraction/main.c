#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *dosya; //Tanýmlamara yapýldý
    FILE *newdosya;
    int i=0;
    char dizi[5000]= { };
    dosya = fopen ("main.c", "r");//Dosya açma iþlemi ve main.c yi okuma iþlemi
    if (dosya == NULL)
    {
        printf("Dosya açma hatasi!");
    }
    else
    {
        while (!feof(dosya))//Dosya sonuna gelene kadar döndürmesini saðlayan fonksiyonu kullanýldý
        {
            dizi[i]=fgetc(dosya);//main.c yi harf harf okuyarak diziye atma iþlemi
            i++;
        }

        fclose(dosya);//dosya kapama iþlemi
        newdosya=fopen("odev.txt", "a");//yazýlacak dosya için yeni bi dosya açma iþlemi
        int j;
        for(i=0; i<strlen(dizi); i++)//dizinin boyutuna kadar dönen döngü
        {
            if(dizi[i]=='/' && dizi[i+1]=='/')
            {
                i=i+2;
                j=i;//satýrdan sonraki karakterleri alma iþlemi
                while(dizi[j]!='\n')//satýr sonuna gelene kadar olan koþul
                {
                    if ((newdosya) == NULL)
                    {
                        printf("Dosya açma hatasi!");
                    }
                    else
                    {
                        fprintf(newdosya,"%c",dizi[j]);//dosyaya yazma iþlemi
                        printf("%c",dizi[j]);
                        j++;
                    }
                }
                fputc('\n',newdosya);//dosyada bir alt satýra geçme iþlemi
                printf("\n");

            }

        }
            fclose(newdosya);//dosyayý kapama iþlemi
    }
}
// TODO (erdasonur#1#): zdgvb ...
//wazdxfgh
//sdfgvbh
//sdcgh
//zsdfb




