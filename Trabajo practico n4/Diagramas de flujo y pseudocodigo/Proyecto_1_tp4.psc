Algoritmo Proyecto_1_tp4
	
	Definir sueldo, sueldoSuma, acumuladorIngreso como Entero
	Definir promedio como Real
	
	Repetir
		Escribir 'Ingrese un número: '
		Leer sueldo
		
		Si sueldo > 0
			sueldoSuma <- sueldoSuma + sueldo
			acumuladorIngreso <- acumuladorIngreso + 1;
		Finsi
	Hasta Que  sueldo <= 0

	
	promedio = sueldoSuma / acumuladorIngreso
	Escribir 'El promedio de los sueldos es de: " promedio "'
	Escribir 'La suma de los sueldos es de: " sueldoSuma "'
FinAlgoritmo