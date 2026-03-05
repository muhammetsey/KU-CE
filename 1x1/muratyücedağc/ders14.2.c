#include <stdio.h>
#include <stdlib.h>

/* 1 den 36 ya kadar olan çift sayýlarý yazsýn ama 22 yi yazmasýn */

int main() {
	int i;
	i=1;
	while (i<=21)
	{	
		if (i%2==0)	
		printf ("%d \n",i);	
		i++;
		
	}
	i=23;
	while (i<=36)
	{	
		if (i%2==0)	
		printf ("%d \n",i);	
		i++;
		
	}
	return 0;
}
