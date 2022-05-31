
/* Construa um algoritmo que apresente todos os números divisíveis por três e por sete
   que sejam menores que 30. */
   
#include <stdio.h>

int main () {
	
	int num, i;
	
	i = 1;
	
	while (i < 30){
		if (3 % i == 0 && 7 % i == 0){
			num = i;
			printf("O numero %d e divisivel por 3 e por 7.\n",num);
		}
		
		i += 1;
	}
	
	return(0);
}
