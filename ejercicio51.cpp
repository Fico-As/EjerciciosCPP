//Verifica si un numero es primo o no 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,cont,prim;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    if (n==(int)n){
        if(n>1){
            cont=2;
            prim=1;
            for(cont=2;cont<=n-1;cont++){
                prim=n%cont;
                if(prim==0)
                    cont=n-1;//corta el bucle
            }
            if(prim>0)
                cout<<"Es un numero PRIMO"<<endl;
            else
                cout<<"NO es un numero PRIMO"<<endl;
        }
    }
    return 0;
}