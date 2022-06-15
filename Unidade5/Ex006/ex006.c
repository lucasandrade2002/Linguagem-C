/* Escreva um algoritmo que receba  valor da cotação do dólar e o valor em reais e que apresente o valor em dólares. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float dolares(float cotacao, float reais);

int main (){
	float cotacao, reais;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o valor em R$ que você possui: ");
	scanf("%f", &reais);
	
	printf("\nQual a cotação do dólar? ");
	scanf("%f", &cotacao);
	
	
	printf("\nO valor em dólares é de: %.2f", dolares(cotacao, reais));
}

float dolares(float cotacao, float reais){
	return reais/cotacao;
}
