/*
 * nombre: sine_cosine_series.c
 * 
 * Calcula el valor del del coseno
 * usando series de Maclaurin. 
 * 
 * El ángulo x en radianes y el orden de la serie son 
 * ingresadas por el usuario desde teclado 
 * y se imprime el resultado en pantalla
 * 
 * cos_series.h contiene el prototipo de la funcion cos_series
 * cos_series.c es la subrutina que calcula cos (x)
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//funcion externa que calcula cos x
#include "cos_series.h"
#include "cos_func.c"



int main()
{
  
  double cos_math;
  
  t=1;
  suma=1;
  
  
  printf("Ingrese el valor de x (Rads) \n");
  
  int s1= scanf("%lf", &x);
  
  
  printf("\nIngrese el orden deseado en la expansion: ") ; 
  
  
  int s2 = scanf("%d", &n) ; 
 
//Mensajes de alerta
  
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
  
  cos_series(x,n);
  
  printf("El valor aproximado es Cos (%f) es :%f\n ",x,suma) ; 
 
  cos_math= cos(x); 
  
  printf("El valor 'real'(de math.h) de Cos (%f) es :%f\n ",x,cos_math) ; 

  
  
}








