#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*segundo método
 * 
 * 
 * a[i,k] = b[i,k] * c[k]
 * 
 */


data_type arreglo2(int array_size)
{
  
 data_type a2[array_size][array_size], b2[array_size][array_size];
 
 data_type cc[array_size];
 
 
 double start2 = clock();


 for(k=1; k<=array_size; k++)
 {
  
   cc[k]=c*cc[k];
   
   for(i=1; i<=array_size; i++)
   {
     
     a2[i][k] = b2[i][k] * cc[k];
   } 

 }
 
   double end2 = clock();

   double cpu_time_used = ((double) (end2 - start2)) / CLOCKS_PER_SEC;
   
   printf("---> El tiempo que tomo evaluar el areglo a[i,k] = b[i,k] * c[k] es:\n");
   printf("---> CPU_TIME_USED (segs)=%lf\n",cpu_time_used);
    
   return cpu_time_used;

}
