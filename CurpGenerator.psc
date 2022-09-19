Algoritmo Curp2
		Definir nombreCheck, nombre1 Como Real
		Dimension CURP[18]
		Definir size Como Entero
		count =0
		Leer nombre1
		Definir verificador Como Entero
		Definir verificador Como Caracter
		Para i=0 Hasta size Con Paso i +1
			verificador = nombre1 
			si (verificador<65 | verificador>90)
				count= count+1
			FinSi
		FinPara
		si (count >0) Entonces
			Escribir "Lo sentimos, ingrese lo anterior nuevamente en MAYUSCULAS: "
			Repetir
				Escribir "Lo sentimos, ingrese lo anterior nuevamente en MAYUSCULAS: "
				Leer nombre1
			Hasta Que count=0
		FinSi
		
		Definir numeroCheck,size,verificador Como Entero
		coun=0
		Leer numero1
		Para i=0 Hasta size Con Paso i +1
			verificador = numero1 
			si (verificador<48 | verificador>90)
				count= count+1
			FinSi
		FinPara
		si (count >0) Entonces
			Escribir "Lo sentimos, ingrese un numero valido: "
			Repetir
				Escribir "Lo sentimos, ingrese un numero valido:  "
				Leer numero1
			Hasta Que count=0
		FinSi
		Escribir "guardado correctamente"
			
		Dimension CURP[18]
		Escribir "Bienvenido, siga las instrucciones para obtener su CURP."
		nombre1<-nombreCheck
		Escribir "Digite su primer apellido en MAYUSCULAS: "
		apellido1<-nombreCheck
		Escribir "Digite su segundo apellido en MAYUSCULAS: "
		apellido2<-nombreCheck
		Escribir "Digite su anio de nacimiento a 4 digitos: "
		anio<-numeroCheck
		Escribir "Digite su mes de nacimiento a 2 digitos: "
		mes<-numeroCheck
		Escribir "Digite su dia de nacimiento de 2 digitos: "
		dia<-numeroCheck
		Escribir "Digite H si es hombre o M si es mujer en MAYUSCULAS: "
		genero<-nombreCheck
		//primer apellido 
		Dimension CURP[0] = apellido1[0]
		i=1
		primeraVocalapellido1 = apellido1
		Mientras (apellido1<>65 & apellido1<>69 & apellido1<>73 & apellido1<>79 & apellido1<>85 )
			i=i+1
			primeraVocalapellido1=apellido1
		FinMientras
		CURP[13] = primeraVocalapellido1
		i=i+1
		siguienteConsonanteapellido1 <- apellido1
		Mientras (apellido1==65 | apellido1==69 | apellido1==73 | apellido1==79 | apellido1==85)
			i=i+1
			siguienteConsonanteapellido1<-apellido1
		FinMientras
		Dimension CURP[13] = siguienteConsonanteapellido1
		//segundo apellido
		Dimension CURP[2] = apellido2
		i=1
		siguienteConsonanteapellido2 = apellido2
		Mientras (apellido2==65 | apellido2==69 | apellido2==73 | apellido2==79 | apellido2==85)
			i=+1
			siguienteConsonanteapellido2=apellido2
		FinMientras
		Dimension CURP[14] = siguienteConsonanteapellido2
		//primer nombre
		Dimension CURP[3] = nombre1[0]
		i=i+1
		siguienteConsonantenombre1=nombre1
		Mientras (nombre1==65 | nombre1==69 | nombre1==73 | nombre1==79 | nombre1==85)
			i=i+1
			siguienteConsonantenombre1=nombre1
		FinMientras
		CURP[15]= siguienteConsonantenombre1
		
		//año de nacimiento
		
		Dimension CURP[4]= anio[2]
		Dimension CURP[5]=anio[3]
		//mes de nacimiento
		si (mes-size = 1)Entonces
			Dimension CURP[6]="0"
			Dimension  CURP[7]= mes[0]
		SiNo
			Dimension CURP[6]= mes[0]
			Dimension CURP[7]=mes[1]
			
		FinSi
		
		//dia de nacimiento
		si(dia-size==1)
			Dimension CURP[8] = "0"
			Dimension CURP[9] = dia[0]
		FinSi
		//genero
		Dimension CURP[10]=genero[0]
		//entidad federatica
		Escribir "selecccione el numero de su identidad federativa"
		Escribir "entidad numero: "
		Definir op Como Entero
		Leer op
		Segun op Hacer
			case 1: 
				Dimension CURP[11]="A"
			case 2:
				Dimension CURP[11] = "B"
				Dimension CURP[12] = "C"
			case 3:
				Dimension CURP[11] = "B";
				Dimension CURP[12] = "S";      
			case 4:
				Dimension CURP[11] = "C";
				Dimension CURP[12] = "C";
			case 5:
				Dimension CURP[11] = "C";
				Dimension CURP[12] = "S";        
			case 6:
				Dimension CURP[11] = "C";
				Dimension CURP[12] = "H";     
				
			case 7:
				Dimension CURP[11] = "C";
				Dimension CURP[12] = "L"; 
			case 8:
				Dimension CURP[11] = "C";
				Dimension CURP[12] = "M";        
			case 9:
				Dimension CURP[11] = "D";
				Dimension CURP[12] = "F";        
			case 10:
				Dimension CURP[11] = "D";
				Dimension CURP[12] = "G";        
			case 11:
				Dimension CURP[11] = "G";
				Dimension CURP[12] = "T";   
			case 12:
				Dimension CURP[11] = "G";
				Dimension CURP[12] = "R";  
			case 13:
				Dimension CURP[11] = "H";
				Dimension CURP[12] = "G"; 
			case 14:
				Dimension CURP[11] = "J";
				Dimension CURP[12] = "C";  
			case 15:
				Dimension CURP[11] = "M"
				Dimension CURP[12] = "C";
			case 16:
				Dimension CURP[11] = "M";
				Dimension CURP[12] = "N";        
			case 17:
				Dimension CURP[11] = "M"
				Dimension CURP[12] = "S";  
			case 18:
				Dimension CURP[11] = "N";
				Dimension CURP[12] = "T";
			case 19:
				Dimension CURP[11] = "N";
				Dimension CURP[12] = "L";
			case 20:
				Dimension CURP[11] = "O";
				Dimension CURP[12] = "C";    
			case 21:
				Dimension CURP[11] = "P";
				Dimension CURP[12] = "L";       
			case 22:
				Dimension CURP[11] = "Q";
				Dimension CURP[12] = "T";       
			case 23:
				Dimension CURP[11] = "Q";
				Dimension CURP[12] = "R";       
			case 24:
				Dimension CURP[11] = "S";
				Dimension CURP[12] = "P";      
			case 25:
				Dimension CURP[11] = "S";
				Dimension CURP[12] = "L";     
			case 26:
				Dimension CURP[11] = "S";
				Dimension CURP[12] = "R";      
			case 27:
				Dimension CURP[11] = "T";
				Dimension CURP[12] = "C";        
			case 28:
				Dimension CURP[11] = "T";
				Dimension CURP[12] = "S";       
			case 29:
				Dimension CURP[11] = "T";
				Dimension CURP[12] = "L";        
			case 30:
				Dimension CURP[11] = "V";
				Dimension CURP[12] = "Z";        
			case 31:
				Dimension CURP[11] = "Y";
				Dimension CURP[12] = "N";        
			case 32:
				Dimension CURP[11] = "Z";
				Dimension CURP[12] = "S"; 	
		FinSegun
		Escribir "digite una numero de entidad valido"
		Definir numberRandom, numberRandom2 Como entero
		numberRandom <- 65 + azar(0)%(90-65)
		numberRandom2 <- 48 + azar(0)%(57 - 48)
		Dimension CURP[16] = numberRandom
		Dimension CURP[17] = numberRandom2
		Escribir "\n_____________________________________________\n"
		Escribir "Su CURP es la siguiente: "
		Para i=0 Hasta 18  Con Paso 1
			Escribir "\n_____________________________________________\n"
		FinPara
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
FinAlgoritmo
