#include <stdio.h>

/* Crie um programa que leia o nome do usu�rio e d� boas vindas a ele para o curso de L�gica de Programa��o II */

int main(){
	
	char nome[30];
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	printf("Bem-vindo(a)! a disciplina de Algoritmos e Logica de Programacao II %s", nome);
	return(0);
}
