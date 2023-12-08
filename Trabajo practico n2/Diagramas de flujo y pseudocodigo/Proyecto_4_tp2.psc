Algoritmo Proyecto_4_tp2
	Definir a, b, c Como entero
	Definir promedio Como Real
	
	Escribir 'Ingrese el primer valor: '
	Leer a
	Escribir 'Ingrese el segundo valor: '
	Leer b
	Escribir 'Ingrese el tercer valor: '
	Leer c
	
	promedio <- (a+b+c) / 3;
	
	Si a > promedio  Entonces
		Escribir 'El primer número con valor de " a " es mayor al promedio'
		Sino
			Si b > promedio Entonces
				Escribir 'El segundo número con valor de " b " es mayor al promedio'
		Sino
			Si c > promedio Entonces
				Escribir 'El tercer número con valor de " c " es mayor al promedio'
		Sino 
			Escribir 'Ningún número es mayor al promedio'
		FinSi
		FinSi
	FinSi
FinAlgoritmo