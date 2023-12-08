Algoritmo Proyecto_3_tp2
	Definir lado1, lado2, lado3 Como entero
	Escribir 'Ingrese lado 1: '
	Leer lado1
	Escribir 'Ingrese lado 2: '
	Leer lado2
	Escribir 'Ingrese lado 3: '
	Leer lado3
	Si lado1=lado2 Y lado1=lado3 Entonces
		Escribir 'Es un triangulo equilatero'
	SiNo
		Si lado1<>lado2 Y lado1<>lado3 Y lado2<>lado3 Entonces
			Escribir 'Es un triangulo escaleno'
		SiNo
			Si lado1=lado2 O lado1=lado3 O lado2=lado3 Entonces
				Escribir 'Es un triangulo isósceles'
			FinSi
		FinSi
	FinSi
FinAlgoritmo