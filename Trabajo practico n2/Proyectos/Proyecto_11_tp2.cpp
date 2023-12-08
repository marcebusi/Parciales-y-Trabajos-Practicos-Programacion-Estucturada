#include <iostream>
#include <cmath> 

int main() {
	int horas, categoria, sueldo;
	
	printf("Ingrese las horas que trabaja: ");
	scanf("%d", &horas);
	printf("Ingrese su categoria: ");
	scanf("%d", &categoria);


	switch (categoria) {
		
		case 1: sueldo = horas*50;
		break;
		
		case 2: sueldo = horas*70;
		break;
		
		case 3: sueldo = horas*80;
		break;
		
		default: printf("Por favor escribir una categoria del 1 al 3");
	}
	
	if(categoria == 1 | categoria == 2 | categoria == 3) {
		printf("\nEl sueldo es de %d$", sueldo);
	}	
	
	return 0;
}
