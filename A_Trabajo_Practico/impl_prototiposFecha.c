#include <stdlib.h>
#include "mis_convenciones.h"
#include "prototiposFecha.h"

int checkAnio(int anio){
    return anio >= 1;
}

int checkMes(int mes){
    return mes >= 1 && mes <= 12;
}

int esBisiesto(int anio){
    return ((((anio % 4) == 0) && ((anio % 100) != 0)) || ((anio % 400) == 0));
}

int checkDia(int dia, int mes, int anio){
    int control = false;

    if(dia >= 1){
        if(mes == 2){
            if(esBisiesto(anio)){
                control = (dia >=1 && dia <= 29) ? true : false;
            }else{
                control = (dia >= 1 && dia <= 28) ? true : false;
            }
        }else{
            if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
                control = (dia >= 1 && dia <= 30) ? true : false;
            }else{
                control = (dia >= 1 && dia <= 31) ? true : false;
            }
        }
    }
    return control;
}


