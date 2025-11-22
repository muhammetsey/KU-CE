#include <stdio.h>
#include <stdlib.h>

/* asal sayi*/

int main() 
{
	int i,sayi,sayac=0 ;
	
	printf("lutfen kontrol edilecek sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	if (sayi<=1)
	printf("asal sayi degil");
	
    for (i=2;i<sayi;i++)
	{
		if (sayi%i==0)
		{
			sayac++;
		}
	}
	
if (sayac==0)
	printf("asal sayidir\n");

else
	printf("asal sayi degildir");
	return 0;
}
