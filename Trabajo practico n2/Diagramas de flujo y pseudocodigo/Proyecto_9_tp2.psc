Algoritmo Proyecto_9_tp2
	Definir sueldo, categoria, antiguedad Como entero
	Escribir 'Ingrese su sueldo: '
	Leer sueldo
	Escribir 'Ingrese su categoria: '
	Leer categoria
	Escribir 'Ingrese su antiguedad: '
	Leer antiguedad
		
	Si categoria = 1 Entonces
		sueldo <- sueldo + (50 * antiguedad);
	FinSi
	Escribir 'El sueldo es de ' sueldo '$';
FinAlgoritmo