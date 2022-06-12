
/* Fa�a um algoritmo que leia dois vetores A e B e apresente e quantidade de posi��es que possuem
elementos diferentes entre um vetor e outro. */

#include <stdio.h>
#include <stdlib.h> /* Fun��o respons�vel por realizar chamadas ao sistema e executar o que for passado como par�metro. */

int main () {
	
	int vetorA[5], vetorB[5];
	int i;
	bool diferenca;
	
	for (i = 0; i < 5; i++){
		
		printf("\nDigite o elemento %d do vetor A: ", i+1);
		scanf("%d", &vetorA[i]);
		
		printf("\nDigite o elemento %d do vetor B: ", i+1);
		scanf("%d", &vetorB[i]);
	}
	
	system("cls"); /* Fun��o respons�vel por limpar a tela do terminal (clear screen) antes de executar os pr�ximos comandos. */
	
	i = 0;
	diferenca = false;
	
	while (i < 5){
		
		if (vetorA[i] != vetorB[i]){
			diferenca = true;
			printf("\nDiferencas encontradas:\n");
			printf("\nVetor A, posicao %d Valor %d\n", i, vetorA[i]);
			printf("\nVetor B, posicao %d Valor %d\n", i, vetorB[i]);
		}
		
		i++; 
	}
		if (diferenca == false){
			printf("\nOs vetores sao identicos! Nenhuma diferenca foi encontrada.");
		}
		return(0);	
}
	 
