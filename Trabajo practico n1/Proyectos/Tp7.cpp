#include <stdio.h>
#include <conio.h>

int main() {
	
	int a, b, suma, producto, resta;
	
	printf("Ingrese el primer valor: ");
	scanf("%d", &a);
	
	printf("Ingrese el segundo valor ");
	scanf("%d", &b);
	
	suma = a + b;
	producto = a * b;
	resta = a - b;
	
	printf("\nEl resultado de la suma es: %d", suma);
	printf("\nEl resultado de su producto es: %d", producto);
	printf("\nEl resultado de la resta es: %d", resta);
	
	return 0;
}
