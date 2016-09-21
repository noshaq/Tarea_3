#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
 
data_type arreglo1(int array_size)
{ 


data_type a[array_size],b[array_size];
  
  
double start = clock();
  
  for(i=1; i <= array_size; i++)
  {

    a[i]=b[i]*c;

  }
  
   double end = clock();

   double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
   
   printf("---> El tiempo que tomo evaluar el areglo a[i]=b[i]*c es:\n");
   printf("---> CPU_TIME_USED (segs)=%lf\n",cpu_time_used);
    
   return cpu_time_used;
    
}

