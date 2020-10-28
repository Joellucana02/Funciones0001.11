#include <stdio.h>
#include <stdlib.h>

/*Calcular la resistencia total de 5 resistencias en serie, mostrar cada una de ellas y la
resistencia total.*/

int r1=0, r2=0, r3=0, r4=0, r5=0, rt=0;
void total();

int main()
{
    printf("Ingresar las 5 resistsencias: ");
    scanf("%d %d %d %d %d", &r1, &r2, &r3, &r4, &r5);
    total();
    return 0;
}
void total()
{
    rt = r1+r2+r3+r4+r5;
    printf("La suma de las resistencias: \n%d \n%d \n%d \n%d \n%d",r1,r2,r3,r4,r5);
    printf(" \n Es: %d",rt);
}
