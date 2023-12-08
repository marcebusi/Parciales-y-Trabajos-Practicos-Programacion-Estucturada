Algoritmo Proyecto1_tpobligatorio
	Definir personas, cuenta, porcentajePropina Como Entero
	Definir propinaTotal, cuentaTotalPorPersona Como Real
	
	Escribir 'Ingrese la cuenta total: '
	Leer cuenta
	Escribir 'Ingrese el porcentaje que quiere dar de propina (10, 12 o 15): '
	Leer porcentajePropina
	Escribir 'Ingrese la cantidad de personas que pagaran la cuenta: '
	Leer personas
	
	propinaTotal <- (porcentajePropina / 100) * cuenta
	cuentaTotalPorPersona <- (cuenta+propinaTotal) / personas
	
	Escribir 'Cada persona debe pagar en total $ ', cuentaTotalPorPersona, ' '
	
FinAlgoritmo