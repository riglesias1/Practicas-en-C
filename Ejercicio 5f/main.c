#include <stdio.h>
#include <stdlib.h>

struct persona
{
    char nombre[20], apellido[20], apodo[20];
    int edad;
};

void entrada(struct persona *ref)
{
    printf("Escriba los siguientes datos para ser almacenados en la memoria. \n");
    printf("Nombre:  ");
    scanf("%s", &(*ref).nombre); // i obtiene el valor entrante de consola
    printf("Apellido:  ");
    scanf("%s", &(*ref).apellido); // i obtiene el valor entrante de consola
    printf("Apodo:  ");
    scanf("%s", &(*ref).apodo); // i obtiene el valor entrante de consola
    printf("Edad:  ");
    scanf("%d", &(*ref).edad); // i obtiene el valor entrante de consola
    printf("Datos guardados correctamente! \n\n");
}

void print(struct persona val)
{
    printf("Datos Guardados: Nombre: %s | Apellido: %s | Apodo: %s | Edad: %d\n",val.nombre, val.apellido, val.apodo, val.edad );
}

int main()
{
    struct persona data; // Datos de Frente y Fondo en cada lote;

    entrada(&data);
    print(data);

    return 0;
}
