#include <stdio.h>

int main() {
    int n, i, x;
    int pares_maria, impares_maria;
    int pares_juan, impares_juan;

    while (scanf("%d", &n), n != 0) {
        pares_maria = impares_maria = 0;
        pares_juan = impares_juan = 0;

        for (i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x % 2 == 0)
                pares_maria++;
            else
                impares_maria++;
        }

        for (i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x % 2 == 0)
                pares_juan++;
            else
                impares_juan++;
        }

        int min_ganados = (pares_juan < impares_maria) ? pares_juan : impares_maria;
        printf("%d\n", min_ganados);
    }

    return 0;
}
