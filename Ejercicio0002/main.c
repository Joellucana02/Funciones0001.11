#include <stdio.h>
#include <stdlib.h>

/*Diseñar un algoritmo para calcular el perímetro y el área de un rectángulo.

        PERÍMETRO
        P = 2· a + 2· b
        ÁREA
        A= a · b*/

void perimetro();
void area();

int main()
{
    int a=0, b=0;
    printf("Ingrese un valor: ");
    scanf("%d",&a);
    printf("Ingrese otro valor: ");
    scanf("%d",&b);
    perimetro(a,b);
    area(a,b);
    return 0;
}
void perimetro(int a, int b)
{
    int p;
    p = 2*a+2*b;
    printf("El perimetro es: %d",p);
}
void area(int a, int b)
{
    int ar;
    ar = a*b;
    printf("\n Y el area es: %d",ar);
}
