#include <stdio.h>
#include <stdlib.h>

int ordem() {
    int valores[10];
    int i, j, ordemC;

   
    for (i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
    }

   
    for (i = 0; i < 10 - 1; i++) {
        for (j = i + 1; j < 10; j++) {
            if (valores[i] > valores[j]) {
                
                ordemC = valores[i];
                valores[i] = valores[j];
                valores[j] = ordemC;
            }
        }
    }


    printf("Os valores em ordem crescente: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
}

int main() {
	
    ordem(); 

    return 0;
}
