
/* Escreva um programa que calcule o raio e o per�metro de um c�rculo. 
  A �rea � dada pela f�rmula: A = pi.r� e o per�metro � a medida do contorno do objeto, dado por P = 2pi.r�*/
   
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
