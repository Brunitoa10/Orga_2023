#ifndef PROTOTIPOSFUNCIONES_H_INCLUDED
#define PROTOTIPOSFUNCIONES_H_INCLUDED
#include <stdio.h>
void salto();
//5a
void inicializarArreglo(int arr[],int longitud);
void mostrarArreglo(int arr[],int longitud);

//5b
void ordenarArregloAscendente(int arr[],int longitud);

//5c
int nElementosOrdenadosAscentes(int arr[],int n);

//5d
void intercalar(int arr[],int n, int arrb[],int m);

//6a
void reemplazar(int arr[],int a, int n, int longitud);

//9
void imprimirArchivo(FILE *archivo);

void copiarContenido(FILE *archivoA,FILE *archivoB);

//10
void buscarPalabraEnTexto(FILE *archivo, char palabra);
#endif // PROTOTIPOSFUNCIONES_H_INCLUDED
