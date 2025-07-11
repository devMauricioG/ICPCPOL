#include "header.h"

int main(){

    int n;

    n = leer_entero(1, 100);

    int enter = 0;

    // se leen y contabilizan los fragmentos

    for(int i = 0; i < n; i++){
        char cadena[11];
        
        scanf("%s", cadena);

        enter++;
    } 

    printf("%d\n", enter - 1); // el ultimo enter no cuenta

    return 0;
}