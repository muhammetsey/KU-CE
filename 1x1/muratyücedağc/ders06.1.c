#include <stdio.h>
#include <stdlib.h>

int main() {
	float yas,boy,ideal;
	printf("ideal kilo hesaplama paneline hosgeldiniz\n\n\n");
	printf ("lutfen yasinizi giriniz");
	scanf("%f",&yas);
	printf("lutfen boyunuzu giriniz");
	scanf("%f",&boy);
	ideal=(boy-100+yas/100)*0.9;
	printf("ideal kilonuz: %f",ideal);
	
	return 0;
}
