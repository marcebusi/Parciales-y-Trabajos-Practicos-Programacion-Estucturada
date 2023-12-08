#include <stdio.h>
#include <conio.h>

int main() {
	
	int carnesrojas, carnesblancas, verduras, carnes, compratotal;
	
	printf("Ingrese el valor de las carnes rojas: ");
	scanf("%d", &carnesrojas);
	
	printf("Ingrese el valor de las carnes blancas: ");
	scanf("%d", &carnesblancas);
	
	printf("Ingrese el valor de las verduras: ");
	scanf("%d", &verduras);
	
	carnes = carnesrojas + carnesblancas;
	compratotal = carnes + verduras;
	
	printf("El monto total es de: %d$", compratotal);
	
	return 0;
}
