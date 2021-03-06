/*
 * programa main_producto_arreglos.c
 * 
 * El programa calcula el tiempo que tarda
 * en ejecutarse las operaciones
 * 
 * a[i] = b[i] * c
 *
 * comparado con:
 * 
 * for k=1,nvectors
 * for i=1,length
 * 
 * a[i,k] = b[i,k] * c[k]
 *
 * 
 * Se define el macro "data_type" para cambiar
 * el tipo de dato sin modificar la definición de 
 * funciones y cantidades asociadas.
 * 
 * El programa imprime en pantalla
 * el tiempo que tarda cada ejecución 
 * en calcularse y recibe por linea de comandos (usando la variable ARGS en el makefile)
 * el valor i que define el tamaño de los arreglos
 * no mayores que 700
 * 
 * 
 * 11) Respuesta. 	
 * En el primer caso existe localidad temporal de la variable
 * c, pues es usada muchas veces y permanecerá en el cache.
 * 
 * 
 * 
 * En el segundo caso, en el loop interno permanecen constantes 
 * los indices con k. Por tanto, en el ciclo interno
 * c[k] tiene localidad temporal. Pero al estar ratando con arreglos
 * de 2 dimensiones, la rapidez del código disminuye
 * 
 * 
 * 12) Tiempo de ejecución:
 * 
 * a) para double: ---> El tiempo que tomo evaluar el areglo a[i]=b[i]*c es:
 *                 ---> CPU_TIME_USED (segs)=0.000004
 * 
 * 		   ---> El tiempo que tomo evaluar el areglo a[i,k] = b[i,k] * c[k] es:
 * 		   ---> CPU_TIME_USED (segs)=0.003222
 *
 * 
 * b) Para floats: ---> El tiempo que tomo evaluar el areglo a[i]=b[i]*c es:
 *                 ---> CPU_TIME_USED (segs)=0.000003
 *
 *		    ---> El tiempo que tomo evaluar el areglo a[i]=b[i]*c es:
 *		    --->CPU_TIME_USED (segs)=0.002012
 *
 * c) Para ints:   ---> El tiempo que tomo evaluar el areglo a[i]=b[i]*c es:
 *                 ---> CPU_TIME_USED (segs)=0.000003
 *
 *		    ---> El tiempo que tomo evaluar el areglo a[i,k] = b[i,k] * c[k] es:
 *		    ---> CPU_TIME_USED (segs)=0.001971

 * 
 * 
 * El tiempo de ejecucion es menor en el caso de ints, debido a que se gasta menos
 * tiempo efectuando redondeos y operaciones con la mantisa, como en el caso de los 
 * doubles y floats
 */


// Definicion de un macro para el tipo de datos del problema 12
#define data_type double

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



int i,k;
data_type c=3;

#include "prototipos.h"
#include "fun_arreglos.c"
#include "fun_arreglo2.c"


int main(int argc, char *argv[])
{
  

  int array_size;
  
  if(argc != 2)
    {
 
      printf("¡ERROR!--> Ingrese:\n");
      printf("---> %s & (integer) array_size\n", argv[0]);
      exit(0);
       
    }

  
  array_size = atoi(argv[1]);
  
  if(array_size > 700)
  {
   printf("El arreglo es muy grande, escoja: array_size > 700\n");
   exit(0);
  }

  
 //llamada a las funciones que evaluan los arreglos
    
   arreglo1(array_size);
   
   arreglo2(array_size);
   
 
  
  
  return 0;
}


