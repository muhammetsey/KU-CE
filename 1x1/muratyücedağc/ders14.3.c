#include <stdio.h>
#include <stdlib.h>

/* girilen sayýnýn faktoriyelini while döngüsü ile bulan kod */

int main() 
{
	int i,sayi,fak;
	i=1;
	fak=1;
	printf("faktoriyeli hesaplanacak sayiyi giriniz: ");
	scanf("%d",&sayi);
	while (i<=sayi)
	{
	    fak=i*fak;
	    i++;
		
	}
	printf ("%d",fak);
	return 0;
}
