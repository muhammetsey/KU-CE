#include <stdio.h>
#include <stdlib.h>

/* ptr ile deðer deðiþtirme */

int main()
{
	int x=7;
	int *ptr;
	ptr=&x;
	printf("x degeri %d\n" ,*ptr);
	*ptr=10;
	printf("x in yeni degeri : %d",*ptr);
	return 0;
}
