#include <stdio.h>
#include <stdlib.h>
#include "mis_convenciones.h"
#include "prototiposFecha.h"

void salto(){
    printf("\n\n");
}

int main(){
    int opcion = 0;

    printf("Seleccione una opcion");
        salto();
    printf("1: Verificar fecha");
        salto();
    printf("2: De segundos a hh: mm: ss");
        salto();
    printf("3: Conversiones");
        salto();
    printf("4: Secuencia de numeros y muestra mayor menor y su promedio");
        salto();
    printf("Ingrese opcion >> ");
    scanf("%d",&opcion);
        salto();
        fflush(stdin);

    if(opcion == 1){
        int dia = 0, mes = 0, anio = 0;
        int es_valida = false;

        printf("Ingrese una fecha separada por espacios >> ");
            scanf("%d %d %d",&dia,&mes,&anio);
            salto();
            fflush(stdin);

        es_valida = (checkAnio(anio) && checkMes(mes) && checkDia(dia,mes,anio)) ? true : false;

        if(es_valida){
            printf("La fecha ingresada es valida.");
        }else{
            printf("La fecha ingresada no es valida.");
        }
            salto();
    }else{
        if(opcion == 2){
            long int horas,minutos,segundos,tmp;

            printf("Ingrese los segundos >> ");
                scanf("%ld",&segundos);
                fflush(stdin);
                salto();
            if(segundos>=0){
                tmp = segundos;
                horas = segundos / 3600;
                segundos %= 3600;
                minutos = segundos / 60;
                segundos %= 60;

             printf("Los %ld segundos representan %ld horas %ld minutos %ld segundos",tmp,horas,minutos,segundos);
            }else{
                printf("Ingreso un valor invalido");
                exit(ERROR_NUM_NEGATIVO);
                salto();
            }
            salto();
        }else{
            if(opcion == 3){
                char tmpOpcion;
                printf("Eliga una opcion");
                    salto();
                printf("(a) De grados Celsius a grados Fahrenheit");
                    salto();
                printf("(b) De millas por hora a kilometros por minuto");
                    salto();
                printf("(c) De litros cada 100 km a millas por galon");
                    salto();
                printf("Opcion >> ");
                    scanf("%c",&tmpOpcion);
                if(tmpOpcion == 'a'){
                    int celsius;
                    printf("Ingrese grados celsius >> ");
                        scanf("%d",&celsius);
                    printf("Los grados %d Celsius en grados Fahrenheit %f",celsius,(celsius*1.8)+32);
                        salto();
                }else{
                    if(tmpOpcion == 'b'){
                        int millas;
                        printf("Ingrese las millas >> ");
                            scanf("%d",&millas);
                        printf("Las millas %d convertidas en kilometros por minuto %f",millas,(millas/60)*1.60934);
                            salto();
                    }else{
                        if(tmpOpcion == 'c'){
                            int litros;
                            printf("Ingrese las litros >> ");
                                scanf("%d",&litros);
                            printf("Las litros %d convertidas a galones %f",litros,(litros*0.264172));
                                salto();
                        }
                    }
                }
            }else{
                if(opcion == 4){
                    int suma,mayor,menor,cant,num;
                    float promedio;
                    suma = 0; mayor = 0; menor = 0;
                    printf("Ingrese la cantidad de numeros que desea insertar >> ");
                        scanf("%d",&cant);
                    printf("Ingrese secuencia >> ");
                    for(int i = 0; i<cant; i++){
                        scanf("%d",&num);
                        if(num > mayor){
                            mayor = num;
                        }else{
                            if(num<menor){
                                menor = num;
                            }
                        }
                       suma += num;
                    }
                    promedio = (float)suma/cant;
                        salto();
                    printf("El mayor de la secuencia ingresada es %d",mayor);
                        salto();
                    printf("El menor de la secuencia ingresada es %d",menor);
                        salto();
                    printf("El promedio de la secuencia ingresada es %f",promedio);
                        salto();
                }
            }
        }
    }
    return 0;
}
