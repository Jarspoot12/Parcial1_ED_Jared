#include<iostream>
using namespace std;
int main(){
int sum=0;
for(int i=1;i<=100;i++){

if(i%2==0){
	sum= sum + i;	
 }
}
cout<<"la suma de los numeros pares es: "<<sum;

return 0;
}

