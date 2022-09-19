//suma de 1 al 100 de numeros primos

#include <iostream>
using namespace std;

int main(){
    int count, num=2, suma=0;
    for(int i=0; i<99; i++){
        count=0;
        for(int j=1; j<=100; j++){
            if(num % j == 0) count++;
        }
        if(count<3){
            suma += num;
        } 
        num++;
    }
    cout <<"La suma de los primeros 100 numeros primos es: "<< suma;
    return 0;

}