Algoritmo Proyecto_3_tp3
	
	Definir i, num, sumaPar, sumaImpar, cuentaPar, cuenta15 como Entero
	Definir promedio, promedioPar, promedioImpar Como Real
	cantidad = 8;
	
	Para i<-1 Hasta cantidad Con Paso 1 Hacer
		Escribir 'Ingrese un número: '
		Leer num
		
		Si (num MOD 2 == 0)
			sumaPar = sumaPar + num;
			cuentaPar = cuentaPar + 1;
		SiNo
			sumaImpar = sumaImpar + num;
			cuentaImpar = cuentaImpar + 1;
		FinSi
		Si (num > 15)
			cuenta15 = cuenta15 + 1;
		FinSi
	Fin Para
	
	promedio = (sumaPar + sumaImpar) / cantidad;
	Escribir 'El promedio general es " promedio "'
	
	promedioPar = sumaPar / cuentaPar;
	Escribir 'El promedio de los pares es " promedioPar "'
	
	promedioImpar = sumaImpar / cuentaImpar;
	Escribir 'El promedio de los impares es " promedioImpar "'
	
	Escribir 'La cantidad de numeros que superan 15 es " cuenta15 "'
	
FinAlgoritmo