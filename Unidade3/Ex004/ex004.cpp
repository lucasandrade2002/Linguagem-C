
#include <stdio.h>

int main () {
	
	int i, soma;
	
	soma = 0;
	
	for (i = 200; i <= 500; i++){
		if (i % 2 != 0){
			soma += i;
		}
	}
	
	printf("A soma de todos os valores inteiros impares, entre 200 e 500 e igual a: %d", soma);
	
	return(0);
}
