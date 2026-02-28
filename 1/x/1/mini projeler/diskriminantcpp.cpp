#include <stdio.h>
int main()
{
int a,b,c;
int d;
printf("lütfen a b c katsayýlarýný giriniz:");
scanf("%d %d %d",&a,&b,&c);
d= b*b-4*a*c;
if(d>0)
{
    printf("denklemin iki farklý kökü vardýr");
}
else if (d==0)
{
	printf("denklemin çakýþýk tek kökü vardýr");
}
else 
{
	printf("denklemin kökü yoktur");
}
return 0; 
}


