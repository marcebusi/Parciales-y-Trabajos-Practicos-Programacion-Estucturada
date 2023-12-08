#include <stdio.h>
#include <conio.h>
#include <math.h>                                          // Se utiliza la funcion .math para utilizar raices y potencias

int main() {
	
	int a, b, superficie, perimetro;                       // Se definen todas las variables de forma ordenada
	float diagonal;

	
	printf("Ingrese el valor a del rectangulo: ");         // Se solicita el ingreso de los 2 lados del triangulo
	scanf("%d", &a);
	
	printf("Ingrese el valor b del rectangulo: ");
	scanf("%d", &b);
	
		
	perimetro = 2 * (a + b);                              // Acá estan todas las operaciones que determinan
	diagonal = (sqrt(pow(a, 2) + pow(b, 2)));             // los resultados faltantes del triangulo rectangulo
	superficie = a * b;
	
	
	printf("\nEl resultado del perimetro es: %d cm", perimetro);
	printf("\nEl resultado de la diagonal es: %f cm", diagonal);
	printf("\nEl resultado de la superficie es: %d cm^2", superficie);
	
	return 0;
}
