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
static void merge(int arr[],int ini, int medio, int fin){
    int i = ini, j = medio+1, posB = 0;
    int nuevoArreglo[fin-ini+1];

    while(i <= medio && j <= fin){
        if(arr[i] < arr[j]){
            nuevoArreglo[posB++] = arr[i++];
        }else{
            nuevoArreglo[posB++] = arr[j++];
        }
    }
    while(i<=medio){
        nuevoArreglo[posB++] = arr[i++];
    }
    while(j<=fin){
        nuevoArreglo[posB++] = arr[j++];
    }
    //Copio el contenido de nuevoArreglo en el arreglo original
    for(i=ini, posB = 0; i<=fin; i++,posB++){
        arr[i] = nuevoArreglo[posB];
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

//5C
int nElementosOrdenadosAscentes(int arr[],int n){
    int cumple = true;
    for(int pos = 0; pos < n && cumple; pos++){
        cumple = (arr[pos] < arr[pos+1]) ? true : false;
    }
    return cumple;
}
