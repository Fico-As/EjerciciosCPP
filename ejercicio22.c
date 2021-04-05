//Leer tres valores calcular T=-x-y+z
#include<stdio.h>
#include<ncurses.h>
void main(){
   int x,y,z;
    printf("Introducir el valor para X: ");
    scanf("%d",&x); 
    printf("Introducir el valor para Y: ");
    scanf("%d",&y);
    printf("Introducir el valor para Z: ");
    scanf("%d",&z);  
    if(x<0){
        printf("El resultado T=-%d-%d+%d=%d",x,y,z,-x-y+z);
    }
    if((0<=x) && (x<10)){
        if(y<0){
            if(z-y>100){
                printf("El resultado T=%d-%d-%d=%d",x,y,z,x-y-z);
            }
            else{
                printf("El resultado T=%d+%d-%d=%d",x,y,z,x+y-z);
            }
        }
        else{
            printf("El resultado T=%d+%d-3*%d=%d",x,y,z,x+y-3*z);
        }
    }
    if((10<=x)&&(x<100)){
        if(y>10){
            if(3*z>=50){
                printf("El resultado T=2*%d-%d-3*%d=%d",x,y,z,2*x-y-3*z);
            }
            else{
                printf("El resultado T=2*%d-%d+3*%d=%d",x,y,z,2*x-y+3*z);
            }
        }
        else{
            if(4+y-z>y-2){
                printf("El resultado T=%d-2*%d-%d=%d",x,y,z,x-2*y-z);
            }
            else{
                printf("El resultado T=%d-%d-2*%d=%d",x,y,z,x-y-2*z);
            }
        }
    }
    if(x>100){
        printf("El resultado T=%d-%d+%d=%d",x,y,z,x-y+z);
    }    
    printf("\n");
}