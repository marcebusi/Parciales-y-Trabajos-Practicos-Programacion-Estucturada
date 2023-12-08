#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main() {
	int numFact = 0;
	int cont = 0;
	int maxF = 0;
	int minF = 0;
	float monto = 0;
	float montoTotal = 0;
	float minM = 0;
	float maxM = 0;
	
	
	printf("\nIngrese el numero de factura : ");
	scanf("%i", &numFact);
		
	while (numFact != 0) {
		printf("Ingrese el monto de venta: ")
		scanf("%f", &monto);
		cont++;
		
		if(cont==1) {
			maxF = numFact;
			minF = numFact;
			maxM = monto;
			minM = monto;
		}
		else {
			if (monto > maxM) {
				maxF = numFact;
				maxM = monto;
			}
			if (monto < minM) {
				minF = numFact;
				minM = monto;
			}
		}	
		system("pause");
		system("cls");
		
		printf("\nIngrese el numero de factura : ");
		scanf("%i", &numFact);
	}
	system("cls");
	
	
	printf("la mejor venta fue con la factura %i, con un valor de %6.2f\n", maxF, maxM);
	printf("la peor venta fue con la factura %i, con un valor de %6.2f\n", minF, minM);

	return 0;
}
