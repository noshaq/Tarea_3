/*
 *
 * programa loop_performance.c
 *
 * este programa calcula el tiempo 
 * entre dos implementaciones del mismo 
 * loop para medir su performance.
 * 
 * la primera implementación es: 
 * 
 * A)
 * for (loop=0; loop<10; loop++) {
 *  for (i=0; i<N; i++) {
 *    ... = ... x[i] ...
 *   }
 *  }
 *
 * La segunda es:
 * 
 * for (i=0; i<N; i++) {
 * for (loop=0; loop<10; loop++) {
 * ... = ... x[i] ...
 *
 *
 *Respuesta. 
 * 
 * La imprementación más rápida es la segunda, debido a la 
 * localidad temporal de la variable x[i] que es reusada 
 * 10 veces en cada iteración del loop más externo.
 * 
 * 
 * El el caso A) la variable x[i] se recorre N veces en el 
 * for interno, evitando la localidad le la variable
 * 
 * 
 * 
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Variables globales

int i,k,loop;
int N=1000000;


//prototipos

#include "prototipos.h"
#include "loop1.c"
#include "loop2.c"



int main()
{
  
  
// llamada al loop 1
  loop1(N);
  
// llamada al loop 2
  
  loop2(N);
  
}







