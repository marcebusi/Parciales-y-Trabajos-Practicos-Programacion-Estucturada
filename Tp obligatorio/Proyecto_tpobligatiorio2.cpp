#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	int num1 = 0;
	int num2 = 0;
	char operacion;
	int suma = 0;
	int resta = 0;
	int multiplicacion = 0;
	int division = 0;
	
	printf("Digite un numero: ");
	scanf("%d", &num1);
	printf("Digite un numero: ");
	scanf("%d", &num2);
	
	printf("Digite la operacion: ");
	scanf("%s", &operacion);
	
	switch(operacion) {
		case 's':
			suma = num1 + num2;
			printf("El resultado de la suma es: %d", suma);
			break;
		 
		case 'r':	
			resta = num1 - num2;
			printf("El resultado de la resta es: %d", resta);
			break;
		
		case 'm':
			multiplicacion = num1 * num2;
			printf("El resultado de la multiplicacion es: %d", multiplicacion);
			break;
		
		case 'd':
			division = num1 / num2;
			printf("El resultado de la division es: %d", division);
			break;
		
		default: 
			printf("Se equivoco de operacion");
			break;
	}

	return 0;
}
