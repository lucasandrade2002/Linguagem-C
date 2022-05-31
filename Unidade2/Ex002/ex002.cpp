
/* Escreva um programa que leia um número e informe se ele é divisível por 3 e por 7. */

#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if(numero % 3 == 0 && numero % 7 == 0){
		printf("\nO numero e divisivel por 3 e 7.");
	}else{
		printf("\nO numero NAO e divisivel por 3 e 7.");
	}
}
