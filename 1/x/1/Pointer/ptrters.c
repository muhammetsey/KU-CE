#include <stdio.h>
#include <stdlib.h>

/* ptr ile tersten yazma */

int main()
{
	char metin[200];
	char *ptr;
	ptr=metin;
	int i,uzunluk=0;
	
	printf("çevrilecek metin giriniz:");
	gets(metin);
	printf("ik metniniz: %s \n",metin);
	for (i=0;*(ptr+i)!='\0';i++)
	{
		uzunluk++;
	}
	printf("yeni metniniz:");
	for (i=uzunluk;i>=0;i--)
	{
		printf("%c",*(ptr+i));
	}
	return 0;
}








