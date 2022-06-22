
/* Elabore um algoritmo para efetuar o cadastro de 30 contatos. O cadastro deve conter as seguintes informa��es:
   - nome
   - telefone
   - email */
   
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct dados {
	char nome[50];
	char telefone[20];
	char email[30];
};

int main () {
	
	struct dados contatos[30];
	int i, opcao;
	int count;
	
	setlocale(LC_ALL,"Portuguese");

	printf("Bem-vindo(a) a sua agenda eletr�nica de contatos!");
	
	printf("\n\nInforme abaixo que opera��o deseja realizar: \n\n1 - Cadastrar novo contato \n2 - Ver os dados do(s) contato(s) \n3 - Sair da agenda \n\n");
	scanf("%d", &opcao);
	fflush(stdin);
	
	i = 0;
	count = 0;
	
	system("cls");
	
	if (opcao == 1){
		while (i < 30 && opcao == 1){
			printf("Insira o nome do contato %d: ", i+1);
			scanf("%50[^\n]s", contatos[i].nome);
			fflush(stdin);
			
			printf("\n\nInsira o telefone do contato %d: ", i+1);
			scanf("%20[^\n]s", contatos[i].telefone);
			fflush(stdin);
			
			printf("\n\nInsira o e-mail do contato %d: ", i+1);
			scanf("%30[^\n]s", contatos[i].email);
			fflush(stdin);
			
			printf("\n\nDeseja cadastrar outro contato? (1-Sim/4-N�o) ");
			scanf("%d", &opcao);
			fflush(stdin);
			
			count++;
			
			if(opcao == 4){
				printf("\nOk. Seu contato(s) j� est� salvo!");
				printf("\n\nDeseja imprimir os seus contatos? (2-Sim/4-N�o) ");
				scanf("%d", &opcao);
			} else {
				i++;
				system("cls");
			}
		}		
	}
	
		if (opcao == 2){
		printf("\nSegue abaixo uma lista com os seus contatos cadastrados:");
		
		for (i=0;i<count;i++){
			printf("\n\nNome do contato %d: %s \nTelefone do contato %d: %s \nE-mail do contato %d: %s ", i+1, contatos[i].nome, i+1, contatos[i].telefone, i+1, contatos[i].email);			
		}
		} else if (opcao == 3){
			printf("Ok, at� uma pr�xima!");
		}
		
		return(0);	
}
