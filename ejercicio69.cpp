/*69) Dado un numero N se desea saber todos los numeros no primos.
Ej.: 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 22, 24, 25 
*/
#include<iostream>
#include<math.h>
using namespace std;

int esprimo(int n){
    int c=0,i;
    for(i=1;i<=n;i++){
        if(n%i==0)
            c++;
    }   
    if(c<=2)
        return 1;
    else
        return 0;
}
int main(){
    int n,a,c,b,s,d,i;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    c=0;
    d=1;
    while(c<n){
        if(!esprimo(d)){
            c++;
            if(c!=n)
                cout<<d<<", ";
            else
                cout<<d<<" ";
        }    
        d++; 
    } 
    cout<<endl; 
    return 0;
}