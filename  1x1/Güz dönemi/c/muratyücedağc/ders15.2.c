#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char ders;
	printf ("kodu giriniz: ");
	scanf(" %s",&ders);

	
	switch (ders)
	{
		case 't': printf("turkce"); break;
		case 'm': printf("matematik"); break;
		case 'f': printf("fen"); break;
		case 's': printf("sosyal"); break;
	}
	return 0;
}
