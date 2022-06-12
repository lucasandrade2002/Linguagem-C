
/* Elabore um algoritmo para efetuar o cadastro de 20 livros e imprimi-los. O cadastro deve conter as seguintes informações:
   - título;
   - autor;
   - editora;
   - edção;
   - ano. */
   
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h> //Devemos incluir esta biblioteca se quisermos usar tipos booleanos em nossos programas.

struct livro {
	char titulo[20];
	char autor[50];
	char editora[20];
	int edicao;
	int ano;	
};

int main (){
	
	int cadastro, impressao, operacao, i, count;
	struct livro acervo[20];
	bool novo_cadastro;
	char opcao;
	
	setlocale(LC_ALL, "Portuguese"); //Método para configuração de palavras com acentuação e caracteres especiais
	
	printf("Bem-vindo ao sistema de cadastro e impressão de livros!\n\n");
	
	printf("Que tipo de operação você deseja realizar?\n\n1 - Cadastro de livros\n2 - Impressão de livros\n\n");
	scanf("%d", &operacao);
	fflush(stdin);
	
	cadastro = 1;
	impressao = 2;
	count = 0;
	
	system("cls");
	
	if (operacao > 2 || operacao < 1){
		
		printf("Opção Inválida!");
		
	} else if (operacao == cadastro){
		
		i = 0;
		novo_cadastro = true;
		
		while (novo_cadastro){
			
			printf("\nDigite o titulo do livro %d: ", i+1);
			scanf("%20[^\n]s", acervo[i].titulo);
			fflush(stdin);
			
			printf("\nDigite o nome do autor(a) do livro %d: ", i+1);
			scanf("%50[^\n]s", acervo[i].autor);
			fflush(stdin);
			
			printf("\nDigite a editora que publicou o livro %d: ", i+1);
			scanf("%20[^\n]s", acervo[i].editora);
			fflush(stdin);
			
			printf("\nQual a edição do livro %d? ", i+1);
			scanf("%d", &acervo[i].edicao);
			fflush(stdin);
			
			printf("\nPor último, informe em que ano ele foi lançado: ");
			scanf("%d", &acervo[i].ano);
			fflush(stdin);
			
			system("cls");
			
			printf("Você deseja cadastrar outro livro? [S/N] ");
			scanf("%c", &opcao);
			fflush(stdin);
			
			if(opcao == 'N' || opcao == 'n'){
				novo_cadastro = false;
			}
			
			count++;
			i++;
		}
		
	operacao = 0;
		
	printf("\nVocê deseja imprimir os livros? (1-Não/2-Sim) ");
	scanf("%d", &operacao);
	
		if(operacao == impressao){
		
			for(i = 0; i < count; i++){
			
				printf("\nO livro %d é: %s\n", i+1, acervo[i].titulo);
				printf("\nAutor(a): %s\n\nEditora: %s\n\nEdição: %d\n\nAno: %d\n", acervo[i].autor, acervo[i].editora, acervo[i].edicao, acervo[i].ano);
			}
		} else {
			printf("\nOk. Os livros estão cadastrados no sistema!");
		}
	}
	
	return(0);
}
	
