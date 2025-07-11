#include "header.h"
#include <stdlib.h>

int comparar_enteros(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int min_grupos_buenos(int n, int M, int k, int* arr) {
    qsort(arr, n, sizeof(int), comparar_enteros);
    
    int grupos = 0;
    int i = 0;
    
    while (i < n) {
        int limite_superior = arr[i] + M;
        int j = i;
        
        while (j < n && arr[j] <= limite_superior && (j - i + 1) <= k) {
            j++;
        }
        
        if (j == i) {
            j = i + 1;
        }
        else if (j - i > k) {
            j = i + k;
        }
        
        grupos++;
        i = j; 
    }
    
    return grupos;
}