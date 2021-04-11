//03) Sumar dos valores leidos por teclado, sin usar el signo mas
#include<stdio.h>
#include<ncurses.h>
void main(){
    int x, s, y;
    printf("Introducir un valor para X: ");
    scanf("%d",&x);
    printf("Introducir un valor para Y: ");
    scanf("%d",&y);
    s=x-(-y);
    printf("El valor de la restada es %d \n",s);    
}