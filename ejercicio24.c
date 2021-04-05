//Verificar si un triangulo es equilatero, isoceles, escaleno.
#include<stdio.h>
#include<ncurses.h>
void main(){
   int a,b,c;
    printf("Leer el lado A: ");
    scanf("%d",&a); 
    printf("Leer el lado B: ");
    scanf("%d",&b);
    printf("Leer el lado C: ");
    scanf("%d",&c);
    if(a==b && b==c)
        printf("Es un equilatero\n");
        else{
            if(a==b || a==c || b==c)
                printf("Es un isoceles\n");
                else{
                    printf("Es un escaleno\n");
                }
        }    
}