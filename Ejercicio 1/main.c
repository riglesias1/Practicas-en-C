#include <stdio.h>
#include <stdlib.h>

struct punto
{
    float x; // Izq y der
    float y; // Arriba y abajo
};

float vmedio(float a, float b)
{
    return ((a+b)/2);
}

struct punto puntomedio( struct punto *x, struct punto *y)
{
    struct punto cuenta;
    cuenta.x = vmedio( (*x).x,(*x).y );
    cuenta.y = vmedio( (*y).x,(*y).y );
    return (cuenta);
}

int main()
{
    struct punto vec[5]= { {4,1},{2,2},{1,3},{2,3},{1,6} };
    struct punto medio[1];

    for (int i=0; i<5; i++)
    {
        printf("Coordenadas de puntos N*%d: ", i);
        printf ("(%.2f,%.2f)\n", vec[i].x, vec[i].y);
    }

    printf ("\n");
    for (int i=0; i<4; i++)
    {
    medio[0].x= vec[i].x;
    medio[0].y= vec[(i+1)].x;

    medio[1].x= vec[i].y;
    medio[1].y= vec[(i+1)].y;

    puntomedio( &medio[0], &medio[1] );

    printf("Punto medio de coordenadas %d y %d: (%.2f,%.2f)\n",i, (i+1), puntomedio(&medio[0], &medio[1]).x, puntomedio(&medio[0], &medio[1]).y );
    }

    return 0;
}
