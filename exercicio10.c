#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARROS 100 

struct Carro {
    char placa[20];
    char modelo[50];
    int ano;
    char cor[20];
};

int main() {
    struct Carro carros[MAX_CARROS];
    int numCarros = 0; 
    int opcao;
    int i; 

    do {
        // Menu de opções
        printf("\n### Menu ###\n");
        printf("1. Cadastrar novo carro\n");
        printf("2. Listar carros cadastrados\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer do teclado

        switch (opcao) {
            case 1:
                // Cadastrar carro
                if (numCarros < MAX_CARROS) {
                    printf("\n### Cadastro de Novo Carro ###\n");
                    printf("Placa: ");
                    fgets(carros[numCarros].placa, sizeof(carros[numCarros].placa), stdin);
                    carros[numCarros].placa[strcspn(carros[numCarros].placa, "\n")] = '\0'; 

                    printf("Modelo: ");
                    fgets(carros[numCarros].modelo, sizeof(carros[numCarros].modelo), stdin);
                    carros[numCarros].modelo[strcspn(carros[numCarros].modelo, "\n")] = '\0'; 
                    printf("Ano: ");
                    scanf("%d", &carros[numCarros].ano);
                    getchar(); 

                    printf("Cor: ");
                    fgets(carros[numCarros].cor, sizeof(carros[numCarros].cor), stdin);
                    carros[numCarros].cor[strcspn(carros[numCarros].cor, "\n")] = '\0'; 

                    numCarros++;
                    printf("Carro cadastrado com sucesso!\n");
                } else {
                    printf("Limite de carros cadastrados atingido.\n");
                }
                break;
            case 2:
                // Listar carros cadastrados
                printf("\n### Lista de Carros Cadastrados ###\n");
                for (i = 0; i < numCarros; i++) {
                    printf("Carro %d:\n", i + 1);
                    printf("Placa: %s\n", carros[i].placa);
                    printf("Modelo: %s\n", carros[i].modelo);
                    printf("Ano: %d\n", carros[i].ano);
                    printf("Cor: %s\n", carros[i].cor);
                    printf("\n");
                }
                break;
            case 3:
                
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida. Escolha uma opcao valida.\n");
        }
    } while (opcao != 3);

    return 0;
}
