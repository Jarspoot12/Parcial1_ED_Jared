Algoritmo Array
	Dimension almacen[10]
	sum=10
	Para i=0 Hasta 10 Hacer
		Escribir "Digite el valor en la posicion ", i,": "
		Leer almacen[i]
		si (i<>0 & i%2==0)  Entonces
			sum=almacen[i]
		FinSi
		Escribir "La suma de los valores en posiciones pares es: ", sum
		FinPara
FinAlgoritmo
