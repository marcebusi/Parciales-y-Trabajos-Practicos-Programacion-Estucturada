#include <stdio.h>
#include <conio.h>

int main() {
	int a = 0;
	
	printf("Ingrese un numero: ");
	scanf("%d", &a);
	
	if (a > 0) {
		printf("El numero es positivo");
	} 
	else if (a < 0) {
		printf("El numero es negativo");
	}
	else {
		printf("El numero vale cero");
	}
	return 0;
}
