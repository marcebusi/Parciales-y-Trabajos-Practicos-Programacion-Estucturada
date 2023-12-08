#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i;
	char patente[10];
	float porcentaje40 = 0;
	int cantidadA = 10;
	int num = 0;
	int	cuenta40 = 0;


	for(i=1; i <= cantidadA;i++){
		printf("Ingrese la patente: ");
		scanf("%s", &patente);
		
		printf("Ingrese el monto de la multa %i: ", i);
		scanf("%i", &num);
		
			
		if (num > 40) {
			cuenta40++;
		}		
	}
	
	printf("\n\nLa cantidad de montos que superan los 40$ es de %i\n\n", cuenta40);
	
	porcentaje40 = (cuenta40 * 100) / cantidadA ;		
	printf("\n\nEl porcentaje del total cobrado de los montos que superan 40$ es del %.2f\n\n", porcentaje40);
	
	
	system("pause");
	return 0;
}
