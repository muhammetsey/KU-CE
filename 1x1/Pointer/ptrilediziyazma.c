#include <stdio.h>

int main()
{
    char dizi[500];
    char *ptr = dizi;

    printf("Bir yazi giriniz:\n");
    gets(dizi);

    printf("diziniz: ");
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}

