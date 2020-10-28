#include <stdio.h>
#include <stdlib.h>

/*La jefa de recursos humanos de una empresa desea saber cuál es el porcentaje de
hombres y mujeres que han enviado su curricular postulándose para un puesto.*/

void salida();

int main()
{
    int m=0, h=0;
    printf("Ingresar cantidad de mujeres");
    scanf("%d",&m);
    printf("Ingresar cantidad de hombres");
    scanf("%d",&h);
    salida(m,h);
    return 0;
}
void salida(int m, int h)
{
    float ph;
    ph=h*100/(h+m);
    printf("El %.1f%c son hombres, y el %.1f%c Son mujeres.",ph,'%',100-ph,'%');
}
