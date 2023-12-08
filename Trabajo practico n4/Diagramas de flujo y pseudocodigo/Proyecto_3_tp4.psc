Algoritmo Proyecto_3_tp4
	
	Definir n, positiv, negativ, ceros como Entero
	Definir promedioPos, promedioNeg como Real
	i = 1;
	
	Repetir
		Escribir 'Ingrese el numero " i ": '
		Leer n
		
		i = i + 1;
		Si (n > 0)
			positiv = positiv + 1;
		FinSi
		Si (n < 0)
			negativ = negativ + 1;
		Fin si
		Si (n = 0)
			ceros = ceros + 1;
		Fin Si
	Hasta Que n = 0;
	
	promedioPos = (positiv * 100) / i
	Escribir 'El promedio de numeros positivos es del: " promedioPos "'
	
	promedioNeg = (negativ * 100) / i
	Escribir 'El promedio de numeros negativos es del: " promedioNeg "'
	
	Escribir 'La cantidad de numeros ceros es: " ceros "'
FinAlgoritmo