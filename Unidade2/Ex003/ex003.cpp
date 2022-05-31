
#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	switch(numero){
		case 1: printf("O numero digitado corresponde ao mes de: Janeiro");
		break;
		case 2: printf("O numero digitado corresponde ao mes de: Fevereiro");
		break;
		case 3: printf("O numero digitado corresponde ao mes de: Marco");
		break;
		case 4: printf("O numero digitado corresponde ao mes de: Abril");
		break;
		case 5: printf("O numero digitado corresponde ao mes de: Maio");
		break;
		case 6: printf("O numero digitado corresponde ao mes de: Junho");
		break;
		case 7: printf("O numero digitado corresponde ao mes de: Julho");
		break;
		case 8: printf("O numero digitado corresponde ao mes de: Agosto");
		break;
		case 9: printf("O numero digitado corresponde ao mes de: Setembro");
		break;
		case 10: printf("O numero digitado corresponde ao mes de: Outubro");
		break;
		case 11: printf("O numero digitado corresponde ao mes de: Novembro");
		break;
		case 12: printf("O numero digitado corresponde ao mes de: Dezembro");
		break;
	}
}
