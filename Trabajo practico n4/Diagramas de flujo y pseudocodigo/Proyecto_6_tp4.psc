Algoritmo Proyecto_6_tp4
	
	Definir numeroAuto, ganador, perdedor como Entero
	Definir primero, ultimo, tiempo, total como Real
	cont = 1;
	
	Escribir 'Bienvenido a la carrera, para finalizarla ingrese 1000 en ambos ingresos de datos'
	
	Escribir 'Ingrese el numero de auto " cont ": '
	Leer numeroAuto
	
	Escribir 'Ingrese el tiempo en el que llego a la meta " cont ": '
	Leer tiempo
	
	Mientras numeroAuto < 1000
		Si (cont = 1)
			primero = tiempo;
			ultimo = tiempo;
			ganador = numeroAuto;
			perdedor = numeroAuto;
		Sino
			Si (tiempo < primero)
				primero = tiempo;
				ganador = numeroAuto;
			FinSi
			Si (tiempo > ultimo) 
				ultimo = tiempo;
				perdedor = numeroAuto;
			FinSi
		Fin si
		
		cont = cont + 1;
		
		Escribir 'Ingrese el numero de auto " cont ": '
		Leer numeroAuto
		
		Escribir 'Ingrese el tiempo en el que llego a la meta " cont ": '
		Leer tiempo
	Fin Mientras
	
	Escribir 'El auto ganador es: " ganador "'
	Escribir 'El auto que finalizo ultimo es: " perdedor "'
	
	
FinAlgoritmo