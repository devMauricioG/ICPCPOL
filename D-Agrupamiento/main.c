#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
    int n, M, k;
    scanf("%d %d %d", &n, &M, &k);
    
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int resultado = min_grupos_buenos(n, M, k, arr);
    printf("%d\n", resultado);
    
    free(arr);
    return 0;
}