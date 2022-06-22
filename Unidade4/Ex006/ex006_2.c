
/* Faça um programa que efetue a leitura dos nomes de cinco alunos e, também, de suas quatro notas bimestrais.
Calcule a média de cada aluno e apresente os nomes classificados em ordem crescente de média. */
   
#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro{
	char nome[30];
	short int notas[4];
	float media;
}cadastro;

int main(){
	
	cadastro aluno[5];
	int i, j, troca, soma;
	
	printf("Bem-vindo ao sistema de Calculo de Medias!\n");
	
	soma = 0;
	
	for(i = 0; i < 5; i++){
		printf("\nInsira o nome do aluno %d: ", i+1);
		scanf("%30[^\n]s", aluno[i].nome);
		fflush(stdin);
		
		for(j = 0; j < 4; j++){
			printf("\nNota %d do aluno %s: ",j+1,aluno[i].nome);
			scanf("%d", &aluno[i].notas[j]);
			fflush(stdin);

			soma += aluno[i].notas[j];
		}
		aluno[i].media = soma/4;
		soma = 0;
	}
	
	system("cls");
	
	for(i = 0; i < 5; i++){
		for(j = i+1; j < 5; j++){
			if(aluno[i].media > aluno[j].media){
				troca = aluno[i].media;
				aluno[i].media = aluno[j].media;
				aluno[j].media = troca;
			}
		}
	}
	
	i = 0;
	
	while(i < 5){
		printf("\nAluno: %s \nMedia Final: %.2f\n", aluno[i].nome, aluno[i].media);
		i++;
	}
	
	return(0);
}
