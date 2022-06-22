
/* Faça um programa que efetue a leitura dos nomes de cinco alunos e, também, de suas quatro notas bimestrais.
Calcule a média de cada aluno e apresente os nomes classificados em ordem crescente de média. */

#include <stdio.h>
#include <stdlib.h>

typedef struct dados{
	char nome[20];
	short int notas[4];
	float media;
}cadastro;

int main(){
	
	cadastro boletim[5]; // boletim[0] = {nome:, [nota 0: , nota 1: , nota 2: , nota 3: ], media: };
	cadastro boletimTmp; //Registro auxiliar que efetuou a troca de posições na ordenação dos vetores do tipo cadastro;
	int i,j;
	float soma = 0;
	
	for(i = 0; i < 5; i++){
		printf("Insira o nome do aluno %d: ", i+1);
		scanf("%20[^\n]s", boletim[i].nome);
		fflush(stdin);
		
		for(j = 0; j < 4; j++){
			printf("\nNota %d do aluno %s: ",j+1,boletim[i].nome);
			scanf("%d", &boletim[i].notas[j]);
			fflush(stdin);

			soma += boletim[i].notas[j];
		}
		
		boletim[i].media = soma/4;
		soma = 0;
		system("cls");
	}
	
	for(i = 0; i < 4; i++){
		for(j = i+1; j < 5; j++){
			if(boletim[i].media > boletim[j].media){
				boletimTmp = boletim[i];
				boletim[i] = boletim[j];
				boletim[j] = boletimTmp;
			}
		}
	}
	
	for(i = 0; i < 5; i++){
		printf("\nAluno: %s \nMedia: %.2f\n", boletim[i].nome, boletim[i].media);
	}	
	
	return(0);
}
