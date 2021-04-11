/*60)dado un numero entero positivo N con sus digitos distintos entre si,se pide 
intercambiar el digito mayor con el digito menor
Ej. 1! + 5! + 4! + El factorial de los digitos de 451 es: 145
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,max,min,d1,n1,n2,d,aux;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    max=0;
    min=9;
    n1=n;
    while (n1>0){
            d1=n1-((int)n1/10*10);
            if(max<d1)
                max=d1;
            if(d1<min)
                min=d1;
            n1=(int)n1/10;
        }
    n1=n;
    n2=0;
    d=1;
    cout<<"max:"<<max<<"min:"<<min<<endl;
    while(n1>0){
        d1=n1-((int)n1/10*10);
        if(d1==max){
            aux=min;
        }
        else{
            if(d1==min)
                aux=max;
            else{
                aux=d1;                
            }
        }
        n2=aux*d+n2;
        d*=10;
        n1=(int)n1/10;
    }
    cout<<"El cambio de "<<n<<" es: "<<n2; 
    cout<<endl; 
    return 0;
}