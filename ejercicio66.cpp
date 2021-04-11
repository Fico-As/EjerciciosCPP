/*66) Dado un numero entero N positivo de mas de 6 digitos construir otros dos 
numeros A y B donde A este formado por los digitos pares de N y B esta formado por 
los digitos impares de N.
Ej.: Introduce la cantidad de R:345123
El valor de A=42 el valor de B=3513
*/
#include<iostream>
#include<math.h>
using namespace std;
int factorial(int n){
    int c=1,i;
    for(i=1;i<=n;i++)
        c*=i;
    return c;
}
int esperfecto(int n){
    int c=0,i;
    for(i=1;i<=n-1;i++){
        if(n%i==0)
            c+=i;
    }   
    if(c==n)
        return 1;
    else
        return 0;
}
int invertir(int n){
    int dig,c=0;
    while(n>0){
        dig=n-((int)n/10*10);
        n=n/10;
        c=c*10+dig;
    }
    return c;
}
int main(){
    int n,a,a1,b,b1,d1;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    cout<<"El factorial de  "<<n<<"  es="<<factorial(n)<<endl;
    if(esperfecto(n))
        cout<<"El numero "<<n<<"  es un numero PERFECTO";
    else
        cout<<"El numero "<<n<<" NO es un numero PERFECTO";
    cout<<endl; 
    cout<<"El numero invertido  de  "<<n<<"  es = "<<invertir(n)<<endl;
    return 0;
}