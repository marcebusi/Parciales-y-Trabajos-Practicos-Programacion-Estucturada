#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main() {
	float max = 0;
	float min = 0;
	float temp = 0;
	float promedio = 0;
	float total = 0;
	int cont = 1;
	
	
	printf("\nIngrese el valor de la temperatura %d: ", cont);
	scanf("%f", &temp);
		
	while (temp < 1000) {
		if(cont==1) {
			max=temp;
			min=temp;
		}
		else {
			if (temp > max) {
				max=temp;
			}
			if (temp < min) {
				min=temp;
			}
		}	
		cont++;
		
		printf("\nIngrese el valor de la temperatura %d: ", cont);
		scanf("%f", &temp);
	}
	
	printf("El valor maximo es %.2f\n", max);
	printf("El valor minimo es %.2f\n", min);

	return 0;
}
