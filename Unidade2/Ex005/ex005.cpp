
/* Faça um programa que receba o codigo do estado de origem da carga de um caminhão, o peso da carga em toneladas e o código dela. 
Calcule e apresente: O peso da carga em quilos, o preco da carga, o valor do imposto e o valor total da carga (preço da carga mais impostos).*/

#include <stdio.h>

int main () {
	
	int codigo_estado, codigo_carga;
	float peso_toneladas, peso_kg, preco, imposto, total;
	
	printf("\nDigite o codigo do estado de origem da carga (1/2/3/4): ");
	scanf("%d", &codigo_estado);
	
	printf("\nQual o peso da carga? (em kg): ");
	scanf("%f", &peso_toneladas);
	
	printf("\nInforme o codigo da carga (valores entre 10 e 40): ");
	scanf("%d", &codigo_carga);
	
	peso_kg = peso_toneladas/1000;
	
	printf("\nDe acordo com os dados informados:\n");
	
	if (codigo_estado == 1 && codigo_carga >= 10 && codigo_carga <= 20){
		preco = peso_kg * 180;
		imposto = preco * 20/100;
		total = preco + imposto;
		printf("\nPara o estado informado, o preco da carga em kg e: R$ %2.f reais. \nO valor do imposto (20 por cento) e de: R$ %2.f reais \nO preco total fica na quantia de: R$ %2.f reais", preco, imposto, total);
	} else if (codigo_estado == 1 && codigo_carga > 20 && codigo_carga <= 30){
		preco = peso_kg * 120;
		imposto = preco * 20/100;
		total = preco + imposto;
		printf("\nPara o estado informado, o preco da carga em kg e: R$ %2.f reais. \nO valor do imposto (20 por cento) e de: R$ %2.f reais \nO preco total fica na quantia de: R$ %2.f reais", preco, imposto, total);
	} else if (codigo_estado == 1 && codigo_carga > 30 && codigo_carga <= 40){
		preco = peso_kg * 230;
		imposto = preco * 20/100;
		total = preco + imposto;
		printf("\nPara o estado informado, o preco da carga em kg e: R$ %2.f reais. \nO valor do imposto (20 por cento) e de: R$ %2.f reais \nO preco total fica na quantia de: R$ %2.f reais", preco, imposto, total);
		
	} else if (codigo_estado == 2 && codigo_carga >= 10 && codigo_carga <= 20){
		preco = peso_kg * 180;
		imposto = preco * 15/100;
		total = preco + imposto;
		printf("\nPara o estado informado, o preco da carga em kg e: R$ %2.f reais. \nO valor do imposto (15 por cento) e de: R$ %2.f reais \nO preco total fica na quantia de: R$ %2.f reais", preco, imposto, total);
	} else if (codigo_estado == 2 && codigo_carga > 20 && codigo_carga <= 30){
		preco = peso_kg * 180;
		imposto = preco * 15/100;
		total = preco + imposto;
		printf("\nPara o estado informado, o preco da carga em kg e: R$ %2.f reais. \nO valor do imposto (15 por cento) e de: R$ %2.f reais \nO preco total fica na quantia de: R$ %2.f reais", preco, imposto, total);
	} else if (codigo_estado == 2 && codigo_carga > 30 && codigo_carga <= 40){
		preco = peso_kg * 180;
		imposto = preco * 15/100;
		total = preco + imposto;
		printf("\nPara o estado informado, o preco da carga em kg e: R$ %2.f reais. \nO valor do imposto (15 por cento) e de: R$ %2.f reais \nO preco total fica na quantia de: R$ %2.f reais", preco, imposto, total);
		
	} else if (codigo_estado == 3 && codigo_carga >= 10 && codigo_carga <= 20){
		preco = peso_kg * 180;
		imposto = preco * 10/100;
		total = preco + imposto;
		printf("\nPara o estado informado, o preco da carga em kg e: R$ %2.f reais. \nO valor do imposto (10 por cento) e de: R$ %2.f reais \nO preco total fica na quantia de: R$ %2.f reais", preco, imposto, total);
	} else if (codigo_estado == 3 && codigo_carga > 20 && codigo_carga <= 30){
		preco = peso_kg * 180;
		imposto = preco * 10/100;
		total = preco + imposto;
		printf("\nPara o estado informado, o preco da carga em kg e: R$ %2.f reais. \nO valor do imposto (10 por cento) e de: R$ %2.f reais \nO preco total fica na quantia de: R$ %2.f reais", preco, imposto, total);
	} else if (codigo_estado == 3 && codigo_carga > 30 && codigo_carga <= 40){
		preco = peso_kg * 180;
		imposto = preco * 10/100;
		total = preco + imposto;
		printf("\nPara o estado informado, o preco da carga em kg e: R$ %2.f reais. \nO valor do imposto (10 por cento) e de: R$ %2.f reais \nO preco total fica na quantia de: R$ %2.f reais", preco, imposto, total);
		
	} else if (codigo_estado == 4 && codigo_carga >= 10 && codigo_carga <= 20){
		preco = peso_kg * 180;
		imposto = preco * 5/100;
		total = preco + imposto;
		printf("\nPara o estado informado, o preco da carga em kg e: R$ %2.f reais. \nO valor do imposto (5 por cento) e de: R$ %2.f reais \nO preco total fica na quantia de: R$ %2.f reais", preco, imposto, total);
	} else if (codigo_estado == 4 && codigo_carga > 20 && codigo_carga <= 30){
		preco = peso_kg * 180;
		imposto = preco * 5/100;
		total = preco + imposto;
		printf("\nPara o estado informado, o preco da carga em kg e: R$ %2.f reais. \nO valor do imposto (5 por cento) e de: R$ %2.f reais \nO preco total fica na quantia de: R$ %2.f reais", preco, imposto, total);
	} else if (codigo_estado == 4 && codigo_carga > 30 && codigo_carga <= 40){
		preco = peso_kg * 180;
		imposto = preco * 5/100;
		total = preco + imposto;
		printf("\nPara o estado informado, o preco da carga em kg e: R$ %2.f reais. \nO valor do imposto (5 por cento) e de: R$ %2.f reais \nO preco total fica na quantia de: R$ %2.f reais", preco, imposto, total);
		
	} else if (codigo_estado > 4){
		printf("\nCodigo Invalido!");
	}
	
	return(0);
	
}
