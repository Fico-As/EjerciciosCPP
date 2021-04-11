#include <ncurses.h>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iostream>// pide para poder usar siertas funciones
using namespace std; //necesario para usar el cout y el cin el la libreria
//reemplazo de GOTOXY
template <class T>
inline string ToString(const T& t) {
  stringstream ss;
  ss << t;
  return ss.str(); 
}
inline string gotoxy1(const int& x,const int& y) {
  return "\33[" + ToString(x) + ";" + ToString(y) + "H"; 
}
// comprueba si en un numero primo  o no
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
// devuelve el factorial de un numero
int factorial(int n){
    int c=1,i;
    for(i=1;i<=n;i++)
        c*=i;
    return c;
}
//comprueba si un numero es capicuo
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
// comprueba si un numero es curioso
// es curioso cuando se repite al final de su propia multiplicacion
//25x25=625 se repite el 25 al final del 625
int curioso(int x){
    int aux,c,d,dig,num=0;
    aux=x;
    c=0;
    d=0;
    while(x>0){
        x=(int)x/10;
        c++;
    }
    x=aux*aux;
    while(d<c){
        dig=x-((int)x/10*10);
        x=(int)x/10;
        num=dig*pow(10,d)+num;
        d++;
    }
    if(aux==num)
        return 1;
    else
        return 0;
}
//Dado un numero devuelve los digitos centrales del numero.
int digCentral(int n){
    int aux, c, med,pot;
    aux=n;
    c=0;
    while(n>0){
        n=(int)n/10;
        c++;
    }
    if(c%2==0){
        med=c/2-1;
        aux=(int)aux/pow(10,med);
        med=aux%100;
    }
    else{
        med=(int)c/2;
        aux=(int)aux/pow(10,med);
        med=aux%10;
    }
    return med;
}
//elimina los numeros pares de un valor dado
int eliminaPar(int n){
    int a, c, dig,pot;
    a=0;
    c=1;
    while(n>0){
        //dig=n-((int)n/10*10);
        dig=(int)n%10;
        n=(int)n/10;
        if(dig%2!=0){
            a=dig*c+a;
            c*=10;
        }
    }
    return a;
}
//convierte un valor X en base decimal a Base B del 1 al 9
int convierteDecimalaBaseX(int x,int b){
    int a, c, n,res;
    n=0;
    c=1;
    while(x>0){
        //dig=n-((int)n/10*10);
        res=(int)x%b;
        x=(int)x/b;
        n=res*c+n;
        c*=10;
    }
    return n;
}
//Vectore leer y mostrar
void leer_vector(int v1[],int t){
    cout<<"introducir valores \n";
    for(int i=0;i<t;i++)
    cin>>v1[i];
}
void mostrar_vector(int v1[],int t){
    cout<<"\nLa salida es:\n";
    for(int i=0;i<t;i++){
        if(i!=t-1)
            cout<<v1[i]<<", ";
        else
            cout<<v1[i]<<" ";
    }
    
}
//funciones para matrices
void mostrar_matriz(int m[20][20],int n,int n1){
    int f,c;
    for(int f=1;f<=n;f++){
        for(c=1;c<=n1;c++){
            cout<<"   "<<m[f][c];
        }
        cout<<endl;
    }
}
void mostrar_matriz_xy(int m[20][20],int n,int n1){
    int f,c;
    system("clear");
    for(int f=1;f<=n;f++){
        for(c=1;c<=n1;c++){
            cout<<gotoxy1(f+2,c*4)<<m[f][c];
        }
        cout<<endl;
    }
}
void cargar_matriz_random(int a[20][20], int n,int n1,int r){
    int c,i;
    for(i=1;i<=n;i++){
        for(c=1;c<=n1;c++){
            a[i][c]=rand()%r;
        }        
    }
}
void cargar_matriz_ceros(int a[20][20], int n,int n1){
    int c,i;
    for(i=1;i<=n;i++){
        for(c=1;c<=n1;c++){
            a[i][c]=0;
        }        
    }
}
void cubo_magico(int m[20][20],int n){
    int f, c,i;
    f=1;
    c=(n+1)/2;
    for(i=1;i<=n*n;i++){
        if(f<1)
            f=n;
        if(c>n)
            c=1;
        m[f][c]=i;
        f--;
        c++;
        if(i%n==0){
            f=f+2;
            c=c-1;
        }
    }
}