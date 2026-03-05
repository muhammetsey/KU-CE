#include <stdio.h>
int main()
{
    int v1, v2, f, o;
    float dip;
    float gano; 

    printf("Lütfen 1. vizenizi giriniz: ");
    scanf("%d", &v1);

    printf("Lütfen 2. vizenizi giriniz: ");
    scanf("%d", &v2);

    printf("Lütfen final notunuzu giriniz: ");
    scanf("%d", &f);

    printf("Lütfen ödev notunuzu giriniz: ");
    scanf("%d", &o);

    printf("Lütfen GANO'nuzu giriniz: ");
    scanf("%f", &gano);

    dip = v1 * 0.2 + v2 * 0.2 + f * 0.3 + o * 0.3;

    if (dip >= 90)
        printf("AA Geçtiniz");
    else if (dip >= 85)
        printf("BA Geçtiniz");
    else if (dip >= 80)
        printf("BB Geçtiniz");
    else if (dip >= 75)
        printf("CB Geçtiniz");
    else if (dip >= 65)
    {
        if (gano > 2)
            printf("DC Geçtiniz");
        else
            printf("DC Kaldýnýz");
    }
    else if (dip >= 55)
        printf("DD Kaldýnýz");
    else
        printf("FF Kaldýnýz");

    return 0;
}


