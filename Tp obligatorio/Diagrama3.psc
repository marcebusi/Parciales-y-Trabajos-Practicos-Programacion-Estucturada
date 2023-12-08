Algoritmo Proyecto3_tpobligatorio
	Definir palabra Como Cadena
	Definir cantidad, n Como Entero
	i <- 0
	Escribir 'Ingrese una palabra en minusculas: '
	Leer palabra
	n <- Longitud(palabra)
	Mientras i<=n Hacer
		Si Subcadena(palabra,i,i)=='a' O Subcadena(palabra,i,i)=='e' O Subcadena(palabra,i,i)=='i' O Subcadena(palabra,i,i)=='o' O Subcadena(palabra,i,i)=='u' Entonces
			cantidad <- cantidad+1
		FinSi
		i <- i+1
	FinMientras
	Escribir 'La cantidad de vocales que tiene la palabra ', palabra, ' es ', cantidad, ''
FinAlgoritmo
