#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *dosya; //Tan�mlamara yap�ld�
    FILE *newdosya;
    int i=0;
    char dizi[5000]= { };
    dosya = fopen ("main.c", "r");//Dosya a�ma i�lemi ve main.c yi okuma i�lemi
    if (dosya == NULL)
    {
        printf("Dosya a�ma hatasi!");
    }
    else
    {
        while (!feof(dosya))//Dosya sonuna gelene kadar d�nd�rmesini sa�layan fonksiyonu kullan�ld�
        {
            dizi[i]=fgetc(dosya);//main.c yi harf harf okuyarak diziye atma i�lemi
            i++;
        }

        fclose(dosya);//dosya kapama i�lemi
        newdosya=fopen("odev.txt", "a");//yaz�lacak dosya i�in yeni bi dosya a�ma i�lemi
        int j;
        for(i=0; i<strlen(dizi); i++)//dizinin boyutuna kadar d�nen d�ng�
        {
            if(dizi[i]=='/' && dizi[i+1]=='/')
            {
                i=i+2;
                j=i;//sat�rdan sonraki karakterleri alma i�lemi
                while(dizi[j]!='\n')//sat�r sonuna gelene kadar olan ko�ul
                {
                    if ((newdosya) == NULL)
                    {
                        printf("Dosya a�ma hatasi!");
                    }
                    else
                    {
                        fprintf(newdosya,"%c",dizi[j]);//dosyaya yazma i�lemi
                        printf("%c",dizi[j]);
                        j++;
                    }
                }
                fputc('\n',newdosya);//dosyada bir alt sat�ra ge�me i�lemi
                printf("\n");

            }

        }
            fclose(newdosya);//dosyay� kapama i�lemi
    }
}
// TODO (erdasonur#1#): zdgvb ...
//wazdxfgh
//sdfgvbh
//sdcgh
//zsdfb




