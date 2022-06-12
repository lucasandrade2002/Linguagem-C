
/* Usando a Biblioteca locale.h para incluir em nosso programa caracteres espeiciais e palavras com acentos */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para definição de configurações locais

int main(){
	
	setlocale(LC_ALL,"Portuguese"); //Definição para o uso de configurações em português.
	
	printf("Olá mundo!");
	printf("\nDefinição para o uso de configurações em português");
	
	return(0);
}
