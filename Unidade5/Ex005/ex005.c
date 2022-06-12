
/* Construa um algoritmo que tenha uma função que recebe um nome e retorne o número de vogais */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificaVogais(char nome[50]){
	
	int count, i;
	int comprimento;
	
	comprimento = strlen(nome);
	count = 0;
	
	for(i = 0; i <= comprimento; i++){
		if (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u'){
			count++;	
		}
	}
	
	return count;
	
}

int main (){
	
	char nome[50];
	
	printf("Insira o nome [em letras minusculas]: ");
	scanf("%50[^\n]s", nome);
	
	printf("A quantidade de vogais no nome e: %d", verificaVogais(nome));
	
	return(0);
	
}
