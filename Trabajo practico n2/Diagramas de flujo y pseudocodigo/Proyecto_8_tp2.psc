Algoritmo Proyecto_8_tp2
	Definir dia, mes, anio Como entero
	Escribir 'Ingrese el dia: '
	Leer dia
	Escribir 'Ingrese el mes: '
	Leer mes
	Escribir 'Ingrese el anio: '
	Leer anio
	
	Si mes >= 1 y mes <= 12 Entonces
		Segun mes Hacer
			1:
			3:
			5:
			7:
			8:
			10:
			12: Si dia >= 1 y dia <= 31 Entonces
						Escribir 'FECHA CORRECTA'
					SiNo
						Escribir 'FECHA INCORRECTA'
					FinSi	
				4:
				6:
				9:
				11: Si dia >= 1 y dia <= 30 Entonces
							Escribir 'FECHA CORRECTA'
						SiNo
							Escribir 'FECHA INCORRECTA'
						FinSi	
				2: Si anio % 4 = 0 y anio % 100 <> 0 | anio % 400 = 0
						Si dia >= 1 y dia <= 29
							Escribir 'FECHA CORRECTA'
						SiNo
							Escribir 'FECHA INCORRECTA'
						FinSi
						SiNo
							Si dia >= 1 y dia <= 28
								Escribir 'FECHA CORRECTA'
							SiNo
								Escribir 'FECHA INCORRECTA'
							FinSi
						FinSi
		Fin Segun
	FinSi
FinAlgoritmo