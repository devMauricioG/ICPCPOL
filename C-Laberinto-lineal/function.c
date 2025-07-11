
#include "header.h"

int calc_habitaciones_visitadas(int tot_habitaciones, int tot_sucursales, bool es_sucursal[MAX_HABITACIONES + 1]) {
    int habitacion_actual = 1;
    int total_visitadas = 0;
    int cont_visitas[MAX_HABITACIONES + 1] = {0};
    
    while (habitacion_actual <= tot_habitaciones) {
        total_visitadas++;
        
        if (es_sucursal[habitacion_actual]) {
            cont_visitas[habitacion_actual]++;
            if (cont_visitas[habitacion_actual] % 2 == 1) {
                habitacion_actual = 1;
                continue;
            }
        }
        
        habitacion_actual++;
    }
    
    return total_visitadas;
}