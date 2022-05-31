
/* Construa um programa que possibilite calcular a área total de uma residência (sala, cozinha, banheiro, quartos, etc.) O programa
deve solicitar a entrada do nome, a largura e o comprimento de determinado cômodo até que o nome do cômodo seja "FIM". O programa
deve apresentar o valor total acumulado da área residencial. */


#include <stdio.h>

int main () {
	
	int comodo;
	float largura, comprimento, totalArea;
	
	printf("Bem-vindo ao calculador de area residencial!\n");
	
	totalArea = 0;
	
	printf("\nInforme o numero do comodo: \n\n1 - Sala \n2 - Cozinha \n3 - Banheiro \n4 - Quarto \n5 - Quintal \n6 - FIM\n\n");
	scanf("%d", &comodo);
	
	if (comodo == 6){
		printf("\nAte a proxima!\n");
	} else {
	
	do {
		
		switch (comodo){
			case 1:
				printf("\nInforme a largura da sala em metros: ");
				scanf("%f", &largura);
				
				printf("\nInforme o comprimento da sala em metros: ");
				scanf("%f", &comprimento);
				
				totalArea += largura * comprimento;
				break;
			case 2:
				printf("\nInforme a largura da Cozinha em metros: ");
				scanf("%f", &largura);
				
				printf("\nInforme o comprimento da Cozinha em metros: ");
				scanf("%f", &comprimento);
				
				totalArea += largura * comprimento;
				break;
			case 3:
				printf("\nInforme a largura do Banheiro em metros: ");
				scanf("%f", &largura);
				
				printf("\nInforme o comprimento do Banheiro em metros: ");
				scanf("%f", &comprimento);
				
				totalArea += largura * comprimento;
				break;
			case 4:
				printf("\nInforme a largura do Quarto em metros: ");
				scanf("%f", &largura);
				
				printf("\nInforme o comprimento do Quarto em metros: ");
				scanf("%f", &comprimento);
				
				totalArea += largura * comprimento;
				break;
			case 5:
				printf("\nInforme a largura do Quintal em metros: ");
				scanf("%f", &largura);
				
				printf("\nInforme o comprimento do Quintal em metros: ");
				scanf("%f", &comprimento);
				
				totalArea += largura * comprimento;
				break;
			case 6:
				printf("\nAte a proxima!\n");
			default:
				printf("\nComodo Invalido.\n");
				break;
		}
		
		printf("\nInforme o numero do comodo: \n\n1 - Sala \n2 - Cozinha \n3 - Banheiro \n4 - Quarto \n5 - Quintal \n6 - FIM\n\n");
		scanf("%d", &comodo);
		
	} while (comodo != 6);
	
		printf("\nA metragem total da residencia e de: %.2f metros quadrados", totalArea);
	}
	
	return(0);
}		
