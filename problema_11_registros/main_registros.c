/*
 * programa main_registros.c
 * 
 * se busca medir la diferencia de 
 * rendimiento entre evaluar las expresiones 
 * 
 * t1 = sin(alpha) * x + cos(alpha) * y;
 * t2 = ­cos(alpha) * x + sin(alpha) * y;
 *
 * y al hacerlo usando 
 * 
 * s=sin(alpha)
 * c=cos(alpha)
 * 
 * t1 = s * x + c * y;
 * t2 = ­c * x + s * y
 *
 * 
 * Para ello usamos dos loops for.
 * con el loop mas externo variamos 
 * el rango máximo para las variables
 * x & y:
 * 
 *  	t_end= i/delta;
 * 
 * el loop interno discretiza x & y
 * en pasos delta=0.000001, que es suficiente 
 * para ilustrar el problema 
 *	x =  i*delta;
 *	y =  i*delta;
 * 
 * El programa entrega 4 archivos, uno por cada
 * funcion evaluada. La primera columna corresponde 
 * al numero de iteraciones y la segunda, al tiempo en 
 * segundos que dardaron dichas iteraciones.
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

double delta;
double t1a,t2a,t1b,t2b,alpha=5;

double s;
double c;

int i,max_range,n,t_end1a, t_end2a, t_end1b, t_end2b;

#include "prototipos.h"
#include "discretizacion_funciones.c"


int main()
{

  FILE *p_to_f;
  
  p_to_f = fopen("funcion1a.dat","w");
  
//tamaño del paso deseado
  
  delta=0.000001; 
  
// inicializacion de variables
  
 
  max_range=30;
  
  s = sin(alpha);
  c = cos(alpha);
  
//*************************************************************************  
//Loop del numero de iteraciones para f1
//*************************************************************************    
  
  for(i=1; i <= max_range; i++)
   {
    
    double start = clock();
    
    t1_alternativa1(i);
    
    double end = clock();
    
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
//     printf("t_end1a = %d  cpu_time = %lf\n", t_end1a, cpu_time_used);
    
    fprintf(p_to_f,"%d %lf\n", t_end1a, cpu_time_used);
     
   }
   
   
  fclose(p_to_f);
  
//*************************************************************************  
//Loop del numero de iteraciones para f2
//*************************************************************************  
  p_to_f = fopen("funcion2a.dat","w");
   
  for(i=1; i <= max_range; i++)
   {
      
     double start = clock();
     
     t2_alternativa1(i);
     
    double end = clock();
    
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

//  printf("t_end2a = %d cpu_time %lf\n",t_end2a,cpu_time_used);
    
    fprintf(p_to_f,"%d %lf\n",t_end2a,cpu_time_used);
    
   }

   fclose(p_to_f);
   
//*************************************************************************  
//Loop del numero de iteraciones para f3
//*************************************************************************  

  p_to_f = fopen("funcion1b.dat","w");

  for(i=1; i <= max_range; i++)
   {
      
    double start = clock();
    
    t1_alternativa2(i);
    
    double end = clock();
    
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

//   printf("t_end1b = %d cpu_time %lf\n",t_end1b, cpu_time_used);

    fprintf(p_to_f,"%d %lf\n",t_end1b, cpu_time_used);
   }

   fclose(p_to_f);
   
//*************************************************************************  
//Loop del numero de iteraciones para f4
//*************************************************************************  
   
  p_to_f = fopen("funcion2b.dat","w");
   
  for(i=1; i <= max_range; i++)
   {
      
    
    double start = clock();
     
    t2_alternativa2(i);
     
    double end = clock();
    
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

//     printf("t_end1b = %d CPU_TIME = %lf\n",t_end2b, cpu_time_used);
    fprintf(p_to_f,"%d %lf\n",t_end2b, cpu_time_used);
     
   }
   
   
  fclose(p_to_f);
  
  return 0;
  
  
}


