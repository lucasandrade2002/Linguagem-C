/* Escreva um algoritmo que receba  valor da cota��o do d�lar e o valor em reais e que apresente o valor em d�lares. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float dolares(float cotacao, float reais);

int main (){
	float cotacao, reais;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o valor em R$ que voc� possui: ");
	scanf("%f", &reais);
	
	printf("\nQual a cota��o do d�lar? ");
	scanf("%f", &cotacao);
	
	
	printf("\nO valor em d�lares � de: %.2f", dolares(cotacao, reais));
}

float dolares(float cotacao, float reais){
	return reais/cotacao;
}
