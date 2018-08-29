#include <stdio.h>
#include <stdlib.h>

int suma (int ,int );
int resta (int, int);
float division (int, int);

int main()
{
    int opcion;
    float op1=0;
    float op2=0;
    do{
        system ('cls');
        printf("menu");
        printf("\n\n 1.Ingresar 1er Operando (a=%.0f)", op1);
        printf("\n1  2.Ingresar 2do Operando (b=%.0f)", op2);
        printf("\n2  3.Calcular todas las Operaciones");
        printf("\n3  4.Mostrar todos los Resultados");
        printf("\n\n Seleccionar Opcion");
        scanf("%d", &opcion);
        switch(opcion){
            case '1':
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                break;

                default:
/*
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
*/

        }

    }while (opcion !=5);
    return 0;
}

int suma (int op1,int op2)
{
    //Le tengo que asignar un nombre a int, puedo declararlo en el prototipo tambien pero es indistinto
    int resultado1;
    resultado = op1+op2;
    return resultado;
}

int resta (int op1,int op2)
{
    int resultado2;
    resultado2 = op1-op2;
    return resultado2;
}

int division (int op1, int op2)
{
    int resultado3;
    resultado3 = op1/op2;
    return resultado3;
}

int multiplicacion (int op1, int op2)
{

    int resultado4;
    resultado4 = op1*op2;
    return resultado4;
}

int factorial (int op1)
{
    int resutado5a, resultado5b
    resultado5= op
}
