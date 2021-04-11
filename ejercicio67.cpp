/*67) Introducir numeros enteros positivos finalizar cuando se introdusca -99
a) Si el numero es PAR calcular el factorial
b) si el numero es impar verificar si es primo
c) Si el numero es impar y multiplo de 3 mostrar la suma de sus divisores.
Ej.: Introduce la cantidad de N:5
El numero 5  es un numero PRIMO
Introduce la cantidad de N:6
El factorial de  6  es=720
Introduce la cantidad de N:3
Sus divisores son: 1, 3
Para salir digite -99
*/
#include<iostream>
#include<math.h>
using namespace std;

int esprimo(int n){
    int c=0,i;
    for(i=1;i<=n;i++){
        if(n%i==0)
            c++;
    }   
    if(c<=2)
        return 1;
    else
        return 0;
}
int factorial(int n){
    int c=1,i;
    for(i=1;i<=n;i++)
        c*=i;
    return c;
}
int main(){
    int n,a,c,b,s,d1,i;
    
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    do{
    if(n%2==0){
        cout<<"El factorial de  "<<n<<"  es="<<factorial(n);
    }
    else if (n%3==0){
        c=1;
        s=0;
        cout<<"Sus divisores son: ";
        for(i=1;i<=n;i++){
            if(n%i==0){
                c*=i;
                s=s+c;
                cout<<c<<", ";
            }
        }
        cout<<"\nLa suma de sus divisores es: "<<s;
    }
    else{
        if(esprimo(n))
            cout<<"El numero "<<n<<"  es un numero PRIMO";
        else
            cout<<"El numero "<<n<<" NO es un numero PRIMO";
    }
    cout<<"\nPara salir digite -99"<<endl;
    cout<<"Introduce la cantidad de N:";
    cin>>n;
    }while(n!=-99);
    
    return 0;
}