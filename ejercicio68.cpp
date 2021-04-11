/*68) Desplegar los primeros N numeros primos
Ej.: 1, 2, 3, 4, 5, 7, 9, 11, 13, 17, 19, 23, 25, 29, 31, 37, 41, 43, 47, 49, 53, 59, 61
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
        if(esprimo(d)){
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