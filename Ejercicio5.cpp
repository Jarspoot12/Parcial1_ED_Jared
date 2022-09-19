#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	int x=1;
for(n=1;n<=100;n++){

if(x%n==0){
	sum= sum + n;	
 }
}
x=x+1;
cout<<"la suma de los numeros primos es: "<<sum;

return 0;
}

