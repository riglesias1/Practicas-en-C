#include <stdio.h>
#include <stdlib.h>
#define DMA 21,10,1995

struct fecha
{
    int dia , mes , ano;
};

void print(struct fecha val)
{
    printf("Fecha: %02d/%02d/%d\n\n",val.dia, val.mes, val.ano);
}

struct fecha *modifica(struct fecha *ref)
{
    struct fecha *ant;
    int x;
    printf("Indique cantidad de años a agregar a la fecha actual: ");
    scanf("%d", &x); // i obtiene el valor entrante de consola
    printf("\nDatos guardados correctamente! \n");
    printf("Fecha Anterior: %02d/%02d/%d\n",(*ref).dia, (*ref).mes, (*ref).ano);
    ant=ref;
    (*ref).ano+= x;
    printf("Fecha Actual: %02d/%02d/%d\n",(*ref).dia, (*ref).mes, (*ref).ano);
    return (ant);
}

int main()
{
    struct fecha data= {DMA}; // Datos de Frente y Fondo en cada lote

    print(data);
    modifica(&data);

    print(modifica(&data));

    return 0;
}
