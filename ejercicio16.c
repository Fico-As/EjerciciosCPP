/*16) Generar la siguiente serie: 
Introdusca un valor: 14
 2,  1,  0,  6,  5,  4,  12,  11,  10,  20,  19,  18,  30,  29,  28 
*/
#include<stdio.h>
#include<ncurses.h>
#include<math.h>
void main(){
    int n,val,aux,c,j,cont,i;
    printf("Introdusca un valor: ");
    scanf("%d",&n);
    cont=0;
    i=1;
    c=2;
    val=0;
    while(cont<=n){
        val=i*c;
        i++;
        c++;
        aux=1;
        while(cont<=n && aux<=3)
        {
            aux++;
            if(cont!=n)
                printf(" %d, ",val);
            else
                printf(" %d ",val);
            val--;
            cont++;
        }   
    }
    printf("\n "); 
}