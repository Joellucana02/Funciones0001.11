#include <stdio.h>
#include <stdlib.h>

/*Confeccionar el diagrama necesario para codificar un programa el cual me permita in-
gresar 2 números por teclado y los muestre por pantalla en líneas separadas.*/

void numero();

int main()
{
int a=0, b=0;
    printf ("Ingrese el primer valor ");
    scanf ("%d",&a);
    printf ("Ingrese el segundo valor ");
    scanf ("%d",&b);
    system ("cls");
    numero(a,b);
    return 0;
}
void numero(int a, int b){
    printf ("los valores ingresados fueron:\n%d \n%d", a, b);
}
