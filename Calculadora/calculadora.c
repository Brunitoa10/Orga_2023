#ifndef CALCULADORA_C_INCLUDED
#define CALCULADORA_C_INCLUDED
#include "calculadora.h"
#include <stdlib.h>

float suma(float a, float b){
    return a+b;
}
float resta(float a, float b){
    return a-b;
}
float multiplicacion(float a, float b){
    return a*b;
}
float division(float a, float b){
    if(b==0){
        exit(ERROR_DIVISION);
    }
    return a/b;
}

#endif // CALCULADORA_C_INCLUDED
