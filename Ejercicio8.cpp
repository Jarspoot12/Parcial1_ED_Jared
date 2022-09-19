#include <iostream>
#include <stdlib.h>
#include <time.h> //librería para setear el random
using namespace std;

int main(){
    int almacen[10], sum=0;
    /*for(int i=0; i<10; i++){ //llenar el array con valores random
        srand(time(NULL));
        randNumber = 1 + rand()%(99);
        almacen[i] = randNumber;
        cout<<" "<<randNumber;
    }*/
    for(int i=0; i<10; i++){
        cout<<"\nDigite el valor en la posicion "<<i<<": ";
        cin >> almacen[i];
        if(i!=0 && i%2==0) sum+=almacen[i];
    }
    cout <<"La suma de los valores en posiciones pares es: "<<sum;
    return 0;
}