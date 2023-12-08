Algoritmo Proyecto_2_tp3
	
	Definir n, i, negativ, positiv, ceros como Entero
	
	Para i <-0 Hasta 10 Con Paso 1 Hacer
		Escribir 'Ingrese un número: '
		Leer n
		
		Si (n > 0)
			positiv <- positiv + 1
		FinSi
		Si (n < 0)
			negativ <- negativ + 1
		FinSi
		Si (n = 0)
			ceros <- ceros + 1
		FinSi
	Fin Para
	
	Escribir 'Hay " positiv " numeros positivos, " negativ " numeros negativos y " ceros " numeros cero'
FinAlgoritmo