#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan sebuah bilangan integer: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0) {
        printf("Bilangan %d adalah genap.\n", bilangan);
    } else {
        printf("Bilangan %d adalah ganjil.\n", bilangan);
    }

    return 0;
}
