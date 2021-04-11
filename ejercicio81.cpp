/*81)Dado un numero N psitivo mostrar la cantidad de digitos que son diferentes de ceros que contiene.
Ej.: 
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
int diferentesCero(int n){
    int dig,c=0;
    while(n>0){
        dig=n-((int)n/10*10);
        n=(int)n/10;
        if(dig!=0)
        c++;
    }
    return c;
}
int main(){
    int n,c=0,i=0,k;
    cout<<"Introduce la cantidad de N:";
    cin>>n;    
    cout<<"El numero "<<n<<" Tiene "<<diferentesCero(n)<<" digitos diferentes de ceros\n";        
    //cout.precision(3);    //colocamos precion en el redondeo a 3 digitos en la salida
    cout<<endl; 
    return 0;
}