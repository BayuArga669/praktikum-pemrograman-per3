#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];

    printf("Masukkan username: ");
    scanf("%s", username);

    printf("Masukkan password: ");
    scanf("%s", password);

    // Cek apakah username = "admin" DAN password = "123"
    // strcmp akan menghasilkan 0 jika kedua teks sama persis
    if (strcmp(username, "admin") == 0 && strcmp(password, "123") == 0) {
        printf("Login berhasil! Selamat datang, %s.\n", username);
    } else {
        printf("Login gagal! Username atau password salah.\n");
    }

    return 0;
}
