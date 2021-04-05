#include<stdio.h>
#include<ncurses.h>
void main(){
    int n;
    printf("Introducir el valor de N: ");
    scanf("%d",&n);
    n=0-n;
    printf("El valor restado es %d \n",n);
    
}