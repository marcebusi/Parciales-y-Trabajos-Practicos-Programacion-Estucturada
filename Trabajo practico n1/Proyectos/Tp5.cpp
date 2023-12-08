#include <stdio.h>
#include <conio.h> 
#include <math.h>     											// Se utiliza la funcion .math para utilizar raices y potencias
     
      
int main() {
	
	int base, altura, superficie, perimetro;                     // Se definen todas las variables de forma ordenada
	float hipotenusa;

	
	printf("Ingrese la base del triangulo rectangulo: ");        // Se solicita el ingreso de los 2 lados del triangulo
	scanf("%d", &base);
	
	printf("Ingrese la altura del triangulo rectangulo: ");
	scanf("%d", &altura);
	
		
	superficie = (base * altura) / 2;                             // Acá estan todas las operaciones que determinan
	hipotenusa = sqrt(pow(base, 2) + pow(altura, 2));             // los resultados faltantes del triangulo rectangulo
	perimetro = base + altura + hipotenusa;
	
	
	printf("\nEl resultado de la superficie es: %d", superficie);
	printf("\nEl resultado de la hipotenusa es: %f", hipotenusa);
	printf("\nEl resultado del perimetro es: %d", perimetro);
	
}
