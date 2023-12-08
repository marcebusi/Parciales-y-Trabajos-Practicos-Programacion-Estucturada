Algoritmo Proyecto_7_tp2
	Definir valor_hora_trabajo, horas_de_trabajo, sueldo Como entero
	Escribir 'Ingresar valor de la hora de trabajo: '
	Leer valor_hora_trabajo
	Escribir 'Ingrese las horas que trabajo en el mes: '
	Leer horas_de_trabajo
	
	sueldo <- valor_hora_trabajo * horas_de_trabajo
	
	Si horas_de_trabajo > 50 Entonces
		sueldo <- sueldo+100
	FinSi
	Si horas_de_trabajo > 150
		sueldo <- sueldo+100
	FinSi
	Escribir 'El sueldo de la persona fue de ' sueldo '$';
FinAlgoritmo