
/* Crie uma fun��o que receba um par�metro do tipo n�mero e retorne se ele � par ou �mpar */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int parOuimpar(int num){
	
	if(num % 2 == 0){
		printf("par");
	} else {
		printf("�mpar");
	}	
	
	return(0);
}

int main(){
	
	int numero, resposta;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &numero);
	
	printf("O n�mero %d �: ", numero);
	parOuimpar(numero);
	
	return(0);
	
}
