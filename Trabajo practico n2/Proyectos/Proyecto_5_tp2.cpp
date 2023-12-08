#include <stdio.h>
#include <conio.h>

int main() {
	int a, b, c, d, suma1, suma2;
	
	printf("Ingrese el primer valor para la primer suma: ");
	scanf("%d", &a);
	printf("Ingrese el segundo valor para la primer suma: ");
	scanf("%d", &b);
	printf("Ingrese el tercer valor para la segunda suma: ");
	scanf("%d", &c);
	printf("Ingrese el cuarto valor para la segunda suma: ");
	scanf("%d", &d);
	
	suma1 = a+b;
	suma2 = c+d;
	
	
	if (suma1 > suma2) {
		printf("Suma 1(%d) es mayor a Suma 2(%d)", suma1, suma2);
	} 
	else if (suma2 > suma1) {
		printf("Suma 2(%d) es mayor a Suma 1(%d)", suma2, suma1);
	}
	else {
		printf("Las sumas son iguales");
	}
	return 0;
}
