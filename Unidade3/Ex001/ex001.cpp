
/* Faça um programa que leia números inteiros até que seja informado o valor 0. Apresente a média dos valores, o maior e o menor valor
e a quantidade de números pares e ímpares. */

#include <stdio.h>

int main(){
	
	int num, i, maior, menor, pares, impares, soma;
	float media;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	soma = 0;
	maior = num;
	menor = num;
	pares = 0;
	impares = 0;
	i = 0;
	
	while(num != 0){
		
		soma += num;
		i += 1;
		
		if(num > maior){
			maior = num;
		} else if (num < menor){
			menor = num;
		}
		
		if (num % 2 == 0){
			pares += 1;
		} else {
			impares += 1;
		}
		
		printf("Digite um numero: ");
		scanf("%d", &num);
	}
	
	media = soma/i;
	
	printf("\nO maior valor digitado foi: %d", maior);
	printf("\nO menor valor digitado foi: %d", menor);
	printf("\nA quantidade de numeros impares digitados foi de: %d", impares);
	printf("\nA quantidade de numeros pares digitados foi de: %d", pares);
	printf("\nA media dos numeros digitados e de: %.2f", media);
	
	
	return(0);
}
