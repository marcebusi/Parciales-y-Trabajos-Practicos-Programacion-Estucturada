#include <stdio.h>
#include <conio.h>

int main() {
	
	int remeras, buzos, pantalones, compratotal;
	
	
	printf("Ingrese valor de las remeras: ");
	scanf("%d", &remeras);
	
	printf("Ingrese valor de los buzos: ");
	scanf("%d", &buzos);
	
	printf("Ingrese valor de los pantalones: ");
	scanf("%d", &pantalones);
	
	compratotal = remeras + buzos + pantalones;
	
	printf("El monto total es de: %d$", compratotal);
	
	return 0;
}
