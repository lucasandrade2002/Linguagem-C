
#include <stdio.h>

int main () {
	
	int vetor[10];
	int i, j, troca;
	
	i = 0;
	
	while (i < 10){
		printf("\nDigite o elemento %d do vetor: ", i+1);
		scanf("%d", &vetor[i]);
		fflush(stdin);
		i++;
	}
	
	for(i = 0; i < 9; i++){
		for(j = i+1; j < 10; j++){
			if(vetor[i] > vetor[j]){
				troca = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = troca;
			}
		}
	}
	
	for(i = 0; i < 10; i++){
		printf("%d - ", vetor[i]);
	}
	
	return(0);
}
