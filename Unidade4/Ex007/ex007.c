
/* Elabore um algoritmo para efetuar o cadastro de 20 livros e imprimi-los. O cadastro deve conter as seguintes informa��es:
   - t�tulo;
   - autor;
   - editora;
   - ed��o;
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
	
	setlocale(LC_ALL, "Portuguese"); //M�todo para configura��o de palavras com acentua��o e caracteres especiais
	
	printf("Bem-vindo ao sistema de cadastro e impress�o de livros!\n\n");
	
	printf("Que tipo de opera��o voc� deseja realizar?\n\n1 - Cadastro de livros\n2 - Impress�o de livros\n\n");
	scanf("%d", &operacao);
	fflush(stdin);
	
	cadastro = 1;
	impressao = 2;
	count = 0;
	
	system("cls");
	
	if (operacao > 2 || operacao < 1){
		
		printf("Op��o Inv�lida!");
		
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
			
			printf("\nQual a edi��o do livro %d? ", i+1);
			scanf("%d", &acervo[i].edicao);
			fflush(stdin);
			
			printf("\nPor �ltimo, informe em que ano ele foi lan�ado: ");
			scanf("%d", &acervo[i].ano);
			fflush(stdin);
			
			system("cls");
			
			printf("Voc� deseja cadastrar outro livro? [S/N] ");
			scanf("%c", &opcao);
			fflush(stdin);
			
			if(opcao == 'N' || opcao == 'n'){
				novo_cadastro = false;
			}
			
			count++;
			i++;
		}
		
	operacao = 0;
		
	printf("\nVoc� deseja imprimir os livros? (1-N�o/2-Sim) ");
	scanf("%d", &operacao);
	
		if(operacao == impressao){
		
			for(i = 0; i < count; i++){
			
				printf("\nO livro %d �: %s\n", i+1, acervo[i].titulo);
				printf("\nAutor(a): %s\n\nEditora: %s\n\nEdi��o: %d\n\nAno: %d\n", acervo[i].autor, acervo[i].editora, acervo[i].edicao, acervo[i].ano);
			}
		} else {
			printf("\nOk. Os livros est�o cadastrados no sistema!");
		}
	}
	
	return(0);
}
	
