//Deducir el numero de dias de un mes
#include<stdio.h>
#include<ncurses.h>
void main(){
   int m,a;
    printf("leer el MES: ");
    scanf("%d",&m); 
    printf("Leer el AÑO: ");
    scanf("%d",&a);
    switch (m)
    {
    case 1: printf("El mes es ENERO tiene 31 dias");
        break;
     case 2: if(a%4==0){
                printf("El mes es FEBRERO tiene 29 dias");
            }
            else{
                printf("El mes es FEBRERO tiene 28 dias");
            }
        break;
    case 3: printf("El mes es MARZO tiene 31 dias");
        break;
    case 4: printf("El mes es ABRIL tiene 30 dias");
        break;
    case 5: printf("El mes es MAYO tiene 31 dias");
        break;
    case 6: printf("El mes es JUNIO tiene 30 dias");
        break;
    case 7: printf("El mes es ENERO tiene 31 dias");
        break;
    case 8: printf("El mes es ENERO tiene 31 dias");
        break;
    case 9: printf("El mes es ENERO tiene 30 dias");
        break;
    case 10: printf("El mes es ENERO tiene 31 dias");
        break;
    case 11: printf("El mes es ENERO tiene 30 dias");
        break;
    case 12: printf("El mes es ENERO tiene 31 dias");
        break;
    default: printf("El mes esta fuera de rango");
        break;
    }
    printf("\n");
}