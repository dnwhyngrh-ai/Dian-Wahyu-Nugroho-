#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100];
    char huruf;
    int jumlah = 0;

    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    // Menghapus enter dari fgets
    kalimat[strcspn(kalimat, "\n")] = '\0';

    printf("Masukkan huruf yang dicari: ");
    scanf(" %c", &huruf);

    for (int i = 0; kalimat[i] != '\0'; i++) {
        if (kalimat[i] == huruf) {
            jumlah++;
        }
    }

    printf("Jumlah huruf '%c' = %d\n", huruf, jumlah);

    return 0;
}
