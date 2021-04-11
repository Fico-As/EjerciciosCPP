//Invertir un numero
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,cont,ninv,dig;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    cont=0;
    ninv=0;
    while(n!=0){
        dig=n-(int)n/10*10;
        ninv=10*ninv+dig;
        n=(int)n/10;
    }
    cout<<"tiene: "<<ninv<<" digitos"<<endl;
    return 0;
}