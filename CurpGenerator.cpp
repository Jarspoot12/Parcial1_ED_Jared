#include <iostream>
#include <stdlib.h>
#include <time.h> //librería para setear el random
using namespace std;
string nombreCheck(){ // Función para saber si lo escrito por el usuario está en mayúsculas
    // Declaración de variables para la función
    string nombre1; 
    int size, count=0;
    cin >> nombre1;
    char verificador;

    size = nombre1.size();
    for(int i=0; i<size; i++){ //ciclo para comparar si las letras son mayusculas
        verificador = nombre1[i];
        if(verificador < 65 || verificador > 90) count++;
    }    
    if(count>0){ //Si la cuenta es mayor a 0 es porque hay letras en el nombre que no son mayúsculas
        cout <<"\nLo sentimos, ingrese lo anterior nuevamente en MAYUSCULAS: ";
        return nombreCheck(); 
    }
    cout <<"Guardado correctamente\n";
    return nombre1;
}
string numeroCheck(){ // Función para saber si lo escrito por el usuario son números
    // Declaración de variables para la función
    string numero1;
    int size, count=0;
    cin >> numero1;
    char verificador;

    size = numero1.size();
    for(int i=0; i<size; i++){
        verificador = numero1[i];
        if(verificador < 48 || verificador > 57) count++;
    }    
    if(count>0){ //Si la cuenta es mayor a 0 es porque no se ingresaron puros números
        cout <<"\nLo sentimos, ingrese un numero valido: ";
        return numeroCheck(); 
    }
    cout <<"Guardado correctamente\n";
    return numero1;
}



