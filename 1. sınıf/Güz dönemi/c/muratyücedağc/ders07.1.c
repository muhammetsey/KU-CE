#include <stdio.h>
#include <stdlib.h>


int main() {
	float maas,zamlimaas;
	printf("*********zam maas hesabi**********\n\n\n");
	printf("lutfen aldiginiz maasi giriniz: \n");
	scanf("%f", &maas);
	zamlimaas= (maas*120)/100;
	printf("zamli maasiniz %f tl",zamlimaas);
	return 0;
}
