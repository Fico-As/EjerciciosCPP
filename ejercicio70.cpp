/*70) Dado un numero entero positivo N mostrar los numeros perfectos que se encuentran entre 1 y N.
Ej.: 4, 6, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 22, 24, 25 
*/
#include<iostream>
#include<math.h>
using namespace std;
int esperfecto(int n){
    unsigned int c=0,i;
    for(i=1;i<=n-1;i++){
        if(n%i==0)
            c+=i;
    }   
    if(c==n)
        return 1;
    else
        return 0;
}
int main(){
    unsigned int n,i;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
for(i=1;i<=n;i++){
    if(esperfecto(i))
        cout<<i<<", ";
}
    cout<<endl; 
    return 0;
}