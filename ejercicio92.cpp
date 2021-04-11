/*91) Dado un Valor X mayor a 10000 extraer lo digitos impares y almacenarlos en un vector 
luego mostrar los digitos del vector.
Ej.:  Introduce un numero mayor a 10000: 567890
La salida es:
5, 7, 9 
*/
#include<iostream>
#include<math.h>
#include "funciones.h"// cargo mi propia libreria con funciones comunes
using namespace std;
void extraer_impar(int v1[],int x,int *cant){
    int c,dig,aux;
    c=0;
while(x>0){
    dig=(int)x%10;
    x=(int)x/10;
    if(dig%2!=0)
        aux=aux*10+dig;
}
while(aux>0){
    dig=(int)aux%10;
    aux=(int)aux/10;
    v1[c]=dig;
    c++;
}
*cant=c;
}
int main(){
    int n,x,c;
    int v[100];
    cout<<"Introduce un numero mayor a 10000: ";
    cin>>n;
    //leer_vector(v,n);
    extraer_impar(v,n,&c);
    mostrar_vector(v,c);
    cout<<endl; 
    return 0;
}

