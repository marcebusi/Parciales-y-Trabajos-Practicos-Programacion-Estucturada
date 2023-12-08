Algoritmo Proyecto_4_tp3
	
	Definir i, num, cuentaU, cuentaD, cuentaV, cuentaT como Entero
	Definir porcentajeU, porcentajeD, porcentajeV, porcentajeT Como Real
	cantidad = 30;
	
	Para i<-1 Hasta cantidad Con Paso 1 Hacer
		Escribir 'Ingrese un número: '
		Leer num
		
		Si (num > 1 y num < 10)
			cuentaU = cuentaU + 1;
		FinSi
		Si (num > 10 y num < 20)
			cuentaD = cuentaD + 1;
		FinSi
		Si (num > 20 y num < 30)
			cuentaV = cuentaV + 1;
		FinSi
		Si (num > 30)
			cuentaT = cuentaT + 1;
		FinSi
	Fin Para
	
	porcentajeU = (cuentaU * 100) / cantidad;
	Escribir 'El porcentaje de numeros del uno al diez es de " porcentajeU "'
	
	porcentajeD = (cuentaD * 100) / cantidad ;
	Escribir 'El porcentaje de numeros del diez al veinte es de " porcentajeD "'
	
	porcentajeV = (cuentaV * 100) / cantidad;
	Escribir 'El porcentaje de numeros del veinte al treinta es de " porcentajeV "'
	
	porcentajeT = (cuentaT * 100) / cantidad;
	Escribir 'El porcentaje de numeros mayores a treinta es de " porcentajeT "'
	
FinAlgoritmo