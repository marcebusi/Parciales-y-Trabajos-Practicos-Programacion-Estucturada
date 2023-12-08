#include <stdio.h>
#include <conio.h>

int main() {
	
	int valor_hora, horas_trabajo, sueldo;
	
	printf("Ingrese cuanto gana por hora: ");
	scanf("%d", &valor_hora);
	
	printf("Ingrese cuantas horas trabaja: ");
	scanf("%d", &horas_trabajo);
	
	sueldo = (valor_hora * horas_trabajo) * 24;
	
	printf("Su sueldo total es de: %d$", sueldo);


	return 0;
}
