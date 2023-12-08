#include <stdio.h>
#include <conio.h>

int main() {
	
	int valor_vehiculo, cantidad_vehiculos, plus_valor_vehiculos, valor_constantes, sueldo;
	int liquidacion = 500;
	float plus = 0.1;
	int valor_constante = 50;
	
	printf("Ingrese el valor del vehiculo: ");
	scanf("%d", &valor_vehiculo);
	
	printf("Ingrese la cantidad de vehiculos vendida: ");
	scanf("%d", &cantidad_vehiculos);
	
	plus_valor_vehiculos = (valor_vehiculo * cantidad_vehiculos) * plus;
	valor_constantes = valor_constante * cantidad_vehiculos;
	sueldo = liquidacion + plus_valor_vehiculos +  valor_constantes;
	
	printf("Su sueldo total es de: %d$", sueldo);


	return 0;
}
