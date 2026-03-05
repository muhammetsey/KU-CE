#include <stdio.h>
#include <stdlib.h>

// dizide en büyük elemaný bulma

int main()
{
	int i;
	int dizi [100];
	int enbuyuk=0;
	int adet;
	int *ptr;
	ptr=dizi;
	
	printf("dizinin elaman adetini giriniz:");
	scanf("%d",&adet);
	
	printf("elamanlari giriniz:");
	for (i=0;i<adet;i++)
	{
		scanf("%d",(ptr+i));
	}
	enbuyuk=*ptr;
	
	for (i=0;i<adet;i++)
	{
		if(*(ptr+i)>enbuyuk)
		enbuyuk=*(ptr+i);
	}
	printf("en buyuk elemaniniz : %d ",enbuyuk);
	return 0;
}







