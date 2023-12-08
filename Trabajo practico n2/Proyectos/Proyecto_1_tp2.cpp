#include <stdio.h>
#include <conio.h>

int main() {
	int a, b;
	
	printf("Ingrese un numero: ");
	scanf("%d", &a);
	printf("Ingrese otro numero: ");
	scanf("%d", &b);
	
	if (a==b) {
		printf("Los numeros son iguales");
	} else {
			printf("Los numeros son distintos");
	}
	return 0;
}
