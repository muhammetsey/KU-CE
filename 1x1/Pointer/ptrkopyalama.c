#include <stdio.h>

int main()
{
    char kaynak[100], hedef[100];
    char *pKaynak, *pHedef;

    printf("Metni giriniz:\n");
    gets(kaynak);

    pKaynak=kaynak;
    pHedef =hedef;

    while(*pKaynak!='\0')
    {
        *pHedef=*pKaynak;
        pKaynak++;
        pHedef++;
    }
    *pHedef='\0'; 

    printf("Kaynak:%s\n",kaynak);
    printf("Hedef :%s",hedef);

    return 0;
}


