#include <stdio.h>
#include <stdlib.h>

/* ptr giris temelleri */

int main()
{
	int x=7;
	int *ptr=&x;
	printf("x adres:%x \n",&x);
	printf("x degeri:%d\n",x);
	printf("x adres ptr ile:%x\n",ptr);
	printf("x deger ptr ile: %d\n",*ptr);

	return 0;
}
