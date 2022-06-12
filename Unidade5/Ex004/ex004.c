
/* Elabore um algoritmo que, com uma função, apresente o somatório dos N primeiros números pares, definidos por um operador. */

#include <stdio.h>
#include <stdlib.h>

int somatoria(int num){
	
	int A, B, i, resultado;
	
	A = 1;
	B = num;
	resultado = 0;
	
	for(i = A; i < B; i++){
		if(i % 2 == 0){
			resultado += i;
		}
	}
	
	return resultado;
}

int main (){
	
	int numeros;
	
	printf("\nInsira um numero: ");
	scanf("%d", &numeros);
	fflush(stdin);
	
	printf("\nA soma dos numeros pares que estao compreendidos entre 1 e %d e: %d", numeros, somatoria(numeros));
	
	return(0);
	
}
