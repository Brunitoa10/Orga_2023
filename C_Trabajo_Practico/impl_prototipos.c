#include "prototiposFunciones.h"
#include <stdlib.h>
#include <stdio.h>
#include "MIs_conveciones.h"

void salto(){
    printf("\n\n");
}

//5a

void inicializarArreglo(int arr[],int longitud){
    for(int pos = 0; pos < longitud; pos++){
        arr[pos] = rand();
    }
}
void mostrarArreglo(int arr[],int longitud){
    for(int pos = 0; pos < longitud; pos++){
        printf("%d ",arr[pos]);
    }
}

//5b
//Metodo mergeSort
static void merge(int arr[],int i, int m, int fin){
    int inicio = i, medio = m+1, posB = 0;
    int nuevoArreglo[TAMANIO];

    while(inicio <= medio && medio <= fin){
        if(arr[inicio] < arr[fin]){
            nuevoArreglo[posB++] = arr[inicio++];
        }else{
            nuevoArreglo[posB++] = arr[medio++];
        }
    }
    while(inicio<=medio){
        nuevoArreglo[posB++] = arr[inicio++];
    }
    while(medio<=fin){
        nuevoArreglo[posB++] = arr[medio++];
    }
    //Copio el contenido de nuevoArreglo en el arreglo original
    for(inicio = i, posB = 0; inicio<=fin; inicio++,posB++){
        arr[inicio] = nuevoArreglo[posB];
    }
}

static void mSort(int arr[], int ini, int fin){
    if(ini<fin){
        int medio = (ini+fin)/2;
        mSort(arr,ini,medio);
        mSort(arr,medio+1,fin);
        merge(arr,ini,medio,fin);
    }
}

void ordenarArregloAscendente(int arr[],int n){
    //Ordena la porcion del arreglo que comienza en 0 y termina en n-1
    mSort(arr,0,n-1);
}
