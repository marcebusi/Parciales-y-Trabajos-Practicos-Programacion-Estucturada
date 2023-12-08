Algoritmo Proyecto_2_tp4
	
	Definir factura, facturaTotal, factura1000, factura10000, factura47 como Entero
	i = 1;
	
	Repetir
		Escribir 'Ingrese el valor de la factura " i ": '
		Leer factura
		
		i = i + 1;
		facturaTotal = facturaTotal + factura;
		Si (factura >= 1000)
			factura1000 = factura1000 + 1;
		FinSi
		Si (factura >= 10000)
			factura10000 = factura10000 + 1;
		FinSi
		Si (factura >= 400 y factura <= 700)
			factura47 = factura47 + 1;
		Fin Si
	Hasta Que factura = 0;
	
	Escribir 'El valor de la factura total es de: " facturaTotal "'
	Escribir 'La cantidad de facturas que superan los 1000$ son: " factura1000 "'
	Escribir 'La cantidad de facturas que superan los 10000$ son: " factura10000 "'
	Escribir 'La cantidad de facturas que estan entre 400$ y 700$ son: " factura47 "'
FinAlgoritmo