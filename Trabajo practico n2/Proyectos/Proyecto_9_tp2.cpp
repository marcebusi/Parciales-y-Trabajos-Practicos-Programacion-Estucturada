#include <iostream>
#include <cmath> 

int main() {
	int sueldo, categoria, antiguedad;
	
	printf("Ingrese su sueldo: ");
	scanf("%d", &sueldo);
	printf("Ingrese su categoria: ");
	scanf("%d", &categoria);
	printf("Ingrese su antiguedad: ");
	scanf("%d", &antiguedad);

	
	if (categoria == 1) {
		sueldo += (50 * antiguedad);
	} 
	printf("El sueldo es de %d$", sueldo);
	
	return 0;
}
