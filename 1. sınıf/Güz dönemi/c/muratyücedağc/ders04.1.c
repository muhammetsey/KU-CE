#include <stdio.h>
#include <stdlib.h>

int main() {
    int kenar, yukseklik, alan, cevre;

    printf("Lutfen ucgenin kenar uzunlugunu giriniz: ");
    scanf("%d", &kenar);

    printf("Lutfen ucgenin yuksekligini giriniz: ");
    scanf("%d", &yukseklik);

    alan = (kenar * yukseklik) / 2;
    cevre = kenar * 3; 

    printf("Eskenar ucgeninizin alani: %d\n", alan);
    printf("Eskenar ucgeninizin cevresi: %d\n", cevre);

    return 0;
}

