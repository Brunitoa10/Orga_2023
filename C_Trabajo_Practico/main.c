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
        printf("(b) Ordenar arreglo de forma ascendente \n");
        printf("(c) Determinar si los primeros n elementos de un arreglo estan ordenados de forma ascendente\n");
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
            }else{
                if(opcionChar == 'c'){
                    printf("Ingrese cantidad de elementos a evaluar (debe ser menor a 10) >> ");
                        scanf("%d",&opcionInt);
                        fflush(stdin);
                        salto();
                    if(opcionInt<=TAMANIO){
                        inicializarArreglo(arreglo,TAMANIO);
                        printf("Antes de acomodar");
                            salto();
                        mostrarArreglo(arreglo,TAMANIO);
                            salto();
                        if(nElementosOrdenadosAscentes(arreglo,opcionInt)){
                            printf("Verifica");
                        }else{
                            printf("No verifica");
                        }
                            salto();
                        printf("Luego de acomodar");
                        ordenarArregloAscendente(arreglo,TAMANIO);
                            salto();
                         mostrarArreglo(arreglo,TAMANIO);
                            salto();
                        if(nElementosOrdenadosAscentes(arreglo,opcionInt) == true){
                            printf("Verifica");
                        }else{
                            printf("No verifica");
                        }
                    }else{
                        printf("Error n > 10");
                        exit(0);
                    }
                }
            }
        }
    }
    salto();
    return 0;
}
