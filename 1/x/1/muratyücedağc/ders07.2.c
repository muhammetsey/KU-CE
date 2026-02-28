#include <stdio.h>
#include <stdlib.h>


int main() {
	float yaricap,alan,cevre,pi;
	printf("cemberde yaricap ve alan hesaplama makinesine hosgeldiniz\n\n");
	printf(	"lutfen yaricapinizi giriniz: " );
	scanf("%f",&yaricap);
	
	pi=3.14;
	cevre=2*pi*yaricap;
	alan= yaricap*yaricap*pi;
	
	printf("cemberinizin alani: %f",alan);
	printf(	"\n");
	printf("cemberinizin cevresi: %f",cevre);

	
	return 0;
}
