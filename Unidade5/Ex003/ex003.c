
/* Escreva uma função que receba um caractere e retorne 0 se for vogal ou 1 se for uma consoante, um número ou caractere especial */

#include <stdio.h>
#include <stdlib.h>

int verifica(char letra){
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		return 0;
	} else {
		return 1;
	}	
}

int main (){
	
	char letra;
	
	printf("Bem-vindo ao verificador de caracteres!!");
	
	printf("\n\nInsira uma letra: ");
	scanf("%c", &letra);
	
	printf("\n%d" , verifica(letra));
	
	return(0);
}
