#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main() {
	int sueldo;
	int sueldoSuma = 0;
	int acumuladorIngreso = 0;
	float promedio = 0;
	
	printf("Bienvenido al calculador de sueldos, para salir del programa ingrese 0\n\n");
	
	do {
		printf("Ingrese un numero: ");
		scanf("%d", &sueldo);
	
		if (sueldo > 0) {
			sueldoSuma += sueldo;
			acumuladorIngreso++;
		} 
	} while (sueldo != 0);
	
	
	promedio = sueldoSuma / acumuladorIngreso;
	
	printf("El promedio de los sueldos es de: %.2f\n\n", promedio);
	printf("La suma de los sueldos es de: %d", sueldoSuma);
	
	return 0;
	system("pause");
	}
