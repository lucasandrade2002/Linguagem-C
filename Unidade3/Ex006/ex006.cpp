
/* Elabore um algoritmo que leia uma frase e escreva-a quantas vezes o usu�rio quiser. */

#include <stdio.h>

int main () {
	
	char frase[100];
	int nVezes, i;
	
	printf("Escreva uma frase: ");
	gets(frase); // O comando gets() permite inserir na vari�vel caracteres com espa�os em branco.
	
	printf("\nQuantas vezes quer ela seja escrita? ");
	scanf("%d", &nVezes);
	
	for (i = 1; i <= nVezes; i++){
		printf("\n%s", frase);
	}
	
	return(0);
}
