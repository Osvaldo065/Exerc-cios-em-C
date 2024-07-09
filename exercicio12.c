#include <stdio.h>
#include <stdlib.h>
#define MAX_PRODUTOS 100 

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    struct Produto produtos[MAX_PRODUTOS];
	int numProdutos = 0;
	int opcao;
    int i;

    do {
        
        printf("\n### Menu ###\n");
        printf("1. Cadastrar novo produto\n");
        printf("2. Listar produtos cadastrados\n");
        printf("3. Exibir total da compra\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); 

        switch (opcao) {
            case 1:
                
                if (numProdutos < MAX_PRODUTOS) {
                    printf("\n### Cadastro de Novo Produto ###\n");
                    printf("Nome: ");
                    fgets(produtos[numProdutos].nome, sizeof(produtos[numProdutos].nome), stdin);
                    produtos[numProdutos].nome[strcspn(produtos[numProdutos].nome, "\n")] = '\0'; // Remove o \n do final

                    printf("Preco: ");
                    scanf("%f", &produtos[numProdutos].preco);
                    getchar(); 

                    printf("Quantidade: ");
                    scanf("%d", &produtos[numProdutos].quantidade);
                    getchar();
                    numProdutos++; 
                    printf("Produto cadastrado com sucesso!\n");
                } else {
                    printf("Limite de produtos cadastrados atingido.\n");
                }
                break;
            case 2:
                
                printf("\n### Lista de Produtos Cadastrados ###\n");
                for (i = 0; i < numProdutos; i++) {
                    printf("Produto %d:\n", i + 1);
                    printf("Nome: %s\n", produtos[i].nome);
                    printf("Preco: R$ %.2f\n", produtos[i].preco);
                    printf("Quantidade: %d\n", produtos[i].quantidade);
                    printf("\n");
                }
                break;
            case 3:
            
                {
                    float total = 0;
                    for (i = 0; i < numProdutos; i++) {
                        total += produtos[i].preco * produtos[i].quantidade;
                    }
                    printf("\n### Total da Compra ###\n");
                    printf("Total: R$ %.2f\n", total);
                }
                break;
            case 4:
               
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida. Escolha uma opcao valida.\n");
        }
    } while (opcao != 4);

    return 0;
}

