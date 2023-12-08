#include <iostream>
#include <cmath> 

int main() {
	int edad1, edad2;
	float altura1, altura2;
	
	printf("Ingrese la edad de la primer persona: ");
	scanf("%d", &edad1);
	printf("Ingrese la estatura de la primer persona: ");
	scanf("%f", &altura1);
	printf("Ingrese la edad de la segunda persona: ");
	scanf("%d", &edad2);
	printf("Ingrese la estatura de la segunda persona: ");
	scanf("%f", &altura2);
	
	
	if (edad1 > edad2) {
		printf("La persona de %d anos mide %.2f mts\n", edad1, altura1);
	} 
	else if (edad2 > edad1) {
		printf("La persona de %d anos mide %.2f mts\n", edad2, altura2);
	}
	else {
		printf("Las edades de ambas personas son iguales");
	}
	return 0;
}
