// Onur Erdaş 330104
// Assignment 2: Finding the root using bisection method
#include <stdio.h>
#include <math.h>

		float bisectionmetodu(float kupkat, float karekat,float xkat,float sabitkat,float enbuyuk, float enkucuk,float hatapay);
		//Burada fonksiyonumuz globalde tanimliyoruz
int main() {
		printf("---Bisection Metodu ile Kok Bulma---\n\n");//Bisection metodu belirli aralikta denklemin kökünü bulma işlemidir.
		printf("Amacimiz belirlenen katsayilarla \n3.dereceden bir denklemin girilen aralikta\n");
		printf("girilen hata payi ile \nbisection methodunu kullanarak\n");
		printf("koku yaklasik olarak hesaplamaktir.\n");
		printf("Haydi baslayalim\n");
		float kupk,hatapayi,karek,xk,sabitk,ek=0,eb=0,aradeger,sonuc=0,fonk,fonks;//Burada kullanacagımız degiskenlerimizi tanımladık
		printf("\nLutfen buyuk olan deger araligini giriniz: ");//Klavyeden en buyuk ve en kucuk deger aralıgını scanf fonksiyonu ile aliyoruz
		scanf("%f",&eb);
		printf("Lutfen kucuk olan deger araligini giriniz: ");
		scanf("%f",&ek);
		if(ek>=eb)//Eger burada aralıklar ters ya da esit girilmis ise program mesajini verip sona erer
		{
			printf("Deger araliklari esit ya da yanlis girilmistir.\nLutfen programi yeniden baslatip deger araliklarini dogru sekilde giriniz.");
		}
		else//Eger araliklar dogru girilmis ise kaldigi yerden devam eder
		{
			printf("X'in kubunun katsayisini giriniz: ");//Burada katsayilari ve hata payini klavyeden scanf fonksiyonu ile cekiyoruz.
			scanf("%f",&kupk);
			printf("X'in karesinin katsayisini giriniz: ");
			scanf("%f",&karek);
			printf("X'in katsayisini giriniz: ");
			scanf("%f",&xk);
			printf("Sabit sayiyi giriniz: ");
			scanf("%f",&sabitk);
			fonk=kupk*(pow(ek,3))+karek*(pow(ek,2))+xk*ek+sabitk;//Burada en büyük ve en kucuk deger araligimizi fonksiyona koyulmustur
			fonks=kupk*(pow(eb,3))+karek*(pow(eb,2))+xk*eb+sabitk;
		if(fonk>0 || fonks<0)//Burada ise kök aralığı kontrolü yapılmaktadır.Eger istenilen kok aralikta degilse program mesajini verip sona erecektir.
		{
			printf("Girilen aralikta kok bulunamamistir..");
		}
		else//Degilse kaldigi yerden devam ediyor.
        {
			printf("Hata payini giriniz: ");//Eger girilen deger araliginda bir kok var ise hata payini klavyeden alir.
	   		scanf("%f",&hatapayi);
	    if(hatapayi==0)//Bisectionda fonksiyon 0'a esit olmadigindan hatapayinida 0 alamiyoruz
        {
            printf("Hata payi 0 girilmemelidir");
        }
        else
        {
        	aradeger=bisectionmetodu(kupk,karek,xk,sabitk,eb,ek,hatapayi);//Burada fonksiyonumuzu cagiriyoruz
    		printf("Kokunuz yaklasik olarak : %.3f \n",aradeger);
        }
        }
   	}
			return 0;
	}
        float bisectionmetodu(float kupkat, float karekat,float xkat,float sabitkat,float enbuyuk, float enkucuk,float hatapay)
		{
        float yenifark,aradeger2,fonksiyon;//Fonksiyon icindeki degiskenleri tanimliyoruz
        aradeger2=(enbuyuk+enkucuk)/2;
        yenifark=enbuyuk-enkucuk;//Burada en büyük deger ile en kücük deger arasindaki farki aliyoruz eger bu degeri almazsak program yenifarka bir sayi verir
        	while(yenifark>hatapay)//Burada girmis oldugumuz hata payina kadar kok araligini kisaltacaktir
        		{//Asagidaki fonksiyonda, aradegeri fonksiyona koyup aradegeri en kucuge yada en buyuge atayarak kok araligini kücültüyoruz
				fonksiyon=kupkat*(pow(aradeger2,3))+karekat*(pow(aradeger2,2))+xkat*aradeger2+sabitkat;
			if(fonksiyon<0)//Eger bu fonksiyon 0'dan kucukse bu aradeger en kucuk degiskenine atanir ve yenifarkimiz en kucuk degiseceginden degisir
				{
				enkucuk=aradeger2;
				yenifark=enbuyuk-enkucuk;
				}
			else if(fonksiyon>0)//Eger bu fonksiyon 0'dan buyukse bu aradeger en kucuk degiskenine atanir ve yenifarkimiz en buyuk degiseceginden degisir
			{
				enbuyuk=aradeger2;
				yenifark=enbuyuk-enkucuk;
			}
				aradeger2=(enkucuk+enbuyuk)/2;//Ara degerimiz en kucuk ve en buyuk surekli degiseceginden her dongude yeni degerini alir
	   		}
	    		return aradeger2;
	}
