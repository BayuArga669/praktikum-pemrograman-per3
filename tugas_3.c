#include <stdio.h>

int main() {
    int bil1, bil2;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bil1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bil2);

    if (bil1 > bil2) {
        printf("Bilangan yang lebih besar adalah: %d\n", bil1);
    } else if (bil2 > bil1) {
        printf("Bilangan yang lebih besar adalah: %d\n", bil2);
    } else {
        printf("Kedua bilangan sama besar.\n");
    }

    return 0;
}
