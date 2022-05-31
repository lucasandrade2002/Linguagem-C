#include <stdio.h>
#include <math.h>

/* Exercício: Crie um programa que leia um número inteiro positivo e apresente o quadrado e a raiz quadrada dele. */

int main(){
	int num, quadrado;
	float raiz;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	quadrado = pow(num,2);
	raiz = sqrt(num);
	
	printf("\nO numero %d ao quadrado e igual a: %d", num, quadrado);
	printf("\nA raiz quadrada de %d e: %.1f", num, raiz);
	
	return(0);
		
}
