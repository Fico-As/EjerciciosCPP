//01) Intercambiar los valores de dos variables sin usar variables auxiliares.
#include<stdio.h>
#include<ncurses.h>
void main(){
    int a, b;
    a=12;
    b=6;
    printf("El valor de A=%d, B=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("El valor de A=%d, B=%d\n",a,b);
}