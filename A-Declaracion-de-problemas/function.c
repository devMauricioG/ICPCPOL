#include "header.h"


int leer_entero(int desde, int hasta){
    
    int nro;
    do{
        scanf("%d", &nro);
    }while(nro < desde && nro > hasta);
    
    return nro;
}