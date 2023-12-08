Algoritmo Proyecto_5_tp2
	Definir a, b, c, d, suma1, suma2 Como entero
	Escribir 'Ingrese el primer valor para la primer suma: '
	Leer a
	Escribir 'Ingrese el segundo valor para la primer suma: '
	Leer b
	Escribir 'Ingrese el tercer valor para la segunda suma: '
	Leer c
	Escribir 'Ingrese el cuarto valor para la segunda suma: '
	Leer d
	
	suma1 <- a+b;
	suma2 <- c+d;
	
	Si suma1 > suma2 Entonces
		Escribir "Suma 1(" suma1 ") es mayor a Suma 2(" suma2 ")"
		SiNo
			Si suma2 > suma1 Entonces
			Escribir "Suma 2(" suma2 ") es mayor a Suma 1(" suma1 ")"
		FinSi
	Fin Si
FinAlgoritmo