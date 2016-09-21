/*
 * nombre: sine_series.c
 * 
 * Calcula el valor del del sena
 * usando series de Maclaurin. 
 * 
 * El ángulo x en radianes y el orden de la serie son 
 * ingresadas por el usuario desde teclado 
 * y se imprime el resultado en pantalla
 * 
 * cos_series.h contiene el prototipo de la funcion seno_series
 * cos_series.c es la subrutina que calcula sena (x)
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//funcion externa que calcula cos x
#include "sine_series.h"
#include "sine_func.c"



int main()
{
  
  double sine_math;
  
  k=1;

  
  printf("Ingrese el valor de x (Rads) \n");
  
//s1 y s2 evitan un warning en el valor de retorno de scanf  
  
  int s1= scanf("%lf", &x);
  
  
  printf("\nIngrese el orden deseado en la expansion: ") ; 
  
  
  int s2 = scanf("%d", &n) ; 
  
  
  if (n < 0)
   {   
       printf("Error, no se puede realizar la expansion si el orden es negativo\n ");
       exit(0);
   }   
 
 
 
  if (x > 40)
   {   
       printf("X muy grande, Ingrese x<40\n ");
       exit(0);
   }   
   

  //Llamada a la funcion que calcula la expansion
  
  sine_series(x,n);
  
  printf("El valor aproximado es sen (%f) es :%f\n ",x,suma) ; 
 
  sine_math= sin(x); 
  
  printf("El valor 'real'(de math.h) de Sen (%f) es :%f\n ",x,sine_math) ; 

  
  
}








