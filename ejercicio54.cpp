//Comprueba si un numero es capicuo
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,cont,ninv,dig,n2;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    n2=n;
    cont=0;
    ninv=0;
    while(n>0){
        dig=n-(int)n/10*10;
        ninv=10*ninv+dig;
        n=(int)n/10;
    }
    if (n2==ninv)
        cout<<"El numero: "<<ninv<<" Es CAPICUO"<<endl;
    else    
        cout<<"El numero: "<<ninv<<" NO es CAPICUO"<<endl;    
    return 0;
}