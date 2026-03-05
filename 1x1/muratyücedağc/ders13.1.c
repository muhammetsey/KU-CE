#include <stdio.h>
#include <stdlib.h>

/* girilen 3 basamaklý sayiyi basamaklarýna ayýran program  */

int main() {
    int sayi,yuzler,onlar,birler,sybk;
	printf("lutfen uc basamakli bir sayi giriniz:");
	scanf("%d",&sayi);
	birler=sayi%10;
	yuzler=sayi/100;
	sybk=sayi%100; //bu sybk deðiþkeni sayýnýn yüzler basamaðýnýn 100 ile bölümünden kalaný belirtmek için yazýlmýþtýr.
	onlar=sybk/10;
	
	
	if (sayi%10==birler)
	{
		printf("sayinizin birler basamagi %d dýr \n ",birler);
	}
	if (sayi%100==sybk)
	{
    	printf("sayinizin onlar basamagi %d dýr \n",onlar);
	}
	printf("sayinizin yuzler basamagi %d dýr \n",yuzler);
	
	
	return 0;
}
