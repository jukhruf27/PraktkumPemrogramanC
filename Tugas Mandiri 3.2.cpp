#include <stdio.h>

int main() {
    int celcius;
    float fahrenheit, reamur;

    printf("Masukkan suhu dalam Celcius: ");
    scanf("%d", &celcius);

    fahrenheit = (celcius * 9.0 / 5.0) + 32;
    reamur = celcius * 4.0 / 5.0;

    printf("Suhu dalam Fahrenheit: %.2f F\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f R\n", reamur);

    return 0;
}

