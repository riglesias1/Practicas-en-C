#include <stdio.h>
#include <stdlib.h>
#define LMX 10
#define LOTES {13.5,15.5},{9.5,16},{10,16.5},{10.5,17},{11,17.5},{11.5,18},{12,18.5},{12.5,19},{13,19.5},{9,20}

struct lote
{
    float frente; // Ancho del terreno
    float fondo; // Largo del terreno
    // Superficie es frente*fondo
};

void printlotev(struct lote val[], float sup[], int mfr, int mfo, int msu)
{
    printf("Impreso por Valor:\n");
    printf("Lote de mayor Frente: Lote #%d - frente: %.2fm fondo: %.2fm Sup: %.2fm2\n", mfr, val[mfr].frente, val[mfr].fondo, sup[mfr]);
    printf("Lote de mayor Fondo : Lote #%d - frente: %.2fm fondo: %.2fm Sup: %.2fm2\n", mfo, val[mfo].frente, val[mfo].fondo, sup[mfo]);
    printf("Lote de mayor Sup.  : Lote #%d - frente: %.2fm fondo: %.2fm Sup: %.2fm2\n\n", msu, val[msu].frente, val[msu].fondo, sup[msu]);
}

void printloter(struct lote *ref[], float sup[], int mfr, int mfo, int msu)
{
    printf("Impreso por Referencia:\n");
    printf("Lote de mayor Frente: Lote #%d - frente: %.2fm fondo: %.2fm Sup: %.2fm2\n", mfr, (*ref[mfr]).frente, (*ref[mfr]).fondo, sup[mfr]);
    printf("Lote de mayor Fondo : Lote #%d - frente: %.2fm fondo: %.2fm Sup: %.2fm2\n", mfo, (*ref[mfo]).frente, (*ref[mfo]).fondo, sup[mfo]);
    printf("Lote de mayor Sup.  : Lote #%d - frente: %.2fm fondo: %.2fm Sup: %.2fm2\n\n", msu, (*ref[msu]).frente, (*ref[msu]).fondo, sup[msu]);
}


int main()
{
    struct lote vec[LMX]= { LOTES }; // Datos de Frente y Fondo en cada lote
    float sup[LMX], x; // Superficies de Lotes
    int mfr,mfo,msu; // Usado como referencia

    x= msu= sup[0];
    for (int i=0; i<LMX; i++){ // Guardo las superficies de todos los Lotes
        sup[i]= vec[i].frente * vec[i].fondo;
        if (x < sup[i]) { x= sup[i]; msu=i; } // Comparo el de mayor SUPERFICIE
    }

    x= mfr= vec[0].frente;
    for (int i=0; i<LMX; i++){ // Comparo el FRENTE mas grande
        if (x < vec[i].frente) { x= vec[i].frente; mfr=i; }
    }

    x= mfo= vec[0].fondo;
    for (int i=0; i<LMX; i++){ // Comparo el FONDO mas grande
        if (x < vec[i].fondo) { x= vec[i].fondo; mfo=i; }
    }

    printlotev(vec, sup, mfr,mfo,msu);
    printlotev(&vec, sup, mfr, mfo, msu);

    return 0;
}
