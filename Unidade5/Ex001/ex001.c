
/* Crie uma função que receba um parâmetro do tipo número e retorne se ele é par ou ímpar */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int parOuimpar(int num){
	
	if(num % 2 == 0){
		printf("par");
	} else {
		printf("ímpar");
	}	
	
	return(0);
}

int main(){
	
	int numero, resposta;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número inteiro: ");
	scanf("%d", &numero);
	
	printf("O número %d é: ", numero);
	parOuimpar(numero);
	
	return(0);
	
}
