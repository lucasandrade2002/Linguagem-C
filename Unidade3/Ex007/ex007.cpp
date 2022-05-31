
/* Faça um programa que leia um conjunto de pedidos e calcule o valor total da compra.
   O pedido possui os seguintes campos: número, data(dia, mês, ano), preço unitário
   e quantidade. A entrada de pedidos é encerrada quando o usuário informa zero 
   como pedido. */
   
#include <stdio.h>

int main(){
	
	int numero, data, mes, ano, qtde, pedido;
	float precoUnitario, totalCompra;
	
	pedido = 1;
	totalCompra = 0;
	precoUnitario = 27.00;
	
	printf("*****Bem-vindo ao restaurante do Lucas!*****\n");
	
	printf("\nO preco unitario dos nossos produtos e de R$27.00\n");
	
	printf("\nInforme o numero do pedido: ");
	scanf("%d", &pedido);
	
	if (pedido == 0){
		printf("\nObrigado pela resposta. Tenha um otimo dia!");
	} else{
		
		do {
		
		printf("\nData do pedido: ");
		scanf("%d", &data);
		
		printf("\nMes do pedido: ");
		scanf("%s", &mes);
		
		printf("\nAno do pedido: ");
		scanf("%d", &ano);
		
		printf("\nQuantos pratos/produtos voce deseja? ");
		scanf("%d", &qtde);
		
		totalCompra += (precoUnitario * qtde);
		
		printf("\nInforme o numero do pedido: ");
		scanf("%d", &pedido);	
		
	} while (pedido != 0);
	
	  printf("\nO valor total fica na quantia de: R$%.2f", totalCompra);		
	}
	
	return(0);
}
