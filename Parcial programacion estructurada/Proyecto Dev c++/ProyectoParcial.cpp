#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
	int nro_atencion;
	char nombre [10];
	char servicio[0];
	int servicioTrau = 0;
	int servicioDerm = 0;
	int servicioOtor = 0;
	int servicioCant = 0;
	float promedioTrau = 0;
	float promedioDerm = 0;
	float promedioOtor = 0;
	int obra_social = 0;
	int valor_consulta = 0;
	float promedioCons = 0;
	int montoTotalGal = 0; 
	int montoTotalSwi = 0; 
	int montoTotalOsd = 0;
	float promedioTotalConsulta = 0;
	int pacGal = 0;
	int pacSwiss = 0;
	int pacOsd = 0;
	int gal100 = 0;
	int swi100 = 0;
	int osd100 = 0;
	int monto100 = 0;
	
	
	printf("Bienvenido al sanatorio. Recuerde que atendemos 3 obras sociales: 1-Galeno 2-Swiss Medical 3-Osde \n\n");

	printf("\nIngrese el numero de atencion: ");
	scanf("%d", &nro_atencion);
	
	while (nro_atencion !=0) {
		printf("\nIngrese su nombre: ");
		scanf("%s", &nombre);
		
		printf("\nIngrese el servicio con el que se atendera (traumatologo, dermatologo o otorrino): ");
		scanf("%s", &servicio);
		
		printf("\nIngrese el numero de la obra social con la que se atendera: ");
		scanf("%d", &obra_social);
		
		printf("\nIngrese el valor de la consulta: ");
		scanf("%d", &valor_consulta);
		
		
		if (strcmp(servicio, "traumatologo") == 0){
			servicioTrau++;
		}
		else if (strcmp(servicio, "dermatologo") == 0){
			servicioDerm++;
		}
		else if (strcmp(servicio, "otorrino") == 0){
			servicioOtor++;
		}
		
		if ( obra_social >= 1 && obra_social <= 3 ) {
	        switch (obra_social){
	            case 1:                                 // Galeno
						montoTotalGal += valor_consulta;
						pacGal++;
						if (montoTotalGal > 100000) {
							gal100++;
						}
	                    break;
	            case 2: 								// Swiss Medical
						montoTotalSwi += valor_consulta;
						pacSwiss++;	
						if (montoTotalSwi > 100000) {
							swi100++;
						}
	                    break;
	            case 3: 								// Osde
						montoTotalOsd += valor_consulta;
						pacOsd++;
						if (montoTotalOsd > 100000) {
							osd100++;
						}	
	                    break;
	        }
	    }
	    else {
    		printf("\nEl numero de obra social ingresado es incorrecto");
		} 
		servicioCant++;
		
		printf("\nIngrese el numero de atencion: ");
		scanf("%d", &nro_atencion);
    };

	
	printf("\nEl monto total para cobrar a Galeno es de %d$\n\n", montoTotalGal);
	printf("El monto total para cobrar a Swiss Medical es de %d$\n\n", montoTotalSwi);
	printf("El monto total para cobrar a Osde es de %d$\n\n", montoTotalOsd);
	
	
	promedioTotalConsulta = (montoTotalGal + montoTotalSwi + montoTotalOsd) / servicioCant;
	printf("El valor promedio total de todas las consultas realizadas es de: %.2f\n\n", promedioTotalConsulta);
	
	promedioTrau = (servicioTrau * 100) / servicioCant;
	printf("El porcentaje de atencion de servicio traumatologo sobre el total es del: %.2f\n\n", promedioTrau);
	
	promedioDerm = (servicioDerm * 100) / servicioCant;
	printf("El porcentaje de atencion de servicio dermatologo sobre el total es del: %.2f\n\n", promedioDerm);
	
	promedioOtor = (servicioOtor * 100) / servicioCant;
	printf("El porcentaje de atencion de servicio otorrino sobre el total es del: %.2f\n\n", promedioOtor);
	
	
	if (pacGal > pacSwiss and pacGal > pacOsd) {
		printf("Galeno ha sido la obra social que mas pacientes atendio con un total de %d\n\n", pacGal);
	}
	else if (pacSwiss > pacGal and pacSwiss > pacOsd) {
		printf("Swiss Medical ha sido la obra social que mas pacientes atendio con un total de %d\n\n", pacSwiss);
	}
	else if (pacOsd > pacGal and pacOsd > pacSwiss) {
		printf("Osde ha sido la obra social que mas pacientes atendio con un total de %d\n\n", pacOsd);	
	}
	else {
		printf("No hay una obra social con mas pacientes atendidos\n\n");
	}
	
	monto100 = gal100 + swi100 + osd100;
	printf("La cantidad de obras sociales que deben pagar mas de 100000$ es de: %d\n\n", monto100);

	return 0;
}
