/*29) Dado dos numeros enteros positivos se desea saber si estos numeros son amigos se dice que dos 
numeros son amigos si cada uno de ellos es igual a la suma de los divisores del otro excepto el mismo
/*Introducir el valor A: 220
Introducir el valor B: 284
A= 220 =>1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110, = 284
B= 284 =>1, 2, 4, 71, 142, = 220
El numero 220 y el numero 284 son AMIGOS*/
#include<stdio.h>
#include<ncurses.h>
void main(){
   int a,b,c1,c2,i,mcd,a1,b1;   
    printf("Introducir el valor A: ");
    scanf("%d",&a); 
    printf("Introducir el valor B: ");
    scanf("%d",&b);
    c1=0;
    c2=0;
    printf("A= %d =>",a);
    for(int i=1;i<a;i++){
        if(a%i==0){
            printf("%d, ",i);
            c1=c1+i;
        }
    }
    printf("= %d\n",c1);
    printf("B= %d =>",b);
    for(int i=1;i<b;i++){
        if(b%i==0){
            c2=c2+i;
            printf("%d, ",i);
        }
    }
    printf("= %d\n",c2);
    if((a==c2)&&(c1==b))
        printf("El numero %d y el numero %d son AMIGOS\n",a,b);    
    else
        printf("El numero %d y el numero %d NO son AMIGOS\n",a,b);
}