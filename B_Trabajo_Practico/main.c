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
        printf("(d) Intercala dos arreglos ordenados de forma ascendente\n");
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
                }else{
                    if(opcionChar == 'd'){
                        int arrb[TAMANIO];
                        inicializarArreglo(arreglo,TAMANIO);
                        inicializarArreglo(arrb,TAMANIO);
                        printf("Arreglo A antes de ordenar");
                            salto();
                        mostrarArreglo(arreglo,TAMANIO);
                            salto();
                        printf("Arreglo B antes de ordenar");
                            salto();
                        mostrarArreglo(arrb,TAMANIO);
                            salto();
                        ordenarArregloAscendente(arreglo,TAMANIO);
                        ordenarArregloAscendente(arrb,TAMANIO);
                        printf("Arreglo A luego de ordenar");
                            salto();
                        mostrarArreglo(arreglo,TAMANIO);
                            salto();
                        printf("Arreglo B luego de ordenar");
                            salto();
                        mostrarArreglo(arrb,TAMANIO);
                            salto();
                        printf("Intercalar");
                            salto();
                        intercalar(arreglo,TAMANIO,arrb,TAMANIO);
                    }
                }
            }
        }
    }else{
        if(opcionInt == 6){
            printf("Dado un arreglo de enteros y dos enteros a y n, modifique el arreglo de forma tal que cada aparicion del entero 'a' sea reemplazada por el entero n.\n");
                salto();
            printf("(a) Sin punteros\n");
            printf("(b) Con puteros\n");
                salto();
            printf("Opcion >> ");
                scanf("%c",&opcionChar);
                fflush(stdin);
                salto();
            if(opcionChar == 'a'){
                inicializarArreglo(arreglo,TAMANIO);
                ordenarArregloAscendente(arreglo,TAMANIO);
                mostrarArreglo(arreglo,TAMANIO);
                    salto();
                reemplazar(arreglo,19169,5,TAMANIO);
                    salto();
                mostrarArreglo(arreglo,TAMANIO);
            }else{
                if(opcionChar == 'b'){
                    int* arr;
                    arr = (int*) malloc(TAMANIO*sizeof(int));
                    inicializarArreglo(arr,TAMANIO);
                    mostrarArreglo(arr,TAMANIO);
                        salto();
                    reemplazar(arr,19169,5,TAMANIO);
                        salto();
                    mostrarArreglo(arr,TAMANIO);
                }else{
                    exit(-1);
                }
            }
        }
    }
    salto();
    return 0;
}
