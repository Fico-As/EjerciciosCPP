/*30) Dado dos numeros enteros positivos rotar todos los digitos de cada numero hacia la derecha y
averiguar cuantos primos hay en la rotacion de cada numero, desplegar el numero.
/*Introducir el valor N: 1234
4123 NO es PRIMO
3412 NO es PRIMO
2341 es PRIMO
1234 NO es PRIM
*/
#include<stdio.h>
#include<ncurses.h>
void main(){
   int n,aux,sw,c,ndig,dig1,dig,d,i;
    printf("Introducir el valor N: ");
    scanf("%d",&n); 
    sw=0;
    aux=n;
    while (sw==0)
    {
        c=1;
        ndig=0;
        dig1=(int)n%10;
        n=(int)n/10;
        while(n>0){
            dig=(int)n%10;
            n=(int)n/10;
            ndig=c*dig+ndig;
            c*=10;
        }
        ndig=c*dig1+ndig;
        d=0;
        for(i=1;i<ndig;i++){
            if(ndig%i==0)
                d++;
        }
        if(d<=2)
            printf("%d es PRIMO\n",ndig);
        else
            printf("%d NO es PRIMO\n",ndig);
        if(ndig==aux)
            sw=1;
        n=ndig;
        ndig=0;
    }
}