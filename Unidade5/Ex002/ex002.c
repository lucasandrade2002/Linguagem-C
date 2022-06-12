
/* Elabore uma função que receba dois números positivos por parâmetro e retorne a soma dos N números inteiros existente entre eles. */

#include <stdio.h>
#include <stdlib.h>

int somaIntervalo(int vetor1[2], int vetor2[2]);

int main(){
	
	int vetor1[2], vetor2[2], i;
	int resposta;
	
	for(i = 0; i < 2; i++){
		
		printf("\nPreencha a posicao %d do vetor 1: ", i+1);
		scanf("%d", &vetor1[i]);

		printf("\nPreencha a posicao %d do vetor 2: ", i+1);
		scanf("%d", &vetor2[i]);		
	}
	
	system("cls");
	
	somaIntervalo(vetor1, vetor2);
	
	return(0);
}

int somaIntervalo(int vetor1[2], int vetor2[2]){
	
	int resultado1, resultado2, i;
	
	resultado1 = 0;
	resultado2 = 0;
	
	for(i = vetor1[0]; i <= vetor1[1]; i++){
		resultado1 += i;
	}
	
	
	for(i = vetor2[0]; i <= vetor2[1]; i++){
		resultado2 += i;	
	}
	
	printf("\nA soma dos elementos do Vetor 1 e: %d", resultado1);
	printf("\nA soma dos elementos do Vetor 2 e: %d", resultado2);
	
	return(0);
}

