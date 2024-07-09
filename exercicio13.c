#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TENTATIVAS 3

int main() {
    const char palavra[] = "PROGRAMACAO"; 
    int tamanho = strlen(palavra);
    char adivinhado[tamanho + 1];
    char tentativa;
    int erros = 0;
    int acertos = 0;
    int i;

    
    for (i = 0; i < tamanho; i++) {
        adivinhado[i] = '_';
    }
    adivinhado[tamanho] = '\0';

    while (erros < MAX_TENTATIVAS && acertos < tamanho) {
        printf("\nPalavra: %s\n", adivinhado);
        printf("Digite uma letra: ");
        scanf(" %c", &tentativa);
        tentativa = toupper(tentativa); 
        int encontrou = 0;
        for (i = 0; i < tamanho; i++) {
            if (palavra[i] == tentativa) {
                if (adivinhado[i] != tentativa) {
                    adivinhado[i] = tentativa;
                    acertos++;
                    encontrou = 1;
                }
            }
        }

        if (!encontrou) {
            erros++;
            printf("Letra incorreta! Vidas restantes: %d\n", MAX_TENTATIVAS - erros);
        }

        if (acertos == tamanho) {
            printf("\nParabéns! Você adivinhou a palavra: %s\n", palavra);
            break;
        }
    }

    if (erros == MAX_TENTATIVAS) {
        printf("\nVocê perdeu! A palavra era: %s\n", palavra);
    }

    return 0;
}

