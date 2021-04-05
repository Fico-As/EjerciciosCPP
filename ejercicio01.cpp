//Intercambiar los valores leidos por teclado de dos variables sin usar variables auxiliares.

#include<stdio.h>
int main(){
    int a, b;
    printf("Introducir el valor de A: ");
    scanf("%d",&a);
    printf("Introducir el valor de B: ");
    scanf("%d",&b);
    printf("El valor de A=%d, B=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Los valores intercambiados son:\n");
    printf("El valor de A=%d, B=%d\n",a,b);
    return 0;
}