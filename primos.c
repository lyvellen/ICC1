#include <stdio.h>

int main() {
    int num[100];
    int i, j, cont;
    int countPrimos = 0;

    for (i = 0; i < 100; i++) {
        num[i] = i + 1;
    }

    for (i = 0; i < 100; i++) {  
        if (num[i] <= 1) {
            continue;
        }

        cont = 0;

        for (j = 2; j <= num[i] / 2; j++) {
            if (num[i] % j == 0) {
                cont++;
                break;
            }
        }

        if (cont == 0) {
            printf("%d é primo.\n", num[i]);
            countPrimos++;
        } else {
            printf("%d não é primo.\n", num[i]);
        }
    }

    printf("\nTemos %d números primos entre 0 e 100.\n", countPrimos);

    return 0;
}
