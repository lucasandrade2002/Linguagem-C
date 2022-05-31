
/* Escreva um programa que receba cincos números inteiros e apresente o maior e o menor. */

#include <stdio.h>

int main() {
	
	int n1,n2,n3,n4,n5,maior,menor;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("\nDigite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &n3);
	
	printf("\nDigite o quarto numero: ");
	scanf("%d", &n4);
	
	printf("\nDigite o quinto numero: ");
	scanf("%d", &n5);
	
	maior = 0;
	menor = 0;
	
	if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
		maior = n1;
	} else if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){
			maior = n2; 
	} else if(n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5){
				maior = n3;
	} else if(n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5){
				maior = n4; 	
	} else if(n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4){
				maior = n5; 
	}
		
	if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5){
		menor = n1;
	} else if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5){
		menor = n2;
	} else if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5){
		menor = n3;
	} else if (n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5){
		menor = n4;
	} else if (n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4){
		menor = n5;
	}
		
	printf("\nDentre os numeros digitados, o maior e: %d", maior);
	printf("\nDentre os numeros digitados, o menor e: %d", menor);
	return(0);
}

