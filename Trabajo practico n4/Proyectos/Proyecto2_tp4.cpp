#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main() {
	int factura;
	int facturaTotal = 0;
	int factura1000 = 0;
	int factura10000 = 0;
	int factura47 = 0;
	int i = 1;
	
	do {
		printf("\nIngrese el valor de la factura %i: ", i);
		scanf("%d", &factura);
		
		i++;
		facturaTotal += factura;
		if (factura >= 1000) {
			factura1000 ++;
		}
		if (factura >= 10000) {
			factura10000++;
		}
		else if (factura >= 400 and factura <= 700) {
			factura47++;
		}
	} while (factura != 0);


	
	printf("\n\nEl valor de la factura total es de: %d$\n\n", facturaTotal);
	printf("La cantidad de facturas que superan los 1000$ son: %d\n\n", factura1000);
	printf("La cantidad de facturas que superan los 10000$ son: %d\n\n", factura10000);
	printf("La cantidad de facturas que estan entre 400$ y 700$ son: %d\n\n", factura47);
	
	return 0;
}
