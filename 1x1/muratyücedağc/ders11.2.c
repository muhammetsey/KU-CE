#include <stdio.h>
#include <stdlib.h>
//amac faktoriyel bulma

int main() 
{
	int sayi;
	int i ;	
	int fak=1 ;
	printf("lutfen faktoriyelini hesaplamami istediginiz sayiyi giriniz:");
	scanf ("%d",&sayi);
	for (i=1;i<=sayi;++i)
	{
		fak=fak*i;
	}
	printf("sonucunuz %d dir",fak);
	
	
	return 0;
}
