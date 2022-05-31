
/* Elabore um algoritmo que imprima a tabuada do um ao dez */

#include <stdio.h>

int main(){
	
	int num, i, resultado;
	
	printf("Digite um numero por favor: ");
	scanf("%d", &num);
	
	resultado = 0;
	
	for (i = 1; i <= 10; i++){
		resultado = num * i;
		printf("\n%d x %d = %d", num, i, resultado);	
	}
	
	return(0);
	
}
