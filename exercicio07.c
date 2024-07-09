#include <stdio.h>
#include <stdlib.h>



int main() {
	   int i;
    float a, b, c, ordem;

    
    printf("Digite um valor inteiro: ");
    scanf("%d", &i);
    printf("Digite três valores: ");
    scanf("%f %f %f", &a, &b, &c);

    if (i == 1) {
       
	    //crescente
	    
        if (a > b) {
            ordem = a;
            a = b;
            b = ordem;
        }
        if (a > c) {
            ordem = a;
            a = c;
            c = ordem;
        }
        if (b > c) {
            ordem = b;
            b = c;
            c = ordem;
        }
        printf("Valores em ordem crescente: %.2f, %.2f, %.2f\n", a, b, c);
        
    } else if (i == 2) {
        
		//decrescente
		
        if (a < b) {
            ordem = a;
            a = b;
            b = ordem;
        }
        if (a < c) {
            ordem = a;
            a = c;
            c = ordem;
        }
        if (b < c) {
            ordem = b;
            b = c;
            c = ordem;
        }
        printf("Valores em ordem decrescente: %.2f, %.2f, %.2f\n", a, b, c);
    } else if (i == 3) {
    	
        // Colocar o maior valor entre os outros dois
        
        if (a > b && a > c) {
            ordem = a;
            a = c;
            c = ordem;
        } else if (b > a && b > c) {
            ordem = b;
            b = c;
            c = ordem;
        }
        printf("Valores com o maior no meio: %.2f, %.2f, %.2f\n", a, c, b);
    } else {
        printf("Valor inválido.\n");
    }

    return 0;
}
