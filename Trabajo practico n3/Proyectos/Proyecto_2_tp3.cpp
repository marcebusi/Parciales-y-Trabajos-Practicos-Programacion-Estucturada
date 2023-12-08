#include <stdio.h>
#include <conio.h>

int main() {
	int n = 0;
	int i = 0;
	int negativo = 0;
	int positivo = 0;
	int ceros = 0;
	
	for(i; i<10; i++) {
		printf("Ingrese un numero: ");
		scanf("%d", &n);
		
		if (n > 0){
			positivo++;
		}
		if (n < 0){
			negativo++;
		}
		if (n == 0){
			ceros++;
		}
	}
	
	printf("Hay %d numeros positivos, %d numeros negativos y %d numeros cero", positivo, negativo, ceros);
	
	return 0;
}
