#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"
#include "mis_convenciones.h"

void salto(){
    printf("\n\n");
}
int main(){
    int operacion, salir = FALSE;
    float operando_1, operando_2, resultado;

    while(!salir){
        printf("\nBienvenido a la calculadora\n");
            salto();
        printf("Ingrese la operacion a realizar\n");
            salto();
        printf("1: suma, 2: resta, 3: multiplicacion, 4: division, 5: salir >> ");
        scanf("%d",&operacion);
        fflush(stdin);
            salto();
        if(operacion >= 1 && operacion <= 4){
            printf("Ingrese dos operandos >> ");
            scanf("%f %f",&operando_1,&operando_2);
        }
            salto();
        switch(operacion){
            case 1: {
                resultado = suma(operando_1,operando_2);
                printf("Resultado de la suma %f\n",resultado);
                break;
            }
            case 2: {
                resultado = resta(operando_1,operando_2);
                printf("Resultado de la resta %f\n",resultado);
                break;
            }
            case 3: {
                resultado = multiplicacion(operando_1,operando_2);
                printf("Resultado de la multiplicacion %f\n",resultado);
                break;
            }
            case 4: {
                resultado = division(operando_1,operando_2);
                printf("Resultado de la division %f\n",resultado);
                break;
            }
            case 5: {
                salir = TRUE;
                printf("Gracias por utilizar la calculadora");
                break;
            }
        }
    }

    return 0;
}
