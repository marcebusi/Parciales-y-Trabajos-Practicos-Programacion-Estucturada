Algoritmo Proyecto_1_tp3
	
	Definir ingreso como Entero
	Definir acumuladorIngreso como Entero
	Definir i como Entero
	Definir promedio como Real
	
	Para i <-0 Hasta 25 Con Paso 1 Hacer
		Escribir 'Ingrese un número: '
		Leer ingreso
		
		acumuladorIngreso <- acumuladorIngreso + ingreso
	Fin Para
	
	promedio <-  acumuladorIngreso % 25
	Escribir 'El promedio de los números es de: " promedio "'
FinAlgoritmo