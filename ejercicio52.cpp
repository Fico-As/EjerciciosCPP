//Contar el numero de digitos
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,cont,prim;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    cont=0;
    while(n!=0){
        n=(int)n/10;
        cont++;
    }
    cout<<"tiene: "<<cont<<" digitos"<<endl;
    return 0;
}