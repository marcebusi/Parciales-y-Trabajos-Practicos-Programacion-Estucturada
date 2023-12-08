#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	int personas = 0;
	int cuenta = 0;
	int porcentajePropina = 0;
	float propinaTotal = 0;
	float cuentaTotalPorPersona = 0;
	
	printf("Ingrese la cuenta total: ");
	scanf("%d", &cuenta);
	printf("Ingrese el porcentaje que quiere dar de propina (10, 12 o 15): ");
	scanf("%d", &porcentajePropina);
	printf("Ingrese la cantidad de personas que pagaran la cuenta: ");
	scanf("%d", &personas);

	
	propinaTotal = (porcentajePropina / 100) * cuenta;
	cuentaTotalPorPersona = (cuenta + propinaTotal) / personas;


	printf("Cada persona debe pagar en total $%.2f", cuentaTotalPorPersona);

	return 0;
}
