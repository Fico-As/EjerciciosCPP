//05) Mostrar el ultimo digito de los valores introducidos
#include<stdio.h>
#include<ncurses.h>
void main(){
    int n,s,a;
    printf("Introducir el valor para N: ");
    scanf("%d",&n);    
    s=(int)(n/10);
    a=n-(s*10);
    printf("El digito es %d \n",a);    
}