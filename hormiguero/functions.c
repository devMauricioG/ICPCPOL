#include "header.h"

int calcular_minimo_hormigas(int n, int movimientos[]) {
    int minimo_hormigas = 0;
    int hormigas_actuales = 0;

    for (int i = 0; i < n; i++) {
        hormigas_actuales += movimientos[i];
        if (hormigas_actuales < 0) {
            minimo_hormigas += -hormigas_actuales;
            hormigas_actuales = 0;
        }
    }

    return minimo_hormigas;
}
