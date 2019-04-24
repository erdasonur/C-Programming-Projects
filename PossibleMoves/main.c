#include <stdio.h>
#include <stdlib.h>
#define BOYUT 8 //Dizinin boyutuna define ile tüm program boyunca sabit olarak 8 deðerini verdik
void atinyeri(char dizi[BOYUT][BOYUT],int i,int j);//Fonksiyonlarýmýzý tanýmladýk
void athareketi(char dizi[BOYUT][BOYUT],int i, int j);

int main()
{
	char dizi1[BOYUT][BOYUT];//Dizi tanýmlama iþlemi
    int str,stn;
    printf("8'e 8 lik satranc tahtasinda at yerlestirilecektir \n\n");//Gerekli açýklamalar yapýldý
    printf("Oncelikle atin konumu A ile tahtayi ise + ile gosterecegiz \n\n");
    printf("Sonra - ile gosterilen 8'e 8 lik satranc tahtasinda belirlenen \n\natin konumunu tekrar A ve gidecegi yerleri T olarak degistirecegiz\n");
    printf("\nSatir ve sutun araliklariniz 1 ile 8 arasinda olmalidir\n\n");
    printf("Atin konulacagi satiri giriniz: ");//Atýn konumunu belirliyoruz
    scanf("%d",&str);
    printf("\nAtin konulacagi sutunu giriniz: ");
    scanf("%d",&stn);
    atinyeri(dizi1,str,stn);//Ilk fonksiyonumuza parametleri gönderip fonksiyonu çaðýrýyoruz
    return 0;
}
void atinyeri(char dizi[BOYUT][BOYUT],int i,int j)//Bu fonksiyonda sadece atýn konumunu gösteriyoruz ve içine diðer fonksiyonu çaðýrýyoruz
{
    int satir,sutun;
    if((i<=0 || j>BOYUT) || (j<=0 || i>BOYUT))//Satýr ve sütunun deðer aralýðý 0 ile 8 arasýnda deðilse mesajý veriyor 0 ile 8 arasýnda ise iþleme devam ediyor
    {
        printf("\n\nSatir veya sutun dizi araligi disinda girilmistir\n\n");
    }
    else
    {
        printf("\nAtin konumu : \n\n");
    for(satir=0;satir<BOYUT;satir++)//Ýç içe forla dizimi oluþturuyoruz
    {
        for(sutun=0;sutun<BOYUT;sutun++)
        {
            if(satir==i-1 && sutun==j-1)//Atýn konumunu buradaki þarta baðlayarak A ile deðiþtiriyoruz
            {
                dizi[satir][sutun]='A';
            }
            else//Eðer yukarýdaki þart saðlanmazsa + olarak diziyi dolduruyoruz
            {
                dizi[satir][sutun]='+';
            }
            printf("%c ",dizi[satir][sutun]);
        }
        printf("\n");//Satýr atlamak için kullanýyoruz
    }
    athareketi(dizi,i,j);//En son diðer fonksiyonu çaðýrýyoruz
}
}
void athareketi(char dizi[BOYUT][BOYUT],int i,int j)
{
    printf("\nAtin gidecegi yerler : \n\n");
    int satir,sutun;
    int ksatir,ksutun;
    
    for(satir=0;satir<BOYUT;satir++)//Yukardaki iþlemlerden tek fark atýn gideceði yerleri T ile deðiþtirmektir
    {                               //Ýf koþullarý ile gideceði yerleri de belirliyoruz.
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
