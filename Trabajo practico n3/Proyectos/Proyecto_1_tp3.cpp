#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main() {
	int ingreso = 0;
	int acumuladorIngreso = 0;
	int i = 0;
	float promedio = 0;
	
	for(i; i<25; i++) {
		printf("Ingrese un numero: ");
		scanf("%d", &ingreso);
		
		acumuladorIngreso += ingreso;
	}

	promedio = acumuladorIngreso / 25;
	
	printf("El promedio de los numeros es de: %.2f", promedio);
	
	return 0;
}
