#include "header.h"

int main() {
    int n;
    scanf("%d", &n);

    int movimientos[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &movimientos[i]);
    }

    printf("%d\n", calcular_minimo_hormigas(n, movimientos));
    return 0;
}
