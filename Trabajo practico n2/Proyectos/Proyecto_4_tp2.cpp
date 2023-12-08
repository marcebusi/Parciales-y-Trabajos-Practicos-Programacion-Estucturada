#include <stdio.h>
#include <conio.h>

int main() {
	int a, b, c;
	float promedio;
	
	printf("Ingrese el primer valor: ");
	scanf("%d", &a);
	printf("Ingrese el segundo valor: ");
	scanf("%d", &b);
	printf("Ingrese el tercer valor: ");
	scanf("%d", &c);
	
	promedio = (a+b+c) / 3;

	if (a > promedio) {
		printf("El primer numero con valor de %d es mayor al promedio", a);
		}	
	else if (b > promedio) {
		printf("El segundo numero con valor de %d es mayor al promedio", b);
	} 
	else if (c > promedio) {
		printf("El tercer numero con valor de %d es mayor al promedio", c);
	} 
	else {
		printf("\nNingun numero es mayor al promedio");
	}
	
	return 0;
}
