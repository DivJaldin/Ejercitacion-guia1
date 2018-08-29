#include <stdio.h>
#include <stdlib.h>

int suma (int, int); // PROTOTIPO O DECLARACION DE FUNCION ***
//ME SERVIRA PARA LLAMAR LA FUNCION CUANDO LAS USE DESDE OTRA BIBLIOTECAS
    //recibe valores que recive? ENTEROS int
int main()
{
    int nro1, nro2, result;
    printf("Ingrese 1er Operando: ");
    scanf("%d", &nro1);
    printf("\nIngrese 2do Operando: ");
    scanf("%d", &nro2);

    result=suma(nro1,nro2);//llamada
    system ("cls");
    printf("Resultado:% d \n",result);
    return 0;
}

int suma (int op1,int op2)
{
    //Le tengo que asignar un nombre a int, puedo declararlo en el prototipo tambien pero es indistinto
    int resultado;
    resultado = op1+op2;
    return resultado; //lleva el resultado al int
    //esto ira a parar a - result = suma (nro1,nro2) -
}

