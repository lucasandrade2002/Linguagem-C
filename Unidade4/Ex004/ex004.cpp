
/* Elabore um algoritmo que leia uma palavra e o número de vezes que se deseja imprimi-la */

#include <stdio.h>

int main () {
	
	char palavra[100];
	int vezes, i;
	
	printf("Digite uma palavra: ");
	gets(palavra);
	
	printf("\nQunatas vezes voce quer que a palavra seja impressa? ");
	scanf("%d", &vezes);
	
	i = 0;
	
	while (i < vezes){
		printf("\n%s", palavra);
		i += 1;
	}
	
	return(0);
}
