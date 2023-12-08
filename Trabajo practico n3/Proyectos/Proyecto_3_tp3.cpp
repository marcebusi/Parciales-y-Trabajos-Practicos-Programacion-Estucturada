#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i, promedio,  promedioPar, promedioImpar;
	int cantidad = 8;
	int num = 0;
	int sumaPar = 0;
	int sumaImpar = 0;
	int cuentaPar = 0;
	int cuentaImpar  = 0;
	int cuenta15 = 0;

	for(i=1; i <= cantidad;i++){
		printf("Ingrese el valor %i: ", i);
		scanf("%i", &num);
		if (fmod(num,2)==0) {
			sumaPar += num;
			cuentaPar++;
		}
		else {
			sumaImpar += num;
			cuentaImpar++;
		}
		if (num > 15) {
			cuenta15++;
		}			
	}
	
	promedio = (sumaPar + sumaImpar) / cantidad;	
	printf("\n\nEl promedio general es %i", promedio);
	
	promedioPar = sumaPar / cuentaPar;	
	printf("\n\nEl promedio de los pares es %i", promedioPar);
	
	promedioImpar = sumaImpar / cuentaImpar;
	printf("\n\nEl promedio de los impares es %i", promedioImpar);
	
	printf("\n\nLa cantidad de numeros que superan 15 es %i\n\n", cuenta15);
	
	
	system("pause");
	return 0;
}
