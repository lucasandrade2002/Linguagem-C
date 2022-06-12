
/* Elabore um algoritmo que leia a idade, o peso, o sexo e o estado civil de várias pessoas e imprima a quantidade daquelas que:
são casadas, solteiras, separadas e viúvas. Apresente a média de idade e de peso. O algoritmo finaliza quando foi digitado o 
numero 0. */

#include <stdio.h>

int main(){
	
	char sexo[10];
	int idade, totalIdade, casadas, solteiras, separadas, viuvas, estado_civil;
	float peso, totalPeso, mediaIdade, mediaPeso;
	
	int i = 0;
	peso = 0;
	
	idade = 0;
	
	printf("Por favor, informe a idade da pessoa 1: ");
	scanf("%d", &idade);
	fflush(stdin);
	
	totalIdade = idade;
	
	if (idade == 0){
		printf("Obrigado por sua resposta. Ate a proxima!");
	} else{
		
		casadas = 0;
		solteiras = 0;
		separadas = 0;
		viuvas = 0;
		
		i = 1;
		
		while (idade != 0){
		
			printf("\nPor favor, informe o peso da pessoa %d: ", i);
			scanf("%f", &peso);
		
			totalPeso += peso;
		
			printf("\nPor favor, informe o genero da pessoa %d (Homem/Mulher): ", i);
			scanf("%s", sexo);
		
			printf("\nPor favor, informe o estado civil da pessoa %d\n(1-Casada 2-Solteira 3-Separada 4-Viuva): ", i);
			scanf("%d", &estado_civil);
		
			if(estado_civil == 1){
				casadas++;
			} else if (estado_civil == 2){
				solteiras++;
			} else if (estado_civil == 3){
				separadas++;
			} else if (estado_civil == 4){
				viuvas++;
			}
		
			i += 1;
		
			printf("\nPor favor, informe a idade da pessoa %d: ", i);
			scanf("%d", &idade);
			
		
			totalIdade += idade;
		
		}
		
		mediaIdade = totalIdade/(i - 1);
		mediaPeso = totalPeso/(i - 1);

		printf("\nA media de idade das pessoas cadastradas e: %.2f anos\n", mediaIdade);
		printf("\nA media de peso das pessoas cadastradas e: %.2fKg\n", mediaPeso);
		printf("\nPessoas Casadas: %d pessoa(s).\n", casadas);
		printf("\nPessoas Solteiras: %d pessoa(s).\n", solteiras);
		printf("\nPessoas Separadas: %d pessoa(s).\n", separadas);
		printf("\nPessoas Viuvas: %d pessoa(s).", viuvas);		
	}
	
		return(0);
	
}
