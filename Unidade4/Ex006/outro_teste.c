
/* Usando a Biblioteca locale.h para incluir em nosso programa caracteres espeiciais e palavras com acentos */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca para defini��o de configura��es locais

int main(){
	
	setlocale(LC_ALL,"Portuguese"); //Defini��o para o uso de configura��es em portugu�s.
	
	printf("Ol� mundo!");
	printf("\nDefini��o para o uso de configura��es em portugu�s");
	
	return(0);
}
