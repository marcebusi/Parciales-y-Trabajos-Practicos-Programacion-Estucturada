Algoritmo Proyecto_5_tp4
	
	Definir max, min, temp, total como Real
	cont = 1;
	
	Escribir 'Ingrese el valor de la temperatura " cont ": '
	Leer temp
	
	Mientras temp < 1000
		Si (cont = 1)
			max = temp;
			min = temp;
		Sino
			Si (temp > max)
				max = temp;
			FinSi
			Si (temp < min) 
				min = temp;
			FinSi
		Fin si
		
		cont = cont + 1;
		
		Escribir 'Ingrese el valor de la temperatura " cont ": '
		Leer temp
	Fin Mientras

	Escribir 'El valor maximo es: " max "'
	Escribir 'El valor minimo es: " min "'
	
	
FinAlgoritmo