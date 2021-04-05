//Resolver la ecuacion de binomio perfecto Ax2+Bx+C=0
#include<stdio.h>
#include<math.h>
#include<ncurses.h>

void main(){
   int a,b,c;
   double aux,a1,a2,a3,a4;
    printf("Leer el valor de A: ");
    scanf("%d",&a); 
    printf("Leer el valor de B: ");
    scanf("%d",&b);
    printf("Leer el valor de C: ");
    scanf("%d",&c);
    aux=b*b-4*a*c;
    a4=sqrt(aux);
    a1=(-b+a4)/(2*a);
    a2=(-b-a4)/(2*a);
    a3=(-b)/(2*a);
    if(aux>0){
        printf("La raiz 1=%f, la raiz 2=%f",a1,a2);
    }
    if(aux==0){
        printf("La raiz iguales =%f",a3);
    }
    if(aux<0){
        printf("La raiz es imaginaria");
    }
    printf("\n");
}