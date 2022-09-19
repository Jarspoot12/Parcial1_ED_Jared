Algoritmo Random
	numberRand <- azar (99)+1
	count=azar(10)
	Mientras (numberRand%2<>0) Hacer
		Escribir numberRand
		numberRand = 1 + azar(0)%(99)
		
	FinMientras
	Escribir "Se realizaron ",count, " intentos para llegar al numero par: ", numberRand
FinAlgoritmo
