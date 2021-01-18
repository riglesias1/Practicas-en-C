#include <stdio.h>
#include <stdlib.h>
#define CP 5 // CANTIDAD MAX DE PESONAS ALMACENADAS

struct fecha
{
    int dia , mes , ano;
};

struct persona
{
    char nombre[20], apellido[20], apodo[20];
    struct fecha fecha_nacimiento;
};

void entrada(struct persona *ref, int i)
{
    printf("Escriba los siguientes datos para ser almacenados en la memoria #%d. \n",i);
    printf("Nombre:  ");
    scanf("%s", &(*ref).nombre); // i obtiene el valor entrante de consola
    printf("Apellido:  ");
    scanf("%s", &(*ref).apellido); // i obtiene el valor entrante de consola
    printf("Apodo:  ");
    scanf("%s", &(*ref).apodo); // i obtiene el valor entrante de consola
    printf("Fecha Nacimiento: (Ej: 20 04 2000) ");
    scanf("%d %d %d", &(*ref).fecha_nacimiento.dia, &(*ref).fecha_nacimiento.mes, &(*ref).fecha_nacimiento.ano); // i obtiene el valor entrante de consola
    printf("Datos guardados correctamente! \n\n");
}

void print(struct persona val)
{
    printf("Datos Guardados: Nombre: %s | Apellido: %s | Apodo: %s | Fecha nacimiento: %02d/%02d/%d\n",val.nombre, val.apellido, val.apodo, val.fecha_nacimiento.dia, val.fecha_nacimiento.mes, val.fecha_nacimiento.ano );
}

int main()
{
    struct persona data[CP]; // Datos de Frente y Fondo en cada lote;

    for (int i=0; i<CP; i++){ entrada(&data[i], i); }
    for (int i=0; i<CP; i++){ print(data[i]); }

    return 0;
}
