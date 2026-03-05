#include <stdio.h>
#include <stdlib.h>

/* 0 ile 100 arasýnda 5 e tam bölünen sayýlarý listeleyen program*/

int main() {
	int i;
	for (i=1;i<=100;i++)
	{
		if (i%5==0)
		printf("%d sayýsý 5 e tam bölünüyor  \n",i);
	}
	
	return 0;
}
