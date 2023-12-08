#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main() {
	int n;
	int positivo = 0;
	int negativo = 0;
	int ceros = 0;
	float promedioPos = 0;
	float promedioNeg = 0;
	int i = 1;
	
	do {
		printf("\nIngrese el numero %i: ", i);
		scanf("%f", &n);
		
		i++;
		if (n > 0) {
			positivo ++;
		} 
		else if (n < 0) {
			negativo++;
		}
		else {
			ceros++;
		}
	} while (n != 0);


	promedioPos = (positivo * 100) / i;
	printf("El promedio de numeros positivos es del: %.2f\n\n", promedioPos);
	
	promedioNeg = (negativo * 100) / i;
	printf("El promedio de numeros negativos es del: %.2f\n\n", promedioNeg);
	
	printf("La cantidad de numeros ceros es: %d\n\n", ceros);
	
	return 0;
}
