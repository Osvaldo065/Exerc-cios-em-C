#include <stdio.h>

float abastecimento(float *totalCombs, float *totalQtd, float *totalDist) {
    int numAbastecimento;

    printf("Digite o numero de abastecimentos: ");
    scanf("%d", &numAbastecimento);
    
    *totalCombs = 0;
    *totalQtd = 0;
    *totalDist = 0;

    int i;
    for (i = 1; i <= numAbastecimento; i++) {
        float combustivel, quantidade, distancia;
        
        printf("\nDigite o valor do combustivel no abastecimento %d (R$): ", i);
        scanf("%f", &combustivel);
        printf("Digite a quantidade abastecida no abastecimento %d (litros): ", i);
        scanf("%f", &quantidade);
        printf("Digite a distancia percorrida no abastecimento %d (km): ", i);
        scanf("%f", &distancia);

        *totalCombs += combustivel;
        *totalQtd += quantidade;
        *totalDist += distancia;
    }
}

int main() {
    float totalCombs, totalQtd, totalDist;
    
    abastecimento(&totalCombs, &totalQtd, &totalDist);
    
    
    float mediaCombustivel = totalCombs / totalQtd;

    float autonomia = totalDist / totalQtd;

    printf("\nRelatorio de consumo:\n");
    printf("Total de combustivel gasto: %.2f litros\n", totalQtd);
    printf("Total de distancia percorrida: %.2f km\n", totalDist);
    printf("Media do valor do combustivel por litro: R$ %.2f\n", mediaCombustivel);
    printf("Autonomia do veiculo: %.2f km/l\n", autonomia);

    return 0;
}
