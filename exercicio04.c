#include <stdio.h>

int main() {
    int matriz[10][10];
    int i, j;

   
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (i == j || i + j == 9) { 
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz completa:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
