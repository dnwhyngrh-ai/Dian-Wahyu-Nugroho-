#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100];

    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    kalimat[strcspn(kalimat, "\n")] = '\0';

    printf("Kalimat terbalik: ");

    for (int i = strlen(kalimat) - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }

    printf("\n");

    return 0;
}
