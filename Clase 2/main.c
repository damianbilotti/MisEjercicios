#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i=0;
    int max=0;
    int min=0;
    float acumulador=0;
    float promedio=acumulador/i;
    float numIngresado;
    char respuesta;
    do
    {
        printf("Ingrese un numero \n");
        scanf("%f",&numIngresado);
        acumulador = acumulador + numIngresado;
        if (i==0)
        {
            max=numIngresado;
            min=numIngresado;
        }
        else
        {
            if (numIngresado>max)
            {
            max=numIngresado;
            }
            if (numIngresado<min)
            {
            min=numIngresado;
            }
        }
        i++;
        printf("Desea ingresar otro numero? s%");
        fflush(stdin);
        scanf("%c",&respuesta);
    }while (respuesta=='s');


    printf ("El promedio es %.2f",promedio);
    printf ("\n El numero max es %d", max);
    printf ("\n El numero min es %d", min);
}
