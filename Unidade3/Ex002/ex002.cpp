
/* Construa um programa que leia o número de termos da série e imprima o valor de S. */

#include <stdio.h>

int main(){
	
	int num, soma;
	
	soma = 0;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		soma += num;
	} while (num != 0);
	
	printf("O valor total dos numeros informados e de: %d", soma);
	
	return (0);
}
