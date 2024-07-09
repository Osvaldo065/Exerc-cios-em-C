#include <stdio.h>
#include <stdlib.h>



int main() {
	
	float salario;
	int cargos;
	float aumentoSa, diferenca;
	
	printf("Informe seu cargo\n[1]Gerente\n[2]Engenheiro\n[3]Tecnico\n[4]Outros.\n");
	scanf("%i", &cargos);
	
	printf("\nDigite seu salario:\n");
	scanf("%f", &salario);
	
	if(cargos==1){
		aumentoSa = salario+(salario*10)/100;
		diferenca = aumentoSa-salario;
		printf("Seu salario era: R$ %2.f \nSalario atual: R$ %2.f \nDiferenca salarial: R$ %2.f", salario, aumentoSa, diferenca);
	}else if(cargos==2){
	aumentoSa = salario+(salario*20)/100;
		diferenca = aumentoSa-salario;
		printf("Seu salario era: R$ %2.f \nSalario atual: R$ %2.f \nDiferenca salarial: R$ %2.f", salario, aumentoSa, diferenca);
	}else if(cargos==3){
	aumentoSa = salario+(salario*30)/100;
		diferenca = aumentoSa-salario;
		printf("Seu salario era: R$ %2.f \nSalario atual: R$ %2.f \nDiferenca salarial: R$ %2.f", salario, aumentoSa, diferenca);
	}else if(cargos==4){
		aumentoSa = salario+(salario*40)/100;
		diferenca = aumentoSa-salario;
		printf("Seu salario era: R$ %2.f \nSalario atual: R$ %2.f \nDiferenca salarial: R$ %2.f", salario, aumentoSa, diferenca);
	}
	
	return 0;
}
