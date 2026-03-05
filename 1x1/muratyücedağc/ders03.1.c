#include <stdio.h>
#include <stdlib.h>

int main() {
	char ad [20],soyad[20], yas [2], sehirsev[10];
	
	printf ("adinizi giriniz:");
	scanf ("%s", ad);
	
	printf ("soyadinizi giriniz: ");
	scanf ("%s", soyad);
	 
	printf ("yasinizi giriniz:");
	scanf("%s",yas);
	
	printf("sehrinizi seviyor musunuz: ");
	scanf ("%s",sehirsev);
	
	printf ("adiniz ve soyadiniz: %s  %s \n",ad,soyad);
	printf("yasiniz:%s",yas);
	printf ("sehrinizi sevme durumunuz: %s",sehirsev);
	
	return 0;
}
