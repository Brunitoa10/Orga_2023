#include <stdio.h>
#include <stdlib.h>
#include "prototiposFunciones.h"
#include "MIs_conveciones.h"


int main(){
    int opcionInt;
    char opcionChar;
    int arreglo[TAMANIO];
    printf("Trabajo Practico B");
        salto();
    printf("Menu de opciones");
        salto();
    printf("5 - 6 - 7 - 8 - 9 - 10 >> ");
        scanf("%d",&opcionInt);
        fflush(stdin);
        salto();
    if(opcionInt == 5){
        printf("(a) Inicializar arreglo con enteros aleatorios \n");
        printf("(b) Ordenar arreglo de forma ascendente");
            salto();
        printf("Opcion >> ");
            scanf("%c",&opcionChar);
            fflush(stdin);
            salto();
        if(opcionChar == 'a'){
            inicializarArreglo(arreglo,TAMANIO);
            mostrarArreglo(arreglo,TAMANIO);
        }else{
            if(opcionChar == 'b'){
                inicializarArreglo(arreglo,TAMANIO);
                ordenarArregloAscendente(arreglo,TAMANIO);
                mostrarArreglo(arreglo,TAMANIO);
            }
        }
    }
    salto();
    return 0;
}
