
/* Escreva um programa que receba quatro n�meros inteiros e apresente a m�dia aritm�tica entre eles. */

#include <stdio.h>

int main(){
	float total, media;
	
	media = 0;
	
	for(int i = 1; i <= 4; i++){
		
		printf("Digite um numero: ");
		scanf("%f", &total);
		
		media += total;		
	}
	
	printf("A media dos quatro numeros digitados e igual a: %.2f", media/4);
	
	return(0);
}
