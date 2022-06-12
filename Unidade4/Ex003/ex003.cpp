
/* Elabore um algoritmo que leia uma palavra e, se ela tiver número ímpar de caracteres, imprima todas as suas vogais. */

#include <stdio.h>
#include <string.h>

int main (){
	
	char word[50];
	char letter;
	int width, i;
	
	printf("Digite uma frase: ");
	gets(word);
	
	width = strlen(word); //function that display the width of string.
	
	strlwr(word);
	
	if (width % 2 != 0){
		for (i = 0; i < width; i++){
			letter = word[i];
			if(letter == 'a'){
				printf("\nEssa palavra tem a vogal %c", letter);
			} else if (letter == 'e'){
				printf("\nEssa palavra tem a vogal %c", letter);
			} else if (letter == 'i'){
				printf("\nEssa palavra tem a vogal %c", letter);
			} else if (letter == 'o'){
				printf("\nEssa palavra tem a vogal %c", letter);
			} else if (letter == 'u'){
				printf("\nEssa palavra tem a vogal %c", letter);
			}
		}
	} else {
		printf("Esta palavra tem %d caracteres.", width);
	}
	
	return(0);
	
}
