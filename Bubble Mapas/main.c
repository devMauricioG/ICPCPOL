#include <stdio.h>
#include <string.h>

char vecinos[5005];

void arriba(int i) {
    if (i == 0) {
        vecinos[0] = 1;
        return;
    }

    switch (vecinos[i]) {
        case 'p': arriba(i - 1); vecinos[i] = 's'; break;
        case 'q': arriba(i - 1); vecinos[i] = 'r'; break;
        case 'r': vecinos[i] = 'q'; break;
        case 's': vecinos[i] = 'p'; break;
    }
}

void abajo(int i) {
    if (i == 0) {
        vecinos[0] = 1;
        return;
    }

    switch (vecinos[i]) {
        case 'p': vecinos[i] = 's'; break;
        case 'q': vecinos[i] = 'r'; break;
        case 'r': abajo(i - 1); vecinos[i] = 'q'; break;
        case 's': abajo(i - 1); vecinos[i] = 'p'; break;
    }
}

void izquierda(int i) {
    if (i == 0) {
        vecinos[0] = 1;
        return;
    }

    switch (vecinos[i]) {
        case 'p': izquierda(i - 1); vecinos[i] = 'q'; break;
        case 'q': vecinos[i] = 'p'; break;
        case 'r': vecinos[i] = 's'; break;
        case 's': izquierda(i - 1); vecinos[i] = 'r'; break;
    }
}

void derecha(int i) {
    if (i == 0) {
        vecinos[0] = 1;
        return;
    }

    switch (vecinos[i]) {
        case 'p': vecinos[i] = 'q'; break;
        case 'q': derecha(i - 1); vecinos[i] = 'p'; break;
        case 'r': derecha(i - 1); vecinos[i] = 's'; break;
        case 's': vecinos[i] = 'r'; break;
    }
}

int main() {
    int n, l, l1;
    char m[5005];

    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        fgets(m, sizeof(m), stdin);
        m[strcspn(m, "\n")] = '\0';  
        l1 = strlen(m) - 1;

        strcpy(vecinos, m);
        l = l1;
        arriba(l);
        if (vecinos[0] == 1)
            printf("<none> ");
        else
            printf("%s ", vecinos);

        strcpy(vecinos, m);
        l = l1;
        abajo(l);
        if (vecinos[0] == 1)
            printf("<none> ");
        else
            printf("%s ", vecinos);

        strcpy(vecinos, m);
        l = l1;
        izquierda(l);
        if (vecinos[0] == 1)
            printf("<none> ");
        else
            printf("%s ", vecinos);

        strcpy(vecinos, m);
        l = l1;
        derecha(l);
        if (vecinos[0] == 1)
            printf("<none>\n");
        else
            printf("%s\n", vecinos);
    }

    return 0;
}
