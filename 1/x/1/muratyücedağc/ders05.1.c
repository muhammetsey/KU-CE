#include <stdio.h>
#include <stdlib.h>

int main() {
    int misir = 2, kola = 2, su = 1, bilet = 8;
    int misir_adet, kola_adet, su_adet, bilet_adet;
    int misirf, kolaf, suf, biletf, toplamf;

    printf("Lutfen almis oldugunuz misir adedini giriniz: ");
    scanf("%d", &misir_adet);
    misirf = misir * misir_adet;
    printf("Almis oldugunuz misirin ucreti: %d TL\n", misirf);

    printf("Lutfen almis oldugunuz kola adedini giriniz: ");
    scanf("%d", &kola_adet);
    kolaf = kola * kola_adet;
    printf("Almis oldugunuz kolanin ucreti: %d TL\n", kolaf);

    printf("Lutfen almis oldugunuz su adedini giriniz: ");
    scanf("%d", &su_adet);
    suf = su * su_adet;
    printf("Almis oldugunuz suyun ucreti: %d TL\n", suf);

    printf("Lutfen almis oldugunuz bilet adedini giriniz: ");
    scanf("%d", &bilet_adet);
    biletf = bilet * bilet_adet;
    printf("Almis oldugunuz biletin ucreti: %d TL\n", biletf);

    toplamf = misirf + kolaf + suf + biletf;
    printf("\nToplam odemeniz gereken fiyat: %d TL\n", toplamf);

    return 0;
}

