Algoritmo Proyecto_11_tp2
	Definir horas, categoria, sueldo Como entero
	Escribir 'Ingrese las horas que trabaja: '
	Leer horas
	Escribir 'Ingrese su categoria: '
	Leer categoria
	
	
	Segun categoria Hacer
		1:	
			sueldo = horas*50
		2:
			sueldo = horas*70
		3:
			sueldo = horas*80
		De Otro Modo:
			Escribir "Por favor escribir una categoria del 1 al 3"
	Fin Segun
	
		Si categoria = 1 o categoria = 2 o categoria = 3
			Escribir 'El sueldo es de ' sueldo '$';
		Fin Si
FinAlgoritmo