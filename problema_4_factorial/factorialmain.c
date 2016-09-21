/*
 * nombre: factorial.c
 * 
 * Calcula factorial de un numero 
 * ingresado por teclado, el algoritmo 
 * funciona bien para x> 60. Se imprime un mensaje de error
 * en tal caso
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//funciones auxiliares

#include "fac_proto.h"
#include "fact_function.c"

int main()
{
 
  x=1;
  
  printf("Ingrese el valor de x \n");
  
  int s1= scanf("%d", &x);
  
  if (x > 60)
   {   
       printf("X muy grande, Ingrese x<60\n ");
       exit(0);
   }   
   
  
  factorial(x);
  
  printf("el factorial de %d es %lld \n",x,fac);
 
   
}


