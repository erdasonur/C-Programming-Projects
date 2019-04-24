#include <stdio.h>
#include <stdlib.h>
#define BOYUT 8 //Dizinin boyutuna define ile t�m program boyunca sabit olarak 8 de�erini verdik
void atinyeri(char dizi[BOYUT][BOYUT],int i,int j);//Fonksiyonlar�m�z� tan�mlad�k
void athareketi(char dizi[BOYUT][BOYUT],int i, int j);

int main()
{
	char dizi1[BOYUT][BOYUT];//Dizi tan�mlama i�lemi
    int str,stn;
    printf("8'e 8 lik satranc tahtasinda at yerlestirilecektir \n\n");//Gerekli a��klamalar yap�ld�
    printf("Oncelikle atin konumu A ile tahtayi ise + ile gosterecegiz \n\n");
    printf("Sonra - ile gosterilen 8'e 8 lik satranc tahtasinda belirlenen \n\natin konumunu tekrar A ve gidecegi yerleri T olarak degistirecegiz\n");
    printf("\nSatir ve sutun araliklariniz 1 ile 8 arasinda olmalidir\n\n");
    printf("Atin konulacagi satiri giriniz: ");//At�n konumunu belirliyoruz
    scanf("%d",&str);
    printf("\nAtin konulacagi sutunu giriniz: ");
    scanf("%d",&stn);
    atinyeri(dizi1,str,stn);//Ilk fonksiyonumuza parametleri g�nderip fonksiyonu �a��r�yoruz
    return 0;
}
void atinyeri(char dizi[BOYUT][BOYUT],int i,int j)//Bu fonksiyonda sadece at�n konumunu g�steriyoruz ve i�ine di�er fonksiyonu �a��r�yoruz
{
    int satir,sutun;
    if((i<=0 || j>BOYUT) || (j<=0 || i>BOYUT))//Sat�r ve s�tunun de�er aral��� 0 ile 8 aras�nda de�ilse mesaj� veriyor 0 ile 8 aras�nda ise i�leme devam ediyor
    {
        printf("\n\nSatir veya sutun dizi araligi disinda girilmistir\n\n");
    }
    else
    {
        printf("\nAtin konumu : \n\n");
    for(satir=0;satir<BOYUT;satir++)//�� i�e forla dizimi olu�turuyoruz
    {
        for(sutun=0;sutun<BOYUT;sutun++)
        {
            if(satir==i-1 && sutun==j-1)//At�n konumunu buradaki �arta ba�layarak A ile de�i�tiriyoruz
            {
                dizi[satir][sutun]='A';
            }
            else//E�er yukar�daki �art sa�lanmazsa + olarak diziyi dolduruyoruz
            {
                dizi[satir][sutun]='+';
            }
            printf("%c ",dizi[satir][sutun]);
        }
        printf("\n");//Sat�r atlamak i�in kullan�yoruz
    }
    athareketi(dizi,i,j);//En son di�er fonksiyonu �a��r�yoruz
}
}
void athareketi(char dizi[BOYUT][BOYUT],int i,int j)
{
    printf("\nAtin gidecegi yerler : \n\n");
    int satir,sutun;
    int ksatir,ksutun;
    
    for(satir=0;satir<BOYUT;satir++)//Yukardaki i�lemlerden tek fark at�n gidece�i yerleri T ile de�i�tirmektir
    {                               //�f ko�ullar� ile gidece�i yerleri de belirliyoruz.
        for(sutun=0;sutun<BOYUT;sutun++)
        {
        	ksatir=i-2;
 		    ksutun=j-2;
        	if(ksatir==i || ksutun==j)
        	{
        		 if((satir==i+1 && sutun==j) || (satir==i+1 && sutun==j-2) ||(satir==i-3 && sutun==j) || (satir==i-3 && sutun==j-2))
                {
                    dizi[satir][sutun]='Y';
                }
            else if((satir==i && sutun==j+1) || (satir==i && sutun==j-3) ||(satir==i-2 && sutun==j+1) || (satir==i-2 && sutun==j-3))
                {
                    dizi[satir][sutun]='Y';
                }
                printf("%d",dizi[i][j]);
			}
			else{
            if(satir==i-1 && sutun==j-1)
                {
                    dizi[satir][sutun]='A';
                }
            else if((satir==i+1 && sutun==j) || (satir==i+1 && sutun==j-2) ||(satir==i-3 && sutun==j) || (satir==i-3 && sutun==j-2))
                {
                    dizi[satir][sutun]='T';
                }
            else if((satir==i && sutun==j+1) || (satir==i && sutun==j-3) ||(satir==i-2 && sutun==j+1) || (satir==i-2 && sutun==j-3))
                {
                    dizi[satir][sutun]='T';
                }
            else
                {
                    dizi[satir][sutun]='-';
                }
                printf("%c ",dizi[satir][sutun]);

        }
        
    }
    printf("\n");
    }
}
