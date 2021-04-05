//Suma de N numeros naturales
#include<stdio.h>
#include<ncurses.h>
void main(){
    int n,s;
    printf("Introducir el valor para N: ");
    scanf("%d",&n);    
    s=(n*(n+1))/2;
    printf("La suma de los primeros N numeros es %d \n",s);    
}