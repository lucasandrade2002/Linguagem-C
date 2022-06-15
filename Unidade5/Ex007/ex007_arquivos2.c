
/* Escreva um algoritmo que permita ao usuário gravar dez palavras em um arquivo e, em seguida, efetue a leitura
do arquivo e apresente o conteúdo em tela. */

/*ch = getchar(); Função que coleta uma letra do usuário.
printf("%c", ch); */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 50

int main(){
	
	FILE *arq;
	char palavra[MAX];
	char leitura[200];
	bool novo_registro;
	char opcao;
	int count, i;
	
	arq = fopen("arquivo.txt", "w");
	
	novo_registro = true;
	count = 1;
	
	if(arq == NULL) printf("O arquivo nao foi aberto. Ocorreu um erro!\n");
	else {
		printf("O arquivo foi aberto com sucesso!\n");
		
		printf("\nDigite uma palavra para grava-la no arquivo: ");
		scanf("%50[^\n]s", palavra);
		fflush(stdin);
		
		fputs(palavra, arq);
		
			while (novo_registro){
				
				printf("\nDeseja gravar uma nova palavra? [S/N] ");
				scanf("%c", &opcao);
				fflush(stdin);
				
				if(opcao == 'n' || opcao == 'N'){
					break;
				} else {	
				
					printf("\nDigite uma palavra para grava-la no arquivo: ");
					scanf("%50[^\n]s", palavra);
					fflush(stdin);
					
					fputs(palavra, arq);
					count += 1;
			}	 		
		}
			fclose(arq);
		
			arq = fopen("arquivo.txt", "r");
			
			fgets(leitura, 200, arq);
			
			system("cls");
			
			printf("\nAs palavras que estao armazenadas no arquivo sao:\n");
			printf("\n- %s", leitura);
			
			fclose(arq);
	}
	
	return(0);
}	
