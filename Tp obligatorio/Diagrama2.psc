Algoritmo Proyecto2_tpobligatorio
	Definir num1, num2, suma, resta, multiplicacion, division Como entero
	Definir operacion Como Caracter
	
	Escribir 'Digite un numero: '
	Leer num1
	Escribir 'Digite un numero: '
	Leer num2
	
	Escribir 'Digite la operacion: '
	Leer operacion
	
	
	Segun operacion Hacer
		"s":	
			suma = num1 + num2
			Escribir 'el resultado de la suma es: ' suma ''
		"r":
			resta = num1 - num2
			Escribir 'el resultado de la resta es: ' resta ''
		"m":
			multiplicacion = num1 * num2
			Escribir 'el resultado de la multiplicacion es: ' multiplicacion ''
		"d":
			division = num1 / num2
			Escribir 'el resultado de la division es: ' division ''
		De Otro Modo:
			Escribir "Se equivoco de operacion"
	Fin Segun
FinAlgoritmo