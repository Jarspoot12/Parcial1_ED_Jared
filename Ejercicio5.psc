Algoritmo SumaImpares
	Definir n,sum Como Entero
	sum <- 0
	n <- 0
	Para n<-1 Hasta 100 Hacer
		Si (n MOD 3=0) Entonces
			sum <- sum+n
		FinSi
	FinPara
	Escribir 'La suma de los numeros impares es: ',sum
FinAlgoritmo

