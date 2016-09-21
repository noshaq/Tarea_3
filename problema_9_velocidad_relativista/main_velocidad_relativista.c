/*
 * programa : velocidad_relativista.c
 * 
 * Este prorama evalua 
 * la masa relativista de 
 * una partícula que se mueve 
 * en un intervalo de velocidades 
 * de [0,c).
 * 
 * Recime como parámetro de entrada, un incremento
 * delta_v de la velocidad  arrojando como
 * resultado un archivo de texto con la siguente estructura
 * 
 * v	v/c	m
 * 
 * 
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#include "prototipos.h"
#include "masa_relarivista.c"


double delta_v;


void main()
{
  
  printf("Ingrese el tamano del incremento para la velocidad (delta_v m/s) > 10\n");
  
  int s1 = scanf("%lf",&delta_v); 
  
  if(delta_v > 300000)
  {
   printf("Incremento en velocidad mayor que c\n");
   exit(1);
  }
  
  
  if(delta_v < 10)
  {
   printf("Incremento en velocidad muy pequeño, archivo de salida muy grande\n");
    printf("10<Ingrese delta_v <300000\n");

   exit(1);
  }
  
    //Llamada a la funcion que evalua el polinomio

   masa_relativista(delta_v);
  
}
