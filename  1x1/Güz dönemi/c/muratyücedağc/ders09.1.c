#include <stdio.h>
#include <stdlib.h>


int main()
{
	int sinav1,sinav2,sinav3,gano;
	float ort;
	printf("lutfen 1. sýnav notunuzu giriniz: ");
	scanf ("%d",&sinav1);
	
	printf("lutfen 2. sýnav notunuzu giriniz: ");
	scanf ("%d",&sinav2);
	
	printf("lutfen 3. sýnav notunuzu giriniz: ");
	scanf ("%d",&sinav3);
	
	ort=(sinav1+sinav2+sinav3)/3;
	
	if (ort>85)
	{
		printf ("tebrikler AA ile geçtiniz.");
	}
	else if (ort>70)
	{
	printf ("tebrikler BB ile geçtiniz.");	
	}
	else if (ort>60)
	{
	printf ("tebrikler CC ile geçtiniz.");	
	}
	
	else if (ort>50)
    {
    	if (gano>2)
    	{
    	  printf ("tebrikler DD ile geçtiniz.");	
		}
		else
		{
			    printf ("geçmiþ olsun DD ile kaldýnýz.");	
		}
	}
	else if (ort>0)
	{
		 printf ("geçmiþ olsun FF ile kaldýnýz.");	
	}
	
	return 0;
}
