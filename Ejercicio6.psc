Algoritmo Numerosprimos
	Definir num,suma,i,j,count Como Entero
	num=2
	suma=0
	Para i<-0 Hasta 99
		i=i+1
		count<-0
		Para j<-1 Hasta 100
			j=j+1
			Si (num % j ==0) 
				count= count+1
			Fin Si
			Si (count<3) Entonces
				suma <- + num
			Fin Si
		FinPara
	FinPara
	num <-num  +1
	Escribir "La suma de los numeros del 1-100 es: ", suma
	
FinAlgoritmo
