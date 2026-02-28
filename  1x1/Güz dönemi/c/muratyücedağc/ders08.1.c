#include <stdio.h>
#include <stdlib.h>


int main() 
{
    int sayi1,sayi2,sayi3;
    printf("lutfen 3 sayi giriniz: ");
    scanf ("%d %d %d",&sayi1,&sayi2,&sayi3);
    
   if (sayi1 > sayi2 && sayi1 > sayi3)
    printf("girilen en buyuk deger %d dir", sayi1);
   else if (sayi2 > sayi1 && sayi2 > sayi3)
    printf("girilen en buyuk deger %d dir", sayi2);
   else
    printf("girilen en buyuk deger %d dir", sayi3);

	
	return 0;
}
