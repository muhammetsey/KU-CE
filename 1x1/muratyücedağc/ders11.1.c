#include <stdio.h>
#include <stdlib.h>


int main()
{
	int sayac;
	int i;
	for (i=1;i<=100;++i)
	{
		sayac=sayac+i;
	}
	printf("%d birden yuze kadar olan sayilarin toplami\n",sayac);
	
	return 0;
}
