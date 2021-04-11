/*75) calcule la siguiente serie para N terminos 
Ej.: 0! - 3^0 + 1! - 3^1 + 2! - 3^2 + 3! - 3^3 + 4! - 3^4 + 5! - 3^5 + 6! - 3^6 + 7! - 3^7 + 8! - 3^8 = 3.64e+04
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
int main(){
    unsigned int n,c=0,i=0,x;
    float fact,pot,aux;
    double s=0;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    cout<<"Introduce el valor de X:";
    cin>>x;
    for (i=0;i<=n-1;i++){
        if(i!=n-1)
        cout<<i<<"! - "<<x<<"^"<<i<<" + ";
        else
            cout<<i<<"! - "<<x<<"^"<<i<<" = ";
        fact=factorial(i);
        //cout<<"fact="<<fact<<endl;
        pot=pow(x,i);
        //cout<<"pot="<<pot<<endl;
        s=(float)s+(fact-pot);
    }     
    cout.precision(3);    //colocamos precion en el redondeo a 3 digitos en la salida
    cout<<s;
    cout<<endl; 
    return 0;
}