#include <stdio.h>
#include <conio.h>

int main() {
	
	int horas_trabajo, sueldo;
	int valor_hora = 10;
	
	printf("Considerando que usted gana %d$ la hora\n", valor_hora);
	printf("Ingrese cuantas horas trabaja: ");
	scanf("%d", &horas_trabajo);
	
		
	sueldo = (valor_hora * horas_trabajo) * 24;
	
	printf("Su sueldo total es de: %d$", sueldo);


	return 0;
}
