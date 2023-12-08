Algoritmo Proyecto_5_tp3
	
	Definir i, num, cuenta40 como Entero
	Definir porcentaje40 Como Real
	patente = [];
	cantidadA = 10;
	
	Para i<-1 Hasta cantidadA Con Paso 1 Hacer
		Escribir 'Ingrese la patente: '
		Leer patente
		
		Escribir 'Ingrese el monto de la multa " i ": '
		Leer num
		
		Si (num > 40)
			cuenta40 = cuenta40 + 1;
		FinSi
	Fin Para
	
	Escribir 'La cantidad de montos que superan los 40$ es de " cuenta40 "'
	
	porcentaje40 = (cuenta40 * 100) / cantidadA ;
	Escribir 'El porcentaje del total cobrado de los montos que superan 40$ es de " porcentaje40 "%'
	

FinAlgoritmo