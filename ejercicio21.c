//Dado cinco numeros v,w,x,y,z, hallar el menor
#include<stdio.h>
#include<ncurses.h>
void main(){
    int v,w,x,y,z;
    int men;
    printf("Introducir el valor para v: ");
    scanf("%d",&v); 
    printf("Introducir el valor para W: ");
    scanf("%d",&w);  
    printf("Introducir el valor para X: ");
    scanf("%d",&x); 
    printf("Introducir el valor para Y: ");
    scanf("%d",&y); 
    printf("Introducir el valor para Z: ");
    scanf("%d",&z); 
    men=v;
    if(w<men)
        men=w;
    if(x<men)
        men=x;
    if(y<men)
        men=y;
    if(z<men)
        men=z;
    printf("El menor de los valores es %d \n",men);    
}