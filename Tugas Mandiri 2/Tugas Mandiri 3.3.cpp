#include <stdio.h>

int main() {
    float alas, tinggi, sisi_miring;

    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan panjang tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    float kuadrat_sisi_miring = (alas * alas) + (tinggi * tinggi);
    float akar = kuadrat_sisi_miring;
    float temp;
    do {
        temp = akar;
        akar = 0.5 * (temp + (kuadrat_sisi_miring / temp));
    } while ((temp - akar) != 0);

    sisi_miring = akar;

    printf("Sisi miring segitiga: %.2f cm\n", sisi_miring);

    return 0;
}

