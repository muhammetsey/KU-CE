#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i;
void f1 (char *ptr2, char *ptr)
{
	while (*(ptr+i)!=NULL)
	{
		*(ptr2+i)=*(ptr+i);
		i++;
	}
	printf("%s",ptr2);
}
int main() 
{
	char dizi [100];
	char dizi2 [100];
	printf("dizi giriniz:");
	gets (dizi);
	f1(dizi2,dizi);
	
	
	return 0;
}
