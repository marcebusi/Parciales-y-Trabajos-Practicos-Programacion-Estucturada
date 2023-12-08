Algoritmo Proyecto_6_tp2
	Definir edad1, edad2 Como entero
	Definir altura1, altura2 Como Real
	
	Escribir 'Ingrese la edad de la primer persona: '
	Leer edad1
	Escribir 'Ingrese la estatura de la primer persona: '
	Leer altura1
	Escribir 'Ingrese la edad de la segunda persona: '
	Leer edad2
	Escribir 'Ingrese la estatura de la segunda persona '
	Leer altura2
	
	
	Si edad1 > edad2 Entonces
		Escribir "La persona de " edad1  " años mide " altura1;
		SiNo
			Si edad1 > edad2 Entonces
				Escribir "La persona de " edad1  " años mide " altura1;
		SiNo
			Escribir "Las edades de ambas personas son iguales"
		FinSi
	FinSi
FinAlgoritmo