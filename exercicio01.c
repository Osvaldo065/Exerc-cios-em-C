#include <stdio.h>
#include <stdlib.h>


int main() {
	
int	matriz[10][10];
int i, j;

printf("Imprimindo os valores\n");

for(i=0; i<10; i++){
	for(j=0; j<10; j++){
		if(i == j){
			matriz[i][j] = 1;
		}else{
			matriz[i][j] = 0;
		}
	}
}

printf("Diagonal principal\n");
for(i=0; i <10; i++){
	printf("%d ", matriz[i][i]);
}
	
	return 0;
}
