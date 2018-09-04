#include <stdio.h>
#include <stdlib.h>
#include "Calculos.h"
#include "Entradas.h"

int main()
{
    int opcion,numero_1,numero_2,flagNumero_1 = 0,flagNumero_2 = 0,flagCalculos = 0,flagCero = 0,repeticion = 1;
    int suma,resta,cociente,producto,factorial_1,factorial_2;
    do
    {
        system("cls");
        printf("-----------------------------MENU-----------------------------\n");
        if(flagNumero_1 == 1)
        {
            printf("1. Ingresar 1er operando (A=%d)\n",numero_1);
        }
        else
        {
            printf("1. Ingresar 1er operando (A=x)\n");
        }
        if(flagNumero_2 == 1)
        {
            printf("2. Ingresar 2do operando (B=%d)\n",numero_2);
        }
        else
        {
            printf("2. Ingresar 2do operando (B=y)\n");
        }
        printf("3. Calcular todas las operaciones\n");
        printf("\ta) Calcular la suma (A+B)\n");
        printf("\tb) Calcular la resta (A-B)\n");
        printf("\tc) Calcular la division (A/B)\n");
        printf("\td) Calcular la multiplicacion (A*B)\n");
        printf("\te) Calcular el factorial (A!)\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n");
        /*if(obtenerEntero(&opcion,"","Error\n",1,5) == -1)
        {
            continue;
        }*/
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            scanf("%d",&numero_1);
            //if(obtenerEntero(&numero_1,"Ingrese un entero\n","Error entrada invalida",0,150) == 1)
            //{
               flagNumero_1 = 1;
               //numero_1 = 0;
            //}
            break;
        case 2:
            scanf("%d",&numero_2);
            //if(obtenerEntero(&numero_2,"Ingrese un entero\n","Error entrada invalida",0,150) == 0)
            //{
               flagNumero_2 = 1;
               //numero_2 = 0;
            //}
            break;
        case 3:
            if(flagNumero_1 == 1 && flagNumero_2 == 1)
            {
                suma = sumar(numero_1,numero_2);
                resta = restar(numero_1,numero_2);
                cociente = dividir(numero_1,numero_2);
                if(numero_2 == 0)
                {
                    flagCero = 1;
                }
                else
                {
                    flagCero = 0;
                }
                producto = multiplicar(numero_1,numero_2);
                factorial_1 = factorial(numero_1);
                factorial_2 = factorial(numero_2);
                flagCalculos = 1;
            }
            break;
        case 4:
            if(flagNumero_1 == 1 && flagNumero_2 == 1 && flagCalculos == 1)
            {
                system("cls");
                printf("4. Informar resultados\n");
                printf("\ta) El resultado de A+B es: %d\n",suma);
                printf("\tb) El resultado de A-B es: %d\n",resta);
                if(flagCero == 1)
                {
                    printf("No es posible dividir por cero");
                }
                else
                {
                    printf("\tc) El resultado de A/B es: %d\n",cociente);
                }
                printf("\td) El resultado de A*B es: %d\n",producto);
                printf("\te) El factorial de A es: %d y El factorial de B es: %d\n",factorial_1,factorial_2);
                system("pause");
            }
            break;
        case 5:
            repeticion = 0;
            break;
        }
    }while(repeticion == 1);
    return 0;
}
