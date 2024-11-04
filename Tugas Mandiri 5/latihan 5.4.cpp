#include <stdio.h>

int main() 
{
    int A, B, C;

    printf("Input 3 buah bilangan:\n");
    printf("Bilangan 1: ");
    scanf("%i", &A);
    printf("Bilangan 2: ");
    scanf("%i", &B);
    printf("Bilangan 3: ");
    scanf("%i", &C);

    if (A > B && A > C) {
        printf("Bilangan terbesar: %i\n", A);
    } else if (B > A && B > C) {
        printf("Bilangan terbesar: %i\n", B);
    } else if (C > A && C > B) {
        printf("Bilangan terbesar: %i\n", C);
    }

    return 0;
}

