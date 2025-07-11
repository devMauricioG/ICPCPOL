#include "header.h"

int main() {
    int tot_habitaciones, tot_sucursales;
    scanf("%d %d", &tot_habitaciones, &tot_sucursales);
    
    bool es_sucursal[MAX_HABITACIONES + 1] = {false};
    for (int i = 0; i < tot_sucursales; i++) {
        int habitacion;
        scanf("%d", &habitacion);
        es_sucursal[habitacion] = true;
    }
    
    int res = calc_habitaciones_visitadas(tot_habitaciones, tot_sucursales, es_sucursal);
    printf("%d\n", res);
    
    return 0;
}