int main(){
    // Declaración de variables generales del usuario, como nombre, apellidos y fecha de nacimiento, etc.
    string CURP[18]; //Variable que almacena los valores de la CURP
    cout << "\nBienvenido, siga las instrucciones para obtener su CURP.\n";
    cout << "Digite su primer nombre en MAYUSCULAS: ";
    string  nombre1 = nombreCheck();
    cout << "\nDigite su primer apellido en MAYUSCULAS: ";
    string  apellido1 = nombreCheck();
    cout << "\nDigite su segundo apellido en MAYUSCULAS: ";
    string apellido2 = nombreCheck();
    cout << "\nDigite su anio de nacimiento a 4 digitos: ";
    string anio = numeroCheck();
    cout << "\nDigite su mes de nacimiento a 2 digitos: ";
    string mes = numeroCheck();
    cout << "\nDigite su dia de nacimiento a 2 digitos: ";
    string dia = numeroCheck();
    cout << "\nDigite H si es hombre o M si es mujer en MAYUSCULAS: ";
    string genero = nombreCheck();




    //Primer apellido
    CURP[0] = apellido1[0];

    int i=1;
    char primeraVocalApellido1 = apellido1[i];
    while(apellido1[i]!=65 && apellido1[i]!=69 && apellido1[i]!=73 && apellido1[i]!=79 && apellido1[i]!=85 ){
        i++;
        primeraVocalApellido1 = apellido1[i];
    }
    CURP[1] = primeraVocalApellido1;

    i=1;
    char siguienteConsonanteApellido1 = apellido1[i];
    while(apellido1[i]==65 || apellido1[i]==69 || apellido1[i]==73 || apellido1[i]==79 || apellido1[i]==85){
        i++;
        siguienteConsonanteApellido1 = apellido1[i];    
    }
    CURP[13] = siguienteConsonanteApellido1;

    //Segundo apellido
    CURP[2] = apellido2[0];

    i=1;
    char siguienteConsonanteApellido2 = apellido2[i];
    while(apellido2[i]==65 || apellido2[i]==69 || apellido2[i]==73 || apellido2[i]==79 || apellido2[i]==85){
        i++;
        siguienteConsonanteApellido2 = apellido2[i];    
    }
    CURP[14] = siguienteConsonanteApellido2;

    //Primer nombre
    CURP[3] = nombre1[0];
    i=1;
    char siguienteConsonanteNombre1 = nombre1[i];
    while(nombre1[i]==65 || nombre1[i]==69 || nombre1[i]==73 || nombre1[i]==79 || nombre1[i]==85){
        i++;
        siguienteConsonanteNombre1 = nombre1[i];    
    }
    CURP[15] = siguienteConsonanteNombre1;


    //Año de nacimiento
    CURP[4]= anio[2];
    CURP[5]= anio[3];
    
    //Mes de nacimiento
    if(mes.size()==1){
        CURP[6] = "0";
        CURP[7] = mes[0];
    }
    else{
        CURP[6] = mes[0];
        CURP[7] = mes[1];
    }

    //Día de nacimiento
    if(dia.size()==1){
        CURP[8] = "0";
        CURP[9] = dia[0];
    }
    else{
        CURP[8] = dia[0];
        CURP[9] = dia[1];
    }

    //Género 
    CURP[10] = genero[0];

    //Entidad federativa
    
    cout << "\nSeleccione de la lista el numero que corresponde a su entidad federativa de nacimiento\nAguascalientes: 1\nBaja California: 2\nBaja California Sur: 3\nCampeche: 4\nChiapas: 5\nChihuahua: 6\nCoahuila: 7\nColima: 8\nDistrito Federal: 9\nDurango: 10\nGuanajuato: 11\nGuerrero: 12\nHidalgo: 13\nJalisco: 14\nMexico: 15\nMichoacan: 16\nMorelos: 17\nNayarit: 18\nNuevo Leon: 19\nOaxaca: 20\nPuebla: 21\nQueretaro: 22\nQuintana Roo: 23\nSan Luis Potosi: 24\nSinaloa: 25\nSonora: 26\nTabasco: 27\nTamaulipas: 28\nTlaxcala: 29\nVeracruz: 30\nYucatan: 31\nZacatecas: 32\n\nSeleccione la opcion correspondiente a su entidad\n";
    cout << "\nEntidad numero: ";
    int opcion;
    cin >> opcion;
    switch(opcion){
        case 1:{
            CURP[11] = "A";
            CURP[12] = "S";        
        } break;
        case 2:{
            CURP[11] = "B";
            CURP[12] = "C";        
        } break;
        case 3:{
            CURP[11] = "B";
            CURP[12] = "S";        
        } break;
        case 4:{
            CURP[11] = "C";
            CURP[12] = "C";        
        } break;
        case 5:{
            CURP[11] = "C";
            CURP[12] = "S";        
        } break;
        case 6:{
            CURP[11] = "C";
            CURP[12] = "H";        
        } break;
        case 7:{
            CURP[11] = "C";
            CURP[12] = "L";        
        } break;
        case 8:{
            CURP[11] = "C";
            CURP[12] = "M";        
        } break;
        case 9:{
            CURP[11] = "D";
            CURP[12] = "F";        
        } break;
        case 10:{
            CURP[11] = "D";
            CURP[12] = "G";        
        } break;
        case 11:{
            CURP[11] = "G";
            CURP[12] = "T";        
        } break;
        case 12:{
            CURP[11] = "G";
            CURP[12] = "R";        
        } break;
        case 13:{
            CURP[11] = "H";
            CURP[12] = "G";        
        }break;
        case 14:{
            CURP[11] = "J";
            CURP[12] = "C";        
        }break;
        case 15:{
            CURP[11] = "M";
            CURP[12] = "C";        
        }break;
        case 16:{
            CURP[11] = "M";
            CURP[12] = "N";        
        }break;
        case 17:{
            CURP[11] = "M";
            CURP[12] = "S";        
        }break;
        case 18:{
            CURP[11] = "N";
            CURP[12] = "T";        
        }break;
        case 19:{
            CURP[11] = "N";
            CURP[12] = "L";        
        }break;
        case 20:{
            CURP[11] = "O";
            CURP[12] = "C";        
        }break;
        case 21:{
            CURP[11] = "P";
            CURP[12] = "L";        
        }break;
        case 22:{
            CURP[11] = "Q";
            CURP[12] = "T";        
        }break;
        case 23:{
            CURP[11] = "Q";
            CURP[12] = "R";        
        }break;
        case 24:{
            CURP[11] = "S";
            CURP[12] = "P";        
        }break;
        case 25:{
            CURP[11] = "S";
            CURP[12] = "L";        
        }   break;
        case 26:{
            CURP[11] = "S";
            CURP[12] = "R";        
        }  break;
        case 27:{
            CURP[11] = "T";
            CURP[12] = "C";        
        }  break;
        case 28:{
            CURP[11] = "T";
            CURP[12] = "S";        
        } break;
        case 29:{
            CURP[11] = "T";
            CURP[12] = "L";        
        }  break;
        case 30:{
            CURP[11] = "V";
            CURP[12] = "Z";        
        } break; 
        case 31:{
            CURP[11] = "Y";
            CURP[12] = "N";        
        } break; 
        case 32:{
            CURP[11] = "Z";
            CURP[12] = "S";        
        } break;
        default:{
            cout<<"\nDigite un numero de entidad valido";
            return 0;
        }         
    }

    //Generar homoclave con valores aleatorios
    
    string numberRandom, numberRandom2;
    srand(time(NULL)); // Función que reinicia el reloj en cada ejecución
    numberRandom = 65 + rand()%(90 - 65);
    numberRandom2 = 48+ rand()%(57 - 48);
    CURP[16] = numberRandom;
    CURP[17] = numberRandom2;
   


    //Impresión de CURP
    cout << "\n_____________________________________________\n";
    cout << "\nSu CURP es la siguiente: ";
    for(int i=0; i<18; i++) cout << CURP[i];
    cout << "\n_____________________________________________\n";

    return 0;
}