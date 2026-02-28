#include <stdio.h>
#include <stdlib.h>

/* dizinin elemanlarýný 2 katýna çýkarma ptr ile */

int main()
{
	int i;
	int dizi[5];
	int *ptr;
	ptr=dizi;
	printf("5 sayi giriniz:");
	for(i=0;i<5;i++)
	{
		scanf("%d",(ptr+i));
	}
	ptr=2*dizi;
	printf("iki katina cikmis yeni degerleriniz:");
	
	for(i=0;i<5;i++)
	{
		printf("%d \n",(*ptr+i));
	}
	
	return 0;
}
