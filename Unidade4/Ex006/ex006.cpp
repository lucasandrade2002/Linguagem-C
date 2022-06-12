
/* Faça um programa que efetue a leitura dos nomes de cinco alunos e, também, de suas quatro notas bimestrais.
   Calcule a média de cada aluno e apresente os nomes classificados em ordem crescente de média. */

#include <stdio.h>
#include <stdlib.h>

struct aluno {
	char nome[50];
	int nota1;
	int nota2;
	int nota3;
	int nota4;
};

int main () {
	
	struct aluno alunos[5];
	float media[5];
	int i, j, troca;
	
	i = 0;
	
	printf("Bem-vindo ao sistema de cadastro de notas!\n");
	
	while (i < 5){
		printf("\nDigite o nome do aluno %d: ", i+1);
		scanf("%50[^\n]s", &alunos[i].nome);
		fflush(stdin);
		
		printf("\nDigite a nota 1: ");
		scanf("%d", &alunos[i].nota1);
		fflush(stdin);
		
		printf("\nDigite a nota 2: ");
		scanf("%d", &alunos[i].nota2);
		fflush(stdin);
		
		printf("\nDigite a nota 3: ");
		scanf("%d", &alunos[i].nota3);
		fflush(stdin);
		
		printf("\nDigite a nota 4: ");
		scanf("%d", &alunos[i].nota4);
		fflush(stdin);
		
		media[i] = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3 + alunos[i].nota4) / 4; 
		
		system("cls");
		
		i += 1;
	}
	
	for(i = 0; i < 5; i++){
		printf("\nA media do aluno %s e igual a: %.2f", alunos[i].nome, media[i]);
	}
	
	return(0);
	
}
