#include <iostream>
#include <cmath> 

int main() {
	int valor_hora_trabajo, horas_de_trabajo, sueldo;
	
	printf("Ingresar valor de la hora de trabajo: ");
	scanf("%d", &valor_hora_trabajo);
	printf("Ingrese las horas que trabajo en el mes: ");
	scanf("%d", &horas_de_trabajo);

	sueldo = valor_hora_trabajo * horas_de_trabajo;
	
	if (horas_de_trabajo > 50) {
		sueldo += 100;
	} 
	if (horas_de_trabajo > 150) {
		sueldo += 100;
	} 
	printf("El sueldo de la persona fue de %d$", sueldo);
	
	return 0;
}
