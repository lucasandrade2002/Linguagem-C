
/* Construa um programa que permita ao usuário gravar dez palavras em um arquivo e, em seguida, efetue a leitura do arquivo e apresnete
o conteúdo dele em tela. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	
	FILE *arq;
	char palavra[50], texto[50], opcao;
	int i;
	bool nova_palavra;
	
	arq = fopen("arquivo.txt", "r+");
	
	if(arq == NULL){
		printf("O arquivo nao foi aberto. Ocorreu algum erro!");
	}else {
		
		nova_palavra = true;
		
		for(i = 0; i < 10; i++){
			
			if(nova_palavra){
			}
				printf("\nDigite uma palavra para grava-la no arquivo: ");
				scanf("%50[^\n]s", palavra);
				fflush(stdin);
				
				fputs(palavra, arq);
				
				if(ferror(arq)){
					printf("Ocorreu um erro na gravacao!");
				}
			
				printf("\nDeseja gravar uma nova palavra?[S/N] ");
				scanf("%c", &opcao);
				fflush(stdin);
				
				if(opcao == 'n' || opcao == 'N'){
					nova_palavra = false;
					
					printf("\nDeseja imprimir na tela as palavras gravadas no arquivo?[S/N] ");
					scanf("%c", opcao);
					fflush(stdin);
					
					if(opcao == 's' || opcao == 'S'){
						
						fgets(texto, 49, arq);	
						printf("\n%s", texto);
				}
			}
		}
		
		fclose(arq);
	}
	
	return(0);	
}
