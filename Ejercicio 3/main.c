#include <stdio.h>
#include <stdlib.h>
#define PERSONAS {"Santiago","Gonzales",22},{"Rodrigo","Perez",36},{"Juan","Gaston",20},{"Chloe","Iglesias",21},{"Maxine","Prace",25},{"Laura","Incardona",39},{"Sarah","Gomez",28},{"Patricia","Sarin",55},{"Julian","Santana",16},{"Pedro","Tullio",44}

struct perso
{
    char nombre[20];
    char apellido[20];
    unsigned int edad;
};

void printperso(struct perso *p)
{
    printf("Apellido y Nombre: %s, %s \nEdad: %d\n----------\n",(*p).apellido,(*p).nombre,(*p).edad);
}

int main()
{
    struct perso lista[10]= { PERSONAS };

    for (int i=0; i<10; i++){
    if ((lista[i].edad >=20) && (lista[i].edad <=25) && (lista[i].apellido[0] =='G')) printperso(&lista[i]);
    }

    return 0;
}
