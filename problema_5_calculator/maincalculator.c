/*
 * nombre: calculator.c
 * 
 * realiza las operaciones 
 * algebraicas basicas
 * ingresando por teclado 
 * dos numeros y el operando.
 * Se imprime un mensaje de error 
 * si no se ingresa un operador valido
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//funcion externa que calcula cos x
#include "prototipo_calculadora.h"
#include "calculadora_funciones.c"

double x,y;
char operador_aritmetico;

int main()
{
  
  printf("Selecione el operador aritmetico (+, -, *, /)\n: ");
  int s1 = scanf("%c", &operador_aritmetico);
  
  printf("Ingrese el valor de x \n");
  int s2 = scanf("%lf", &x);
  
  
  printf("Ingrese el valor de y \n");
  int s3 = scanf("%lf", &y);
  
  
 
  switch(operador_aritmetico)
    {
        case '+':
            suma(x,y);
            break;

        case '-':
            resta(x,y);
            break;

        case '*':
            multiplicacion(x,y);
            break;

        case '/':
            division(x,y);
            break;
// Error!
        default:
            printf("El operador debe ser (+, -, *, /)! \n ");
    }
  
  return 0;

}



