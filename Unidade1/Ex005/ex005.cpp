
/* Escreva um programa que calcule o raio e o perímetro de um círculo. 
  A área é dada pela fórmula: A = pi.r² e o perímetro é a medida do contorno do objeto, dado por P = 2pi.r²*/
   
#include <stdio.h>
#include <math.h>

int main() {
	
	float pi, area, raio, perimetro;
	
	printf("Digite o valor da area do circulo: ");
	scanf("%f", &area);
	
	pi = 3.14;
	
	raio = sqrt(area/pi);
	perimetro = (2*pi) * (raio*raio);
	
	printf("\nO valor do raio e igual a: %2.f", raio );
	printf("\nO valor do perimetro e igual a: %2.f", perimetro );
	
	return(0);	 
}
