
/* Elabore um algoritmo que receba duas matrizes inteiras e apresente a soma e a diferença entre elas. */

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int matriz1[5][5], matriz2[5][5];
	int i, j, soma1, soma2, somaT, diferenca;
	
	soma1 = 0;
	soma2 = 0;
	somaT = 0;
	diferenca = 0;
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			printf("\nInsira os dados da linha %d, coluna %d da PRIMEIRA matriz: ", i+1, j+1);
			scanf("%d", &matriz1[i][j]);
			fflush(stdin);
			
			soma1 += matriz1[i][j];
		}
	}
	
	system("cls");
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			printf("\nInsira os dados da linha %d, coluna %d da SEGUNDA matriz: ", i+1, j+1);
			scanf("%d", &matriz2[i][j]);
			fflush(stdin);
			
			soma2 += matriz2[i][j];
		}
	}
	
	system("cls");
	
	somaT = soma1 + soma2;
	diferenca = soma1 - soma2;
	
	printf("\nA soma das duas matrizes e igual a %d", somaT);
	printf("\nA diferenca entre as duas matrizes e igual a %d", diferenca);
	
	
	return(0);
	
}
