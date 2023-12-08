#include <stdio.h>
#include <conio.h>

int main() {
	
	int carnes, verduras, compratotal;
	
	printf("Ingrese el valor de las carnes: ");
	scanf("%d", &carnes);
	
	printf("Ingrese valor de las verduras: ");
	scanf("%d", &verduras);
	
	compratotal = carnes + verduras;
	
	printf("El monto total es de: %d$", compratotal);
	
	return 0;
}



	


