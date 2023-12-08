#include <stdio.h>
#include <conio.h>

int main() {
	int lado1, lado2, lado3;
	
	printf("Ingrese lado 1: ");
	scanf("%d", &lado1);
	printf("Ingrese lado 2: ");
	scanf("%d", &lado2);
	printf("Ingrese lado 3: ");
	scanf("%d", &lado3);
	
	if (lado1==lado2 and lado1==lado3) {
		printf("Es un triangulo equilatero");
	} 
	else if (lado1!=lado2 and lado1!=lado3 and lado2!=lado3) {
		printf("Es un triangulo escaleno");
	}
	else if (lado1==lado2 or lado1==lado3 or lado2==lado3) {
		printf("Es un triangulo isosceles");
	}
	return 0;
}
