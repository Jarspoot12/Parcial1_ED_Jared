#include <iostream>
#include <stdlib.h>
#include <time.h> //librería para setear el random
using namespace std;

int main(){
    int numberRand, count=1;
    srand(time(NULL));

    numberRand = 1 + rand()%(99);
    while(numberRand%2!=0){
        cout << numberRand<<endl;
        count++;
        numberRand = 1 + rand()%(99);
    }
    cout <<"Se realizaron "<<count<<" intentos para llegar al numero par: "<< numberRand;
    return 0;
}