#include <stdio.h>
#include <conio.h>

int main() {
	
	int v1, v2, v3, perimetro;                                                   

	
	printf("Ingrese el primer lado del triangulo: ");           
	scanf("%d", &v1);
	
	printf("Ingrese el segundo lado del triangulo: ");           
	scanf("%d", &v2);
	
	printf("Ingrese el tercer lado del triangulo: ");           
	scanf("%d", &v3);
	

	perimetro = v1 + v2 + v3;
	
	
	printf("\nEl resultado del perimetro es: %d", perimetro);
	
	return 0;
}
