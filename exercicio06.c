#include <stdio.h>
#include <stdlib.h>

int pedido(){
	
	printf("Seja bem-vindo\n");
	int opcao;
	float valor_total, total;
	char escolha_cont;
	
	do{
		printf("\nEscolha seu lanche: \n[1]X-tudo\n[2]Baguncinha\n[3]Mixto Quente\n[4]Imprimir o total\n[5]-Sair\n");
	    scanf("%i", &opcao);
	    if(opcao==1){
	    	valor_total = 10;
	    	total += valor_total;
	    	
		}else if(opcao==2){
			valor_total = 8;
			total += valor_total;
			
		}else if(opcao==3){
			valor_total= 5;
			total += valor_total;
			
		}else if(opcao==4){
			printf("Total do pedido: R$%2.f\n", total);
		}	  
}while(opcao!=5);

}


int main() {
	
	int lanche = pedido();
	
	return 0;
}
