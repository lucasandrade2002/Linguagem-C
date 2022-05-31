
/* Elabore um programa que receba o salário de um funcionário e o código do cargo e apresente o cargo, o valor do aumento e o novo salário.
1 - Servente: 40%, 2 - Pedreiro: 35%, 3 - Mestre de Obras: 20%, Técnico de Segurança: 10%. */

#include <stdio.h>

int main(){
	
	float salario, novo_salario, servente, pedreiro, mestre, tecnico;
	int codigo;
	
	printf("Informe seu salario atual: ");
	scanf("%f", &salario);
	
	printf("Informe seu codigo de cargo: ");
	scanf("%d", &codigo);
	
	if (codigo == 1){
		servente = salario + (salario*40/100);
		novo_salario = servente;
		printf("\nSeu novo salario, como servente, com percentual de aumento de 40 por cento e: %2.f", novo_salario);
	} else if (codigo == 2){
		pedreiro = salario + (salario*35/100);
		novo_salario = pedreiro;
		printf("\nSeu novo salario, como pedreiro, com percentual de aumento de 35 por cento e: %2.f", novo_salario);
	} else if (codigo == 3){
		mestre = salario + (salario*20/100);
		novo_salario = mestre;
		printf("\nSeu novo salario, como mestre de obras, com percentual de aumento de 20 por cento e: %2.f", novo_salario);
	} else if (codigo == 4){
		tecnico = salario + (salario*10/100);
		novo_salario = tecnico;
		printf("\nSeu novo salario, como tecnico de seguranca, com percentual de aumento de 10 por cento e: %2.f", novo_salario);
	} else {
		printf("\nCodigo Invalido!");
	}
	
	return(0);
}
