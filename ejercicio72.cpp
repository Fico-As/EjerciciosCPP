/*72) Dado un numero positivo N se desea saber si es capicuo
Ej.: (0/1!) + (1/2!) + (1/3!) + (2/4!) + (3/5!) + (5/6!) + (8/7!) = 0.784
*/
#include<iostream>
#include<math.h>
using namespace std;
int capicuo(int n){
    int aux, c,dig;
    aux=n;
    c=0;
    while(n>0){
        dig=n-((int)n/10*10);
        n=(int)n/10;
        c=c*10+dig;
    }
    if(aux==c)
        return 1;
    else
        return 0;
}

int main(){
    unsigned int n;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
        if(capicuo(n))
            cout<<"El numero: "<<n<<" Es capicuo";        
        else
            cout<<"El numero: "<<n<<" NO es capicuo"; 
    //cout.precision(3);
    cout<<endl; 
    return 0;
}