#include <iostream>
using namespace std;

int main() {
    float alas, tinggi, luas, keliling, sisi_miring;

    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    luas = 0.5 * alas * tinggi;
    
    float kuadrat_sisi_miring = (alas * alas) + (tinggi * tinggi);
    float akar = kuadrat_sisi_miring;
    float sekian;
    do {
        sekian = akar;
        akar = 0.5 * (sekian + (kuadrat_sisi_miring / sekian));
    } while ((sekian - akar) != 0);
    
	sisi_miring = akar;
	
	keliling = alas + tinggi + sisi_miring;
	
	printf("Luas segitiga: %.2f cm^2\n", luas);
    printf("Keliling segitiga: %.2f cm\n", keliling);
    return 0;
}

