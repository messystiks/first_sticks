#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, temp;

//merge
    printf("Introduceți numărul de elemente (n): ");
    scanf("%d", &n);

    int tablou[n];


    printf("Introduceți cele %d numere:\n", n);
    for (i = 0; i < n; i++) {
        printf("Elementul %d: ", i + 1);
        scanf("%d", &tablou[i]);
    }

    // Algoritmul Bubble Sort pentru sortare crescătoare
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tablou[j] > tablou[j + 1]) {
                // Interschimbăm elementele dacă nu sunt în ordine crescătoare
                temp = tablou[j];
                tablou[j] = tablou[j + 1];
                tablou[j + 1] = temp;
            }
        }
    }

    // Afișăm numerele sortate
    printf("\nNumerele sortate crescător sunt:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tablou[i]);
    }
    printf("\n");

    return 0;

}
