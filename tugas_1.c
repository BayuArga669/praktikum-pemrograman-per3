#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan sebuah bilangan integer: ");
    scanf("%d", &bilangan);

    if (bilangan > 0) {
        printf("Bilangan tersebut adalah positif.\n");
    } else if (bilangan < 0) {
        printf("Bilangan tersebut adalah negatif.\n");
    } else {
        printf("Bilangan tersebut adalah nol.\n");
    }

    return 0;
}
