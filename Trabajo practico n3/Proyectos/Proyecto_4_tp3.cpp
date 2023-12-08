#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i;
	float porcentajeU, porcentajeD, porcentajeV, porcentajeT = 0;
	int cantidad = 30;
	int num = 0;
	int cuentaU = 0;
	int cuentaD = 0;
	int	cuentaV = 0;
	int cuentaT = 0;


	for(i=1; i <= cantidad;i++){
		printf("Ingrese el valor %i: ", i);
		scanf("%i", &num);
		
		if (num > 1 and num < 10) {
			cuentaU++;
		}
		else if (num > 10 and num < 20) {
			cuentaD++;
		}
		else if (num > 20 and num < 30) {
			cuentaV++;	
		}
		else if (num > 30) {
			cuentaT++;
		}		
	}
	
	porcentajeU = (cuentaU * 100) / cantidad;
	printf("\n\nEl porcentaje de numeros del uno al diez es de %.2f", porcentajeU);
	
	porcentajeD = (cuentaD * 100) / cantidad ;		
	printf("\n\nEl porcentaje de numeros del diez al veinte es de %.2f", porcentajeD);
	
	porcentajeV = (cuentaV * 100) / cantidad;
	printf("\n\nEl porcentaje de numeros del veinte al treinta es de %.2f", porcentajeV);
	
	porcentajeT = (cuentaT * 100) / cantidad ;
	printf("\n\nEl porcentaje de numeros mayores a treinta es de %.2f\n\n", porcentajeT);
	
	
	system("pause");
	return 0;
}
