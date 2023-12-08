Algoritmo primerParcial
	
	Definir nro_atencion, servicioTrau, servicioDerm, servicioOtor, servicioCant, obra_social, valor_consulta, montoTotalGal, montoTotalSwi, montoTotalOsd, pacGal, pacSwiss, pacOsd, gal100, swi100, osd100, monto100 como Entero
	Definir promedioTrau, promedioDerm, promedioOtor, promedioCons, promedioTotalConsulta como Real
	Definir nombre, servicio como Caracter
	
	Escribir 'Bienvenido al sanatorio. Recuerde que atendemos 3 obras sociales: 1-Galeno 2-Swiss Medical 3-Osde'
	
	Escribir 'Ingrese el numero de atencion: '
	Leer nro_atencion
	
	Mientras nro_atencion <> 0
		Escribir 'Ingrese su nombre: '
		Leer nombre
		
		Escribir 'Ingrese el servicio con el que se atendera (traumatologo, dermatologo o otorrino): '
		Leer servicio
		
		Escribir 'Ingrese el numero de la obra social con la que se atendera: '
		Leer obra_social
		
		Escribir 'Ingrese el valor de la consulta: '
		Leer valor_consulta
		
		Si (servicio == "traumatologo")
			servicioTrau = servicioTrau + 1;
		Sino
			Si (servicio == "dermatologo")
				servicioDerm = servicioDerm + 1;
			FinSi
			Si (servicio == "otorrino")
				servicioOtor = servicioOtor + 1;
			FinSi
		Fin si
		
		Si (obra_social >= 1 y obra_social <= 3) Entonces
			Segun obra_social Hacer
				1:
					montoTotalGal =+ valor_consulta;
					pacGal = pacGal + 1;
					Si (montoTotalGal > 100000)
						gal100 = gal100 + 1;
					FinSi
				2:
					montoTotalSwi =+ valor_consulta;
					pacSwiss = pacSwiss + 1;
					Si (montoTotalSwi > 100000)
						swi100 = swi100 + 1;
					FinSi
				3:
					montoTotalOsd =+ valor_consulta;
					pacOsd = pacOsd + 1;
					Si (montoTotalOsd > 100000)
						osd100 = osd100 + 1;
					FinSi
			Fin Segun
		Sino
			Escribir 'El numero de obra social ingresado es incorrecto'
		Fin si
		
		ServicioCant = servicioCant + 1;
		
		Escribir 'Ingrese el numero de atencion: '
		Leer nro_atencion
	Fin Mientras
	
	Escribir 'El monto total para cobrar a Galeno es de: " montoTotalGal "$'
	Escribir 'El monto total para cobrar a Swiss Medical es de: " montoTotalSwi "$'
	Escribir 'El monto total para cobrar a Osde es de: " montoTotalOsd "$'
	
	promedioTotalConsulta = (montoTotalGal + montoTotalSwi + montoTotalOsd) / servicioCant
	Escribir 'El valor promedio total de todas las consultas realizadas es de: " promedioTotalConsulta "'
	
	promedioTrau = (servicioTrau * 100) / servicioCant
	Escribir 'El porcentaje de atencion de servicio traumatologo sobre el total es de: " promedioTrau "'
	
	promedioDerm= (servicioDerm * 100) / servicioCant
	Escribir 'El porcentaje de atencion de servicio dermatologo sobre el total es de: " promedioDerm "'
	
	promedioOtor = (servicioOtor * 100) / servicioCant
	Escribir 'El porcentaje de atencion de servicio otorrino sobre el total es de: " promedioOtor "'
	
	
	Si (pacGal > pacSwiss y pacGal > pacOsd)
		Escribir 'Galeno ha sido la obra social que mas pacientes atendio con un total de " pacGal "'
	SiNo
		Si (pacSwiss > pacGal y pacSwiss > pacOsd)
			Escribir 'Swiss Medical ha sido la obra social que mas pacientes atendio con un total de " pacSwiss "'
		SiNo
			Si (pacOsd > pacGal y pacOsd > pacSwiss)
				Escribir 'Osde ha sido la obra social que mas pacientes atendio con un total de " pacOsd "'
			SiNo 
				Escribir 'No hay una obra social con mas pacientes atendidos'
			FinSi	
		FinSi
	FinSi
	
	
	monto100 = gal100 + swi100 + osd100
	Escribir 'La cantidad de obras sociales que deben pagar mas de 100000$ es de: " monto100 "'
	
	
FinAlgoritmo