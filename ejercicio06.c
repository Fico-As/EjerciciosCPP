//06)Introducir tres valores y ordenar para saber cuales el mayor, menor y central 
#include<stdio.h>
#include<ncurses.h>
void main(){
    int a,b,c;
    printf("Introducir el valor para A: ");
    scanf("%d",&a); 
    printf("Introducir el valor para B: ");
    scanf("%d",&b); 
    printf("Introducir el valor para C: ");
    scanf("%d",&c);    
    if (a>b){
        if(a>c){
            if(b>c){
                printf("El mayor es:%d, el central es: %d, el menor es: %d \n",a,b,c);    
            }
            else{
                printf("El mayor es:%d, el central es: %d, el menor es: %d \n",a,c,b);
            }
        }
        else{
            printf("El mayor es:%d, el central es: %d, el menor es: %d \n",c,a,b);
        }
    }
    else{
        if(b>c){
            if(c>a){
                printf("El mayor es:%d, el central es: %d, el menor es: %d \n",b,c,a);
            }
            else{
                printf("El mayor es:%d, el central es: %d, el menor es: %d \n",b,a,c);
            }
        }
        else{
            printf("El mayor es:%d, el central es: %d, el menor es: %d \n",c,b,a);
        }
    }    
    //printf("El digito es %d \n",a);    
}