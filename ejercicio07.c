//07) Dado dos numeros A, B, con parte decimal sumar las partes decimales.
#include<stdio.h>
#include<ncurses.h>
#include<math.h>
void main(){
    float a,b,a1,b1;
    double parteDecimal, parteEntera,s1;
    double parteDecimal1, parteEntera1;
    printf("Introducir el valor para A: ");
    scanf("%f",&a); 
    printf("Introducir el valor para B: ");
    scanf("%f",&b);  
    parteDecimal=modf(a,&parteEntera);
    parteDecimal1=modf(b,&parteEntera1);
    s1=parteDecimal+parteDecimal1;
    //a1=a-(int)a;
    //b1=b-(int)b;
    printf("La suma de los decimales es %2f \n",s1);    
}