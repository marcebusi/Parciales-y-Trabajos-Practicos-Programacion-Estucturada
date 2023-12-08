#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main() {
	float primero = 0;
	float ultimo = 0;
	float tiempo = 0;
	float total = 0;
	int numeroAuto = 0;
	int ganador = 0;
	int perdedor = 0;
	int cont = 1;
	
	printf("Bienvenido a la carrera, para finalizarla ingrese 1000 en ambas entradas de datos\n\n");
	
	printf("\nIngrese el numero de auto %d: ", cont);
	scanf("%d", &numeroAuto);
	
	printf("\nIngrese el tiempo en el que llego a la meta %d: ", cont);
	scanf("%f", &tiempo);
		
	while (numeroAuto < 1000) {
		if(cont==1) {
			primero = tiempo;
			ultimo = tiempo;
			ganador = numeroAuto;
			perdedor = numeroAuto;
		}
		else {
			if (tiempo < primero) {
				primero = tiempo;
				ganador = numeroAuto;
			}
			if (tiempo > ultimo) {
				ultimo = tiempo;
				perdedor = numeroAuto;
			}
		}	
		cont++;
		
		printf("\nIngrese el numero de auto %d: ", cont);
		scanf("%d", &numeroAuto);
	
		printf("\nIngrese el tiempo en el que llego a la meta %d: ", cont);
		scanf("%f", &tiempo);
	}
	
	printf("El auto ganador es %d\n", ganador);
	printf("El auto que finalizo ultimo es %d", perdedor);

	return 0;
}
