#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0) {
        printf("Bilangan adalah GENAP\n");
    } else {
        printf("Bilangan adalah GANJIL\n");
    }

    return 0;
}

