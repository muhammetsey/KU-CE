#include <stdio.h>
#include <stdlib.h>


int main() {
	//ygs puan hesaplama
	//türkçe 1.999
	//matematik 3.998
	//sosyal 1
	//fen 2.999
	//taban 100.160
	float matematik,turkce,fen,sosyal,taban,toplam;
	taban= 100.160;
	
	printf("matematik netinizi giriniz: ");
	scanf("%f",&matematik);
	
	printf("turkce netinizi giriniz: ");
	scanf("%f",&turkce);
	
	printf("sosyal netinizi giriniz: ");
	scanf("%f",&sosyal);
	
	printf("fen netinizi giriniz: ");
	scanf("%f",&fen);
	
    toplam = 1.999 * turkce + 3.998 * matematik + 1 * sosyal + 2.999 * fen;
	printf ("ygs 1 puan tütünde puanýnýz: %f",toplam);
	
	
	return 0;
}
