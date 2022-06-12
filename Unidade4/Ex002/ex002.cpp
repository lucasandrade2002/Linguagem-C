
/* Escreva um programa que leia um vetor A e o apresente em forma decrescente */

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int vetorA[10];
	int i;
	
	i = 1;
	
	for (i = 1; i < 11; i++){
		printf("\nDigite o elemento %d do vetor A: ", i);
		scanf("%d", &vetorA[i]);
	};
	
	system("cls");
	
	for (i = 10; i >= 1; i--){
		printf("\nO elemento %d do vetor A e %d ", i, vetorA[i]);
	}
	
	return(0);
	
}